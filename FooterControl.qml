/****************************************************************************
Streamo
Copyright (C) 2017 André Frélicot
****************************************************************************/

import QtQuick 2.0

Item {
    id: footerControl

    signal doPlayPause (bool playOrPause)


    FontLoader
    {
        id: nunitoExtraBold
        source: "qrc:/assets/Nunito/Nunito-ExtraBold.ttf"
    }

    FontLoader
    {
        id: nunitoRegular
        source: "qrc:/assets/Nunito/Nunito-Regular.ttf"
    }



    function getHost()
    {
        return ipAddress.text
    }

    Rectangle
    {
        id: headerRect
        anchors.fill: parent
        color: "#4A52D1"


        TextEdit {
            id: ipAddress

            height: parent.height
            width: parent.width * 0.7

            x: 30

            text: ""

            color: "white"
            font.pointSize: parent.height * 0.4
            font.family: nunitoRegular.name

            //horizontalAlignment: Text.AlignHCenter
            verticalAlignment: Text.AlignVCenter


            Text
            {
                id: placeHolderIPText
                anchors.fill: parent



                horizontalAlignment: Text.AlignLeft
                verticalAlignment: Text.AlignVCenter

                opacity: 0.5
                text: "Send to IP"
                color: "white"
                font.pointSize: parent.height * 0.4
                font.family: nunitoRegular.name

                visible: !ipAddress.text
            }

            Rectangle
            {
                id: defaultText
                visible: false
                Text
                {
                    text: "Hello World"
                }
            }

        }



        Rectangle {
            width: parent.width * 0.3
            height: parent.height
            anchors.right: parent.right
            color: "transparent"



            Image {
                id: playImage
                anchors.fill: parent
                anchors.margins: 20
                visible: true

                source: "/assets/playButton.png"
                fillMode: Image.PreserveAspectFit
            }

            Image {
                id: pauseImage
                anchors.fill: parent
                anchors.margins: 20
                visible: false

                source: "/assets/pauseButton.png"
                fillMode: Image.PreserveAspectFit
            }

            MouseArea {
                id: playPause
                anchors.fill: parent



                onClicked: {
                    playImage.visible = !playImage.visible
                    pauseImage.visible = !pauseImage.visible

                    doPlayPause(!playImage.visible)

                    console.log("PLAY PAUSE")
                }
            }

        }

//        Text {
//            id: title
//            text: qsTr("Gizmo")
//            color: "white"
//            anchors.fill: parent

//            font.pointSize: 24

//            horizontalAlignment: Text.AlignHCenter
//            verticalAlignment: Text.AlignVCenter


//        }
    }

}
