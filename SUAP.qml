import QtQuick 2.13
import QtQuick.Controls 2.13
import QtQuick.Layouts 1.13
import QtQuick.Controls.Material 2.13

import br.ifba.edu.emile 1.0
import com.ifba.edu.scraping 1.0

import "FontAwesome"

Page {
    title: "Emile - Funcionalidades do SUAP"
    property int currentPageIndex: 0

    QWebScraper {
        id: scraper
        actions: [
            QWebScraperAction {
                endpoint: "https://suap.ifba.edu.br/edu/aluno/" + core.networkController.login +  "/?tab=boletim"
                scraps: [
                    {
                        "name": "terms",
                        "query": "//*[@id='ano_periodo']/option/string()",
                    },
                    {
                        "name": "gradesReport",
                        "query": "/html/body/div[1]/main/div[13]/div[2]/div/table/tbody/tr/td[$index]/string()",
                        "indexes": [2, 3, 4, 6, 5, 7, 8, 9, 10, 11, 12, 13, 14],
                        "headers": [
                            "courseName", "workload", "totalClasses", "attendance", "totalUnattendances",
                            "situation", "part1Grade", "part1Unattendances", "partsGrade",
                            "finalPartGrade", "finalPartUnattendances", "finalGrade", "detailsLink,/html/body/div[1]/main/div[13]/div[2]/div/table/tbody/tr/td[14]/a/@href/string()"
                        ],
                        "responseParser": QWebScraperResponseParser.TableParser

                    }
                ]
            }
        ]
        onStatusChanged: {
            if (scraper.status === QWebScraperStatus.Ready){
                console.timeEnd("gradesReport");
                stackView.push(listView.model[currentPageIndex].page)
            }
        }
    }

    ListView {
        id: listView
        anchors { fill: parent; margins: 10 }
        model: [
            { "icon": Icons.faDatabase, "description": "meus dados", "page": "qrc:/MyData.qml" },
            { "icon": Icons.faBook, "description": "minhas disciplinas", "page": "qrc:/MyCourses.qml" },
            { "icon": Icons.faMedal, "description": "meu boletim", "page": "qrc:/GradesReport.qml", "profile": NetworkController.UserType.Student },
            { "icon": Icons.faFilePdf, "description": "meus documentos", "page": "qrc:/Documents.qml", "profile": NetworkController.UserType.Student }
        ]
        spacing: 10
        delegate: Item {
            width: parent.width
            height: frame.height
            visible: modelData.profile === undefined || core.networkController.userType === modelData.profile
            Frame {
                id: frame
                width: parent.width
                Material.elevation: 1
                ColumnLayout {
                    id: columnLayout
                    width: parent.width
                    spacing: 10
                    Label {
                        Layout.fillWidth: true
                        horizontalAlignment: Text.AlignHCenter
                        font { family: FontAwesome.solid; pointSize: 24 }
                        text: modelData.icon
                        Material.foreground: "#03728c"
                    }
                    Label {
                        Layout.fillWidth: true
                        horizontalAlignment: Text.AlignHCenter
                        font.capitalization: Font.AllUppercase
                        text: modelData.description
                    }
                }
            }
            MouseArea {
                anchors.fill: parent
                onClicked: {
                    console.time("gradesReport");
                    if (index === 2) {
                        currentPageIndex = index;
                        scraper.scrap()
                    }
                    else stackView.push(modelData.page)
                }
            }
        }
    }
}
