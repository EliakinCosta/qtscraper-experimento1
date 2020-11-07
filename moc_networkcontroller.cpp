/****************************************************************************
** Meta object code from reading C++ file 'networkcontroller.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "networkcontroller.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'networkcontroller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ScrapReply_t {
    QByteArrayData data[6];
    char stringdata0[66];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ScrapReply_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ScrapReply_t qt_meta_stringdata_ScrapReply = {
    {
QT_MOC_LITERAL(0, 0, 10), // "ScrapReply"
QT_MOC_LITERAL(1, 11, 8), // "finished"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 26), // "QHash<QString,QStringList>"
QT_MOC_LITERAL(4, 48, 6), // "result"
QT_MOC_LITERAL(5, 55, 10) // "statusCode"

    },
    "ScrapReply\0finished\0\0QHash<QString,QStringList>\0"
    "result\0statusCode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ScrapReply[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       1,    2,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    5,    4,

       0        // eod
};

void ScrapReply::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ScrapReply *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->finished((*reinterpret_cast< const QHash<QString,QStringList>(*)>(_a[1]))); break;
        case 1: _t->finished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ScrapReply::*)(const QHash<QString,QStringList> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScrapReply::finished)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ScrapReply::*)(int , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScrapReply::finished)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ScrapReply::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_ScrapReply.data,
    qt_meta_data_ScrapReply,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ScrapReply::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScrapReply::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ScrapReply.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ScrapReply::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void ScrapReply::finished(const QHash<QString,QStringList> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ScrapReply::finished(int _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_NetworkController_t {
    QByteArrayData data[85];
    char stringdata0[1235];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NetworkController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NetworkController_t qt_meta_stringdata_NetworkController = {
    {
QT_MOC_LITERAL(0, 0, 17), // "NetworkController"
QT_MOC_LITERAL(1, 18, 19), // "newVersionAvailable"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 17), // "userAuthenticated"
QT_MOC_LITERAL(4, 57, 13), // "statusChanged"
QT_MOC_LITERAL(5, 71, 25), // "NetworkController::Status"
QT_MOC_LITERAL(6, 97, 19), // "sessionStateChanged"
QT_MOC_LITERAL(7, 117, 31), // "NetworkController::SessionState"
QT_MOC_LITERAL(8, 149, 15), // "userTypeChanged"
QT_MOC_LITERAL(9, 165, 27), // "NetworkController::UserType"
QT_MOC_LITERAL(10, 193, 18), // "errorStringChanged"
QT_MOC_LITERAL(11, 212, 11), // "errorString"
QT_MOC_LITERAL(12, 224, 15), // "usernameChanged"
QT_MOC_LITERAL(13, 240, 8), // "username"
QT_MOC_LITERAL(14, 249, 12), // "loginChanged"
QT_MOC_LITERAL(15, 262, 5), // "login"
QT_MOC_LITERAL(16, 268, 13), // "myDataChanged"
QT_MOC_LITERAL(17, 282, 6), // "myData"
QT_MOC_LITERAL(18, 289, 12), // "termsChanged"
QT_MOC_LITERAL(19, 302, 5), // "terms"
QT_MOC_LITERAL(20, 308, 14), // "coursesChanged"
QT_MOC_LITERAL(21, 323, 7), // "courses"
QT_MOC_LITERAL(22, 331, 18), // "coursePartsChanged"
QT_MOC_LITERAL(23, 350, 11), // "courseParts"
QT_MOC_LITERAL(24, 362, 20), // "courseClassesChanged"
QT_MOC_LITERAL(25, 383, 13), // "courseClasses"
QT_MOC_LITERAL(26, 397, 21), // "courseStudentsChanged"
QT_MOC_LITERAL(27, 419, 14), // "courseStudents"
QT_MOC_LITERAL(28, 434, 19), // "PRPGINoticesChanged"
QT_MOC_LITERAL(29, 454, 12), // "PRPGINotices"
QT_MOC_LITERAL(30, 467, 26), // "gradesReportDetailsChanged"
QT_MOC_LITERAL(31, 494, 19), // "gradesReportDetails"
QT_MOC_LITERAL(32, 514, 29), // "seiPublicSearchCaptchaChanged"
QT_MOC_LITERAL(33, 544, 16), // "seiPublicCaptcha"
QT_MOC_LITERAL(34, 561, 24), // "seiProcessDetailsChanged"
QT_MOC_LITERAL(35, 586, 17), // "seiProcessDetails"
QT_MOC_LITERAL(36, 604, 23), // "seiPublicSearchPrepared"
QT_MOC_LITERAL(37, 628, 26), // "seiProcessDetailsAvailable"
QT_MOC_LITERAL(38, 655, 12), // "getBasicData"
QT_MOC_LITERAL(39, 668, 9), // "getMyData"
QT_MOC_LITERAL(40, 678, 10), // "getCourses"
QT_MOC_LITERAL(41, 689, 4), // "term"
QT_MOC_LITERAL(42, 694, 16), // "getCourseClasses"
QT_MOC_LITERAL(43, 711, 8), // "courseId"
QT_MOC_LITERAL(44, 720, 12), // "coursePartId"
QT_MOC_LITERAL(45, 733, 17), // "getCourseStudents"
QT_MOC_LITERAL(46, 751, 12), // "totalClasses"
QT_MOC_LITERAL(47, 764, 19), // "registerUpdateClass"
QT_MOC_LITERAL(48, 784, 5), // "hours"
QT_MOC_LITERAL(49, 790, 4), // "date"
QT_MOC_LITERAL(50, 795, 11), // "description"
QT_MOC_LITERAL(51, 807, 14), // "previousPartId"
QT_MOC_LITERAL(52, 822, 7), // "classId"
QT_MOC_LITERAL(53, 830, 24), // "registerUpdateAttendance"
QT_MOC_LITERAL(54, 855, 11), // "attendances"
QT_MOC_LITERAL(55, 867, 6), // "partId"
QT_MOC_LITERAL(56, 874, 11), // "removeClass"
QT_MOC_LITERAL(57, 886, 5), // "index"
QT_MOC_LITERAL(58, 892, 15), // "getPRPGINotices"
QT_MOC_LITERAL(59, 908, 18), // "getStudentDocument"
QT_MOC_LITERAL(60, 927, 12), // "documentName"
QT_MOC_LITERAL(61, 940, 3), // "url"
QT_MOC_LITERAL(62, 944, 22), // "getGradesReportDetails"
QT_MOC_LITERAL(63, 967, 28), // "resetSEIPublicSearchAttempts"
QT_MOC_LITERAL(64, 996, 22), // "prepareSEIPublicSearch"
QT_MOC_LITERAL(65, 1019, 12), // "emitPrepared"
QT_MOC_LITERAL(66, 1032, 16), // "searchSEIProcess"
QT_MOC_LITERAL(67, 1049, 13), // "processNumber"
QT_MOC_LITERAL(68, 1063, 7), // "captcha"
QT_MOC_LITERAL(69, 1071, 20), // "getSEIProcessDetails"
QT_MOC_LITERAL(70, 1092, 6), // "status"
QT_MOC_LITERAL(71, 1099, 6), // "Status"
QT_MOC_LITERAL(72, 1106, 12), // "sessionState"
QT_MOC_LITERAL(73, 1119, 12), // "SessionState"
QT_MOC_LITERAL(74, 1132, 8), // "userType"
QT_MOC_LITERAL(75, 1141, 8), // "UserType"
QT_MOC_LITERAL(76, 1150, 22), // "seiPublicSearchCaptcha"
QT_MOC_LITERAL(77, 1173, 4), // "Null"
QT_MOC_LITERAL(78, 1178, 7), // "Loading"
QT_MOC_LITERAL(79, 1186, 5), // "Ready"
QT_MOC_LITERAL(80, 1192, 5), // "Error"
QT_MOC_LITERAL(81, 1198, 9), // "LoggedOut"
QT_MOC_LITERAL(82, 1208, 8), // "LoggedIn"
QT_MOC_LITERAL(83, 1217, 9), // "Professor"
QT_MOC_LITERAL(84, 1227, 7) // "Student"

    },
    "NetworkController\0newVersionAvailable\0"
    "\0userAuthenticated\0statusChanged\0"
    "NetworkController::Status\0sessionStateChanged\0"
    "NetworkController::SessionState\0"
    "userTypeChanged\0NetworkController::UserType\0"
    "errorStringChanged\0errorString\0"
    "usernameChanged\0username\0loginChanged\0"
    "login\0myDataChanged\0myData\0termsChanged\0"
    "terms\0coursesChanged\0courses\0"
    "coursePartsChanged\0courseParts\0"
    "courseClassesChanged\0courseClasses\0"
    "courseStudentsChanged\0courseStudents\0"
    "PRPGINoticesChanged\0PRPGINotices\0"
    "gradesReportDetailsChanged\0"
    "gradesReportDetails\0seiPublicSearchCaptchaChanged\0"
    "seiPublicCaptcha\0seiProcessDetailsChanged\0"
    "seiProcessDetails\0seiPublicSearchPrepared\0"
    "seiProcessDetailsAvailable\0getBasicData\0"
    "getMyData\0getCourses\0term\0getCourseClasses\0"
    "courseId\0coursePartId\0getCourseStudents\0"
    "totalClasses\0registerUpdateClass\0hours\0"
    "date\0description\0previousPartId\0classId\0"
    "registerUpdateAttendance\0attendances\0"
    "partId\0removeClass\0index\0getPRPGINotices\0"
    "getStudentDocument\0documentName\0url\0"
    "getGradesReportDetails\0"
    "resetSEIPublicSearchAttempts\0"
    "prepareSEIPublicSearch\0emitPrepared\0"
    "searchSEIProcess\0processNumber\0captcha\0"
    "getSEIProcessDetails\0status\0Status\0"
    "sessionState\0SessionState\0userType\0"
    "UserType\0seiPublicSearchCaptcha\0Null\0"
    "Loading\0Ready\0Error\0LoggedOut\0LoggedIn\0"
    "Professor\0Student"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NetworkController[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      38,   14, // methods
      16,  344, // properties
       3,  408, // enums/sets
       0,    0, // constructors
       0,       // flags
      20,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  204,    2, 0x06 /* Public */,
       3,    0,  205,    2, 0x06 /* Public */,
       4,    1,  206,    2, 0x06 /* Public */,
       6,    1,  209,    2, 0x06 /* Public */,
       8,    1,  212,    2, 0x06 /* Public */,
      10,    1,  215,    2, 0x06 /* Public */,
      12,    1,  218,    2, 0x06 /* Public */,
      14,    1,  221,    2, 0x06 /* Public */,
      16,    1,  224,    2, 0x06 /* Public */,
      18,    1,  227,    2, 0x06 /* Public */,
      20,    1,  230,    2, 0x06 /* Public */,
      22,    1,  233,    2, 0x06 /* Public */,
      24,    1,  236,    2, 0x06 /* Public */,
      26,    1,  239,    2, 0x06 /* Public */,
      28,    1,  242,    2, 0x06 /* Public */,
      30,    1,  245,    2, 0x06 /* Public */,
      32,    1,  248,    2, 0x06 /* Public */,
      34,    1,  251,    2, 0x06 /* Public */,
      36,    0,  254,    2, 0x06 /* Public */,
      37,    0,  255,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
      38,    0,  256,    2, 0x02 /* Public */,
      39,    0,  257,    2, 0x02 /* Public */,
      40,    1,  258,    2, 0x02 /* Public */,
      42,    2,  261,    2, 0x02 /* Public */,
      42,    1,  266,    2, 0x22 /* Public | MethodCloned */,
      45,    3,  269,    2, 0x02 /* Public */,
      47,    7,  276,    2, 0x02 /* Public */,
      47,    6,  291,    2, 0x22 /* Public | MethodCloned */,
      53,    4,  304,    2, 0x02 /* Public */,
      56,    4,  313,    2, 0x02 /* Public */,
      58,    0,  322,    2, 0x02 /* Public */,
      59,    2,  323,    2, 0x02 /* Public */,
      62,    1,  328,    2, 0x02 /* Public */,
      63,    0,  331,    2, 0x02 /* Public */,
      64,    1,  332,    2, 0x02 /* Public */,
      64,    0,  335,    2, 0x22 /* Public | MethodCloned */,
      66,    2,  336,    2, 0x02 /* Public */,
      69,    1,  341,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void, 0x80000000 | 9,    2,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void, QMetaType::QJsonObject,   17,
    QMetaType::Void, QMetaType::QStringList,   19,
    QMetaType::Void, QMetaType::QJsonArray,   21,
    QMetaType::Void, QMetaType::QJsonArray,   23,
    QMetaType::Void, QMetaType::QJsonArray,   25,
    QMetaType::Void, QMetaType::QJsonArray,   27,
    QMetaType::Void, QMetaType::QJsonArray,   29,
    QMetaType::Void, QMetaType::QJsonArray,   31,
    QMetaType::Void, QMetaType::QString,   33,
    QMetaType::Void, QMetaType::QJsonObject,   35,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   41,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   43,   44,
    QMetaType::Void, QMetaType::QString,   43,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::QString,   43,   46,   44,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,   43,   44,   48,   49,   50,   51,   52,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,   43,   44,   48,   49,   50,   51,
    QMetaType::Void, QMetaType::QString, QMetaType::QVariantMap, QMetaType::QString, QMetaType::QString,   52,   54,   43,   55,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::QString, QMetaType::QString,   52,   57,   43,   51,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   60,   61,
    QMetaType::Void, QMetaType::QString,   61,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   65,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   67,   68,
    QMetaType::Void, QMetaType::QString,   61,

 // properties: name, type, flags
      70, 0x80000000 | 71, 0x00495009,
      72, 0x80000000 | 73, 0x00495009,
      74, 0x80000000 | 75, 0x00495009,
      11, QMetaType::QString, 0x00495001,
      13, QMetaType::QString, 0x00495001,
      15, QMetaType::QString, 0x00495001,
      17, QMetaType::QJsonObject, 0x00495001,
      19, QMetaType::QStringList, 0x00495001,
      21, QMetaType::QJsonArray, 0x00495001,
      23, QMetaType::QJsonArray, 0x00495001,
      25, QMetaType::QJsonArray, 0x00495001,
      27, QMetaType::QJsonArray, 0x00495001,
      29, QMetaType::QJsonArray, 0x00495001,
      31, QMetaType::QJsonArray, 0x00495001,
      76, QMetaType::QString, 0x00495001,
      35, QMetaType::QJsonObject, 0x00495001,

 // properties: notify_signal_id
       2,
       3,
       4,
       5,
       6,
       7,
       8,
       9,
      10,
      11,
      12,
      13,
      14,
      15,
      16,
      17,

 // enums: name, alias, flags, count, data
      71,   71, 0x0,    4,  423,
      73,   73, 0x0,    2,  431,
      75,   75, 0x2,    2,  435,

 // enum data: key, value
      77, uint(NetworkController::Null),
      78, uint(NetworkController::Loading),
      79, uint(NetworkController::Ready),
      80, uint(NetworkController::Error),
      81, uint(NetworkController::LoggedOut),
      82, uint(NetworkController::LoggedIn),
      83, uint(NetworkController::UserType::Professor),
      84, uint(NetworkController::UserType::Student),

       0        // eod
};

