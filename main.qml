/****************************************************************************
Streamo
Copyright (C) 2017 André Frélicot
****************************************************************************/

import QtQuick 2.0
import QtQuick.Scene3D 2.0
import QtQuick.Layouts 1.1
import OSC 1.0
import QtSensors 5.0

import QtQuick.Controls 1.4


Item {
anchors.fill:  parent

    Timer {
        id: oscTimer
            interval: 16.0; running: false; repeat: true
            onTriggered:
            {
                console.log("--------Send OSC packet--------")


                //console.log(accR.x)
                osc.send("/acc/x", acc.reading.x);
                osc.send("/acc/y", acc.reading.y);
                osc.send("/acc/z", acc.reading.z);

                osc.send("/gyro/x", gyro.reading.x);
                osc.send("/gyro/y", gyro.reading.y);
                osc.send("/gyro/z", gyro.reading.z);

                osc.send("/magneto/x", mag.reading.x);
                osc.send("/magneto/y", gyro.reading.y);
                osc.send("/magneto/z", gyro.reading.z);

            }
        }

//    MouseArea {

//        anchors.fill: parent

//        onClicked: {
//            console.log("OSC Click")
//            osc.send("/test", "hello");
//        }

//    }

    //width: 800
    //height: 500

    HeaderControl {
        id: header
     width: parent.width
     height: parent.height * 0.2


    }

    OSCSender {
            id: osc
            ip: '192.168.0.26'
            port: 7474
        }



    Gyroscope {
        id: gyro
        dataRate: 20
        active: true


        onReadingChanged: {
            //console.log("Gyro max range: " + Range.maximum);
            //console.log("Gyro min range:" + Range.minimum)
        }
    }

    Accelerometer {
        id: acc
        dataRate: 20
        active: true

        onReadingChanged: {
            //osc.send("/acc/x", acc.reading.x);
        }
    }

    Magnetometer {
        id: mag
        dataRate: 20
        active: true

    }

    Rectangle {
        id: scene
        //anchors.fill: parent
        //anchors.margins: 50

        y: parent.height * 0.2
        color: "white"
        width: parent.width
        height: parent.height * 0.6


        transform: Rotation {
            id: sceneRotation
            axis.x: 1
            axis.y: 0
            axis.z: 0
            origin.x: scene.width / 2
            origin.y: scene.height / 2
        }

        Scene3D {
            visible: true
            id: scene3d
            anchors.fill: parent
            //y : parent.height * 0.3
            //width: parent.width
            //height: parent.height * 0.4
            y: parent.height * 0.3


            //anchors.margins: 10
            focus: true
            aspects: ["input", "logic"]
            cameraAspectRatioMode: Scene3D.AutomaticAspectRatio


            //AnimatedEntity {}
        }

        DataGizmo {
            visible: true
            id: dataGizmo
        }

    }


    FooterControl {
        id: footer
     width: parent.width
     height: parent.height * 0.2
     y: parent.height * 0.8

     onDoPlayPause: {

         if(playOrPause === true)
         {
             console.log("------START-PLAYING------")
             osc.ip = footer.getHost()
             oscTimer.start()

         }
         if(playOrPause === false)
         {
             console.log("------STOP-PLAYING------")
             oscTimer.stop()
         }
     }

//     Slider {
//         id: mySlider

//         minimumValue: -5
//         maximumValue: 5
//           onValueChanged: {
//               console.log(value);


//           }

//     }

    }

    SequentialAnimation {
        id: animation

        RotationAnimation {
            to: 45
            duration: 1000
            target: sceneRotation
            property: "angle"
            easing.type: Easing.InOutQuad
        }
        PauseAnimation { duration: 500 }
        NumberAnimation {
            to: 0.5
            duration: 1000
            target: scene
            property: "scale"
            easing.type: Easing.OutElastic
        }
        PauseAnimation { duration: 500 }
        NumberAnimation {
            to: 1.0
            duration: 1000
            target: scene
            property: "scale"
            easing.type: Easing.OutElastic
        }
        PauseAnimation { duration: 500 }
        RotationAnimation {
            to: 0
            duration: 1000
            target: sceneRotation
            property: "angle"
            easing.type: Easing.InOutQuad
        }
    }

}

