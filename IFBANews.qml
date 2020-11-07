import QtQuick 2.13
import QtQuick.Controls 2.13
import QtQuick.Layouts 1.13
import QtQuick.Controls.Material 2.13
import Qt.labs.settings 1.1

import "FontAwesome"
import com.ifba.edu.scraping 1.0

Page {
    title: "Emile - Notícias do IFBA"
    property string currentTitle

    QWebScraper {
       id: scraper
       actions: [
           QWebScraperAction {
               endpoint: "https://portal.ifba.edu.br/noticias-pagina-principal"
               scraps: [
                   {
                       "name": "newsTitles",
                       "query": "//*[@id='content-core']/div/h2/a/string()"
                   },
                   {
                       "name": "newsUrls",
                       "query": "//*[@id='content-core']/div/h2/a/@href/string()"
                   }
               ]
           }
       ]
       onStatusChanged: {
           if (status === QWebScraperStatus.Ready) console.timeEnd("allNews");
       }
    }
    QWebScraper {
       id: scraperDetails
       actions: [
           QWebScraperAction {
               scraps: [
                   {
                       "name": "newsDetails",
                       "query": "/html/body/div[3]/div[2]/div[1]/div/div[3]/div[1]/div/article/div[5]/string()"
                   }
               ]
           }
       ]
       onStatusChanged: {
           if (scraperDetails.status === QWebScraperStatus.Ready) {
               console.timeEnd("detailsNews");
               stackView.push("qrc:/News.qml", { newsTitle: currentTitle, scrapCtx: scraperDetails.ctx })
           }
       }
    }
    ColumnLayout {
        anchors { fill: parent; margins: 10 }

        ListView {
            Layout.fillWidth: true
            Layout.fillHeight: true
            model: scraper.ctx["newsTitles"]
            spacing: 10
            delegate: Frame {
                width: parent.width
                height: rowLayout.height + 2*rowLayout.anchors.margins
                Material.elevation: 3
                padding: 0
                topPadding: 0
                bottomPadding: 0
                ItemDelegate {
                    width: parent.width
                    height: rowLayout.height + 2*rowLayout.anchors.margins
                    padding: 0; topPadding: 0; bottomPadding: 0
                    RowLayout {
                        id: rowLayout
                        height: newsLabel.height+anchors.margins
                        anchors { right: parent.right; left: parent.left; top: parent.top; margins: 10 }
                        Label {
                            id: newsLabel
                            text: modelData
                            Layout.fillWidth: true
                            wrapMode: Text.WordWrap
                            Layout.alignment: Qt.AlignVCenter
                        }
                        Label {
                            font { family: FontAwesome.solid }
                            Material.foreground: "#03728c"
                            text: Icons.faChevronRight
                            Layout.alignment: Qt.AlignVCenter
                        }
                    }
                    onClicked: {
                        currentTitle = modelData
                        scraperDetails.actions[0].endpoint = scraper.ctx["newsUrls"][index]
                        console.time("detailsNews");
                        scraperDetails.scrap()
                    }
                }
            }
        }
    }
    Component.onCompleted: {
        console.time("allNews");
        scraper.scrap()
    }
}
