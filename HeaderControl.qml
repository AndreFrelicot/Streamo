/****************************************************************************
Streamo
Copyright (C) 2017 André Frélicot
****************************************************************************/

import QtQuick 2.0

Item {
    id: headerControl


    FontLoader
    {
        id: nunitoExtraBold
        source: "qrc:/assets/Nunito/Nunito-ExtraBold.ttf"
    }


    Rectangle
    {
        id: headerRect
        anchors.fill: parent
        color: "#4A52D1"


        Rectangle {
            id: rectangle
            anchors.fill: parent
            color: "#4A52D1"



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

                    color: "#4A52D1"

                    Text {
                        id: title
                        text: qsTr("Data gizmo")
                        color: "white"
                        anchors.fill: parent

                        font.pointSize: 32
                        font.family: nunitoExtraBold.name

                        horizontalAlignment: Text.AlignHCenter
                        verticalAlignment: Text.AlignVCenter

                    }

                    //opacity: 0.5
                }


                Rectangle {
                    id: rightControlRect
                    height: parent.height
                    width: parent.width * 0.25
                    //width: parent.width<parent.height?parent.width:parent.height

                    x: leftControlRect.width + titleTextRect.width
                    color: "lightgreen"


                    Rectangle {
                        id: testCircle
                        height: parent.height
                        width: parent.width<parent.height?parent.width:parent.height
                        radius: width * 0.5
                        color: "red"
                        anchors.horizontalCenter: parent.horizontalCenter
                    }
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
