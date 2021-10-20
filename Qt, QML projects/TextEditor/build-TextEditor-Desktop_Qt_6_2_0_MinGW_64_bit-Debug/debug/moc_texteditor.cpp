/****************************************************************************
** Meta object code from reading C++ file 'texteditor.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../TextEditor/texteditor.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'texteditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TextEditor_t {
    const uint offsetsAndSize[34];
    char stringdata0[347];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_TextEditor_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_TextEditor_t qt_meta_stringdata_TextEditor = {
    {
QT_MOC_LITERAL(0, 10), // "TextEditor"
QT_MOC_LITERAL(11, 22), // "on_actionNew_triggered"
QT_MOC_LITERAL(34, 0), // ""
QT_MOC_LITERAL(35, 24), // "on_actionClose_triggered"
QT_MOC_LITERAL(60, 23), // "on_actionExit_triggered"
QT_MOC_LITERAL(84, 16), // "documentModified"
QT_MOC_LITERAL(101, 29), // "on_actionSelectFont_triggered"
QT_MOC_LITERAL(131, 26), // "on_actionAboutQt_triggered"
QT_MOC_LITERAL(158, 24), // "on_actionAbout_triggered"
QT_MOC_LITERAL(183, 22), // "on_actionCut_triggered"
QT_MOC_LITERAL(206, 23), // "on_actionCopy_triggered"
QT_MOC_LITERAL(230, 24), // "on_actionPaste_triggered"
QT_MOC_LITERAL(255, 23), // "on_actionUndo_triggered"
QT_MOC_LITERAL(279, 23), // "on_actionRedo_triggered"
QT_MOC_LITERAL(303, 23), // "on_actionOpen_triggered"
QT_MOC_LITERAL(327, 8), // "saveFile"
QT_MOC_LITERAL(336, 10) // "saveFileAs"

    },
    "TextEditor\0on_actionNew_triggered\0\0"
    "on_actionClose_triggered\0"
    "on_actionExit_triggered\0documentModified\0"
    "on_actionSelectFont_triggered\0"
    "on_actionAboutQt_triggered\0"
    "on_actionAbout_triggered\0"
    "on_actionCut_triggered\0on_actionCopy_triggered\0"
    "on_actionPaste_triggered\0"
    "on_actionUndo_triggered\0on_actionRedo_triggered\0"
    "on_actionOpen_triggered\0saveFile\0"
    "saveFileAs"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TextEditor[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  104,    2, 0x08,    1 /* Private */,
       3,    0,  105,    2, 0x08,    2 /* Private */,
       4,    0,  106,    2, 0x08,    3 /* Private */,
       5,    0,  107,    2, 0x08,    4 /* Private */,
       6,    0,  108,    2, 0x08,    5 /* Private */,
       7,    0,  109,    2, 0x08,    6 /* Private */,
       8,    0,  110,    2, 0x08,    7 /* Private */,
       9,    0,  111,    2, 0x08,    8 /* Private */,
      10,    0,  112,    2, 0x08,    9 /* Private */,
      11,    0,  113,    2, 0x08,   10 /* Private */,
      12,    0,  114,    2, 0x08,   11 /* Private */,
      13,    0,  115,    2, 0x08,   12 /* Private */,
      14,    0,  116,    2, 0x08,   13 /* Private */,
      15,    0,  117,    2, 0x08,   14 /* Private */,
      16,    0,  118,    2, 0x08,   15 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Bool,

       0        // eod
};

void TextEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TextEditor *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_actionNew_triggered(); break;
        case 1: _t->on_actionClose_triggered(); break;
        case 2: _t->on_actionExit_triggered(); break;
        case 3: _t->documentModified(); break;
        case 4: _t->on_actionSelectFont_triggered(); break;
        case 5: _t->on_actionAboutQt_triggered(); break;
        case 6: _t->on_actionAbout_triggered(); break;
        case 7: _t->on_actionCut_triggered(); break;
        case 8: _t->on_actionCopy_triggered(); break;
        case 9: _t->on_actionPaste_triggered(); break;
        case 10: _t->on_actionUndo_triggered(); break;
        case 11: _t->on_actionRedo_triggered(); break;
        case 12: _t->on_actionOpen_triggered(); break;
        case 13: { bool _r = _t->saveFile();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 14: { bool _r = _t->saveFileAs();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject TextEditor::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_TextEditor.offsetsAndSize,
    qt_meta_data_TextEditor,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_TextEditor_t
, QtPrivate::TypeAndForceComplete<TextEditor, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>


>,
    nullptr
} };


const QMetaObject *TextEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TextEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TextEditor.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int TextEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
