/****************************************************************************
Streamo
Copyright (C) 2017 André Frélicot
****************************************************************************/

import Qt3D.Core 2.0
import Qt3D.Render 2.0
import Qt3D.Input 2.0
import Qt3D.Extras 2.0

import QtQuick 2.0 as QQ2


Entity {
    id: sceneRoot


    signal rotateMyTorus

    Camera {
        id: camera
        projectionType: CameraLens.PerspectiveProjection
        fieldOfView: 45
        nearPlane : 0.1
        farPlane : 1000.0
        position: Qt.vector3d( 0.0, 0.0, 40.0 )
        upVector: Qt.vector3d( 0.0, 1.0, 0.0 )
        viewCenter: Qt.vector3d( 0.0, 0.0, 0.0 )
    }

    FirstPersonCameraController { camera: camera }

    components: [
        RenderSettings {
            activeFrameGraph: ForwardRenderer {
                camera: camera
                clearColor: "transparent"
            }
        },
        InputSettings { }
    ]


    GoochMaterial {
        id: material
        //ambient: "green"
        //coolColor: "red"
        diffuse:  "red"
        specular: "red"
        //warmColor: "green"
    }

    GoochMaterial {
        id: materialDarkblue
        //coolColor: "blue"
        diffuse: "blue"
        specular: "blue"
        //warmColor: "blue"
    }

    TorusMesh {
        id: torusMesh
        radius: 20
        minorRadius: 0.2
        rings: 100
        slices: 20
    }


    SphereMesh
    {
        id: upSphere
        radius: 5
    }



    Transform {
        id: torusTransform
        //scale3D: Qt.vector3d(1.5, 1, 0.5)
        //rotation: fromAxisAndAngle(Qt.vector3d(1, 0, 0), 45)
    }

    Entity {
        id: torusEntity
        components: [ torusMesh, materialDarkblue, torusTransform ]
    }

    SphereMesh {
        id: sphereMesh
        radius: 3
    }

    SphereMesh
    {
        id: centerSphere
        radius: 1
    }

    Transform {
        id: sphereTransform
        property real userAngle: 0.0
        matrix: {
            var m = Qt.matrix4x4();
            m.rotate(userAngle, Qt.vector3d(0, 1, 0))
            m.translate(Qt.vector3d(20, 0, 0));
            return m;
        }
    }

    Transform {
        id: sphereTransform2
        property real userAngle: 0.0
        matrix: {
            var m = Qt.matrix4x4();
            m.rotate(userAngle, Qt.vector3d(0, 1, 0))
            m.translate(Qt.vector3d(20, 0, 0));
            return m;
        }
    }

    QQ2.NumberAnimation {
        target: sphereTransform
        property: "userAngle"
        duration: 1000
        from: 0
        to: 360

        loops: QQ2.Animation.Infinite
        running: true
    }


    QQ2.NumberAnimation {
        target: sphereTransform2
        property: "userAngle"
        duration: 1000
        from: 0
        to: -360

        loops: QQ2.Animation.Infinite
        running: true
    }


    Entity {
        id: sphereEntity
        components: [ sphereMesh, material, sphereTransform ]

    }


    Entity {
        id: sphereEntity2
        components: [ sphereMesh,  material, sphereTransform2 ]

    }

    Entity {
        id: sphereCenterEntity
        components: [centerSphere, materialDarkblue]
    }

}
