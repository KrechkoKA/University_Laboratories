import QtQuick 2.0

Rectangle {
    id: root

    property string displayText: ""

    color: "black"

    radius: 10
    border.color: "pink"
    border.width: 1

    Text {
        id: _firstText
        anchors.centerIn: root
        color: "pink"
        text: root.displayText
        font {
            pointSize: Math.min(root.width, root.height) / 2
            bold: true

        }
    }
}
