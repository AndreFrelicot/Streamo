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
            id: rectangle
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

            Rectangle {
                id: headerUpMargin
                anchors.top: parent.top
                anchors.leftMargin: parent.left

                width: parent.width
                height: parent.height * 0.2

                color: "red"

            }

            Rectangle {
                id: titleControls

                anchors.top: parent.top
                anchors.leftMargin: parent.left

                width: parent.width
                height: parent.height * 0.5

                color: "green"
                anchors.topMargin: headerUpMargin.height


                Rectangle {
                    id: leftControlRect

                    height: parent.height
                    width: parent.width * 0.25

                    color: "purple"

                }

                Rectangle {
                    id: titleTextRect
                    height: parent.height
                    width: parent.width * 0.5
                    x: leftControlRect.width

                    color: "pink"

                    //opacity: 0.5
                }


                Rectangle {
                    id: rightControlRect
                    height: parent.height
                    width: parent.width * 0.25
                    x: leftControlRect.width + titleTextRect.width
                    color: "lightgreen"
                }

                //opacity: 0.5

            }

            Rectangle
            {
                id: controlPosition
                anchors.top: parent.top
                anchors.leftMargin: parent.left

                width: parent.width
                height: parent.height * 0.2

                color: "yellow"

                anchors.topMargin: headerUpMargin.height + titleControls.height

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