void NetworkController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NetworkController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newVersionAvailable(); break;
        case 1: _t->userAuthenticated(); break;
        case 2: _t->statusChanged((*reinterpret_cast< NetworkController::Status(*)>(_a[1]))); break;
        case 3: _t->sessionStateChanged((*reinterpret_cast< NetworkController::SessionState(*)>(_a[1]))); break;
        case 4: _t->userTypeChanged((*reinterpret_cast< NetworkController::UserType(*)>(_a[1]))); break;
        case 5: _t->errorStringChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->usernameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->loginChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->myDataChanged((*reinterpret_cast< const QJsonObject(*)>(_a[1]))); break;
        case 9: _t->termsChanged((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 10: _t->coursesChanged((*reinterpret_cast< const QJsonArray(*)>(_a[1]))); break;
        case 11: _t->coursePartsChanged((*reinterpret_cast< const QJsonArray(*)>(_a[1]))); break;
        case 12: _t->courseClassesChanged((*reinterpret_cast< const QJsonArray(*)>(_a[1]))); break;
        case 13: _t->courseStudentsChanged((*reinterpret_cast< const QJsonArray(*)>(_a[1]))); break;
        case 14: _t->PRPGINoticesChanged((*reinterpret_cast< const QJsonArray(*)>(_a[1]))); break;
        case 15: _t->gradesReportDetailsChanged((*reinterpret_cast< const QJsonArray(*)>(_a[1]))); break;
        case 16: _t->seiPublicSearchCaptchaChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 17: _t->seiProcessDetailsChanged((*reinterpret_cast< const QJsonObject(*)>(_a[1]))); break;
        case 18: _t->seiPublicSearchPrepared(); break;
        case 19: _t->seiProcessDetailsAvailable(); break;
        case 20: _t->getBasicData(); break;
        case 21: _t->getMyData(); break;
        case 22: _t->getCourses((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 23: _t->getCourseClasses((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 24: _t->getCourseClasses((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 25: _t->getCourseStudents((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 26: _t->registerUpdateClass((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< const QString(*)>(_a[6])),(*reinterpret_cast< const QString(*)>(_a[7]))); break;
        case 27: _t->registerUpdateClass((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< const QString(*)>(_a[6]))); break;
        case 28: _t->registerUpdateAttendance((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariantMap(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 29: _t->removeClass((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 30: _t->getPRPGINotices(); break;
        case 31: _t->getStudentDocument((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 32: _t->getGradesReportDetails((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 33: _t->resetSEIPublicSearchAttempts(); break;
        case 34: _t->prepareSEIPublicSearch((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 35: _t->prepareSEIPublicSearch(); break;
        case 36: _t->searchSEIProcess((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 37: _t->getSEIProcessDetails((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (NetworkController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetworkController::newVersionAvailable)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (NetworkController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetworkController::userAuthenticated)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (NetworkController::*)(NetworkController::Status );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetworkController::statusChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (NetworkController::*)(NetworkController::SessionState );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetworkController::sessionStateChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (NetworkController::*)(NetworkController::UserType );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetworkController::userTypeChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (NetworkController::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetworkController::errorStringChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (NetworkController::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetworkController::usernameChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (NetworkController::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetworkController::loginChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (NetworkController::*)(const QJsonObject & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetworkController::myDataChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (NetworkController::*)(const QStringList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetworkController::termsChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (NetworkController::*)(const QJsonArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetworkController::coursesChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (NetworkController::*)(const QJsonArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetworkController::coursePartsChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (NetworkController::*)(const QJsonArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetworkController::courseClassesChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (NetworkController::*)(const QJsonArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetworkController::courseStudentsChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (NetworkController::*)(const QJsonArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetworkController::PRPGINoticesChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (NetworkController::*)(const QJsonArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetworkController::gradesReportDetailsChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (NetworkController::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetworkController::seiPublicSearchCaptchaChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (NetworkController::*)(const QJsonObject & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetworkController::seiProcessDetailsChanged)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (NetworkController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetworkController::seiPublicSearchPrepared)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (NetworkController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetworkController::seiProcessDetailsAvailable)) {
                *result = 19;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<NetworkController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Status*>(_v) = _t->status(); break;
        case 1: *reinterpret_cast< SessionState*>(_v) = _t->sessionState(); break;
        case 2: *reinterpret_cast< UserType*>(_v) = _t->userType(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->errorString(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->username(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->login(); break;
        case 6: *reinterpret_cast< QJsonObject*>(_v) = _t->myData(); break;
        case 7: *reinterpret_cast< QStringList*>(_v) = _t->terms(); break;
        case 8: *reinterpret_cast< QJsonArray*>(_v) = _t->courses(); break;
        case 9: *reinterpret_cast< QJsonArray*>(_v) = _t->courseParts(); break;
        case 10: *reinterpret_cast< QJsonArray*>(_v) = _t->courseClasses(); break;
        case 11: *reinterpret_cast< QJsonArray*>(_v) = _t->courseStudents(); break;
        case 12: *reinterpret_cast< QJsonArray*>(_v) = _t->PRPGINotices(); break;
        case 13: *reinterpret_cast< QJsonArray*>(_v) = _t->gradesReportDetails(); break;
        case 14: *reinterpret_cast< QString*>(_v) = _t->seiPublicSearchCaptcha(); break;
        case 15: *reinterpret_cast< QJsonObject*>(_v) = _t->seiProcessDetails(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject NetworkController::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_NetworkController.data,
    qt_meta_data_NetworkController,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *NetworkController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NetworkController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NetworkController.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int NetworkController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 38)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 38;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 38)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 38;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 16;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void NetworkController::newVersionAvailable()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void NetworkController::userAuthenticated()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void NetworkController::statusChanged(NetworkController::Status _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void NetworkController::sessionStateChanged(NetworkController::SessionState _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void NetworkController::userTypeChanged(NetworkController::UserType _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void NetworkController::errorStringChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void NetworkController::usernameChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void NetworkController::loginChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void NetworkController::myDataChanged(const QJsonObject & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void NetworkController::termsChanged(const QStringList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void NetworkController::coursesChanged(const QJsonArray & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void NetworkController::coursePartsChanged(const QJsonArray & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void NetworkController::courseClassesChanged(const QJsonArray & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void NetworkController::courseStudentsChanged(const QJsonArray & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void NetworkController::PRPGINoticesChanged(const QJsonArray & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void NetworkController::gradesReportDetailsChanged(const QJsonArray & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void NetworkController::seiPublicSearchCaptchaChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void NetworkController::seiProcessDetailsChanged(const QJsonObject & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void NetworkController::seiPublicSearchPrepared()
{
    QMetaObject::activate(this, &staticMetaObject, 18, nullptr);
}

// SIGNAL 19
void NetworkController::seiProcessDetailsAvailable()
{
    QMetaObject::activate(this, &staticMetaObject, 19, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
