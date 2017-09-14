/****************************************************************************
Streamo
Copyright (C) 2017 André Frélicot
****************************************************************************/

import QtQuick 2.0

Item {
    id: headerControl



    Rectangle
    {
        id: headerRect
        anchors.fill: parent
        color: "#4A52D1"


        Rectangle {
            anchors.fill: parent
            color: "#4A52D1"

            Text {
                id: title
                text: qsTr("STREAMER")
                color: "white"
                anchors.fill: parent

                font.pointSize: 24

                horizontalAlignment: Text.AlignHCenter
                verticalAlignment: Text.AlignVCenter

            }

//            Rectangle {
//                 width: parent.height / 2
//                 height: parent.height / 2
//                 color: "white"
//                 border.color: "black"
//                 border.width: 1
//                 radius: width*0.5

//                 //anchors.left: parent.left
//                 x: 50

//                 anchors.verticalCenter:  parent.verticalCenter
//                 Text {
//                      //anchor.fill : parent
//                      color: "red"
//                      text: "<"
//                      horizontalAlignment: Text.AlignHCenter
//                      verticalAlignment: Text.AlignVCenter
//                 }
//            }



        }



    }

}
