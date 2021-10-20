import QtQuick 2.15
import QtQuick.Window 2.15

Window {                        //компонент для создания окна (единственный, корневой)
    id: root
    width: 640
    height: 480
    visible: true
    title: qsTr("Пятнашечки")

    GameBoard {
        anchors.fill: parent
    }
}
