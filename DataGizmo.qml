/****************************************************************************
Streamo
Copyright (C) 2017 André Frélicot
****************************************************************************/

import QtQuick 2.7

Item {

    anchors.fill: parent

    property real x_: 1.5

    function updateDataGizmo(x, y, z, cr)
    {
        x_ = x

        // Display a gizmo reacting to incoming XYZ data

        // Graphic option & parameters
        //blendMode(MULTIPLY);




        canvas.requestPaint()
    }

    Canvas {
        id: canvas
        anchors.fill: parent


        onPaint: {

            /*
            var sWeight_ = 10   // stroke weight reference
            var coefReg_ = cr_  // values mapping coefficient
            var centerScreenX = parent.width / 2 //
            var centerScreenY = parent.height / 2
            */


            // Color swatch
            var c0 = "#4951D0"
            var c1 = "#F3F072"
            var c2 = "#7DDEE3"
            var c3 = "#F55B55"

            var x_ = 0.4
            var y_ = -0.9
            var z_ = 1.0
            var cr_ = 0.6

            var PI = Math.PI
            var HALF_PI = PI / 2
            var QUARTER_PI = PI / 2


            //Graphic option & parameters
            var sWeight = 10;               // stroke weight reference
            var coefReg_ = cr_;             // values mapping coefficient
            var width = parent.width
            var height = parent.height

            //Compute coordinate values
            var cx_ = coefReg_ * width * x_           // abscissa for the X-line value
            var cy_ = -coefReg_ * width * y_          // ordinate for the Y-line value
            var a0_ = -HALF_PI / 2                    // reference angle of the Z-arc axis
            var a1_ = coefReg_ * PI * z_ + a0_        // angle of the Z-arc axis
            var r_ = width/2                          // radius of the Z-arc axis
            var czx_ = r_/2*Math.cos(a1_)             // abscissa of the Z value
            var czy_ = r_/2*Math.sin(a1_);            // ordinate of the Z value
            var czx0_ = r_/2*Math.cos(QUARTER_PI);    // abscissa of the Z reference
            var czy0_ = -r_/2*Math.sin(QUARTER_PI);   // ordinate of the Z reference



            console.log("----- cx_", cx_)
            //--------------------------------------------------------------
            //---------------------  DIPLAY VALUES  ------------------------
            //--------------------------------------------------------------



            console.log("parent.width: ", parent.width, "parent.height: ", parent.height)


            var centreX = parent.width / 2;
            var centreY = parent.height / 2;

            console.log("centerX: ", centreX, "centerY", centreY)
            var ctx = getContext('2d')

            ctx.clearRect(0, 0, parent.width, parent.height)
            ctx.reset()
            ctx.fillStyle = 'grey'
            ctx.fillRect(0, 0, parent.width, parent.height)

            ctx.stroke()


            ctx.arc(centreX, centreY, width / 4, 0, Math.PI * 2, false);
            ctx.stroke()



//            var left = width * 0.25
//            var right = width * 0.75
//            var vCenter = height * 0.5
//            var vDelta = height / 6

//            ctx.lineWidth = sWeight
//            ctx.lineCap = "round"
//            ctx.strokeStyle = 'black'

//            ctx.translate(centreY, centreX)

//            ctx.beginPath()
//            ctx.moveTo(0,0)
//            ctx.fillRect(0, 0,20,20)
//            ctx.stroke()

//            ctx.beginPath();
//                        ctx.fillStyle = "black";
//                        ctx.moveTo(centreX, centreY);
//                        ctx.arc(centreX, centreY, width / 4, 0, Math.PI * 0.5, false);
//                        ctx.lineTo(centreX, centreY);
//                        ctx.fill();


            //Move to middle screen


            console.log("cx_: ", cx_,  "cy_: ", cy_)

//            ctx.beginPath()
//            //ctx.moveTo(0, 0)

//            ctx.strokeStyle = c1
//            ctx.lineTo(cx_, 0)
//            ctx.stroke()

//            ctx.beginPath()
//            //ctx.moveTo(centreX, centreY)
//            ctx.strokeStyle = c2
//            ctx.lineTo(0, cy_)
//            ctx.stroke()

//            ctx.beginPath()
//            ctx.strokeStyle = c2
//            ctx.lineTo(centreX, centreY, 20, cy_)
//            ctx.stroke()

//            ctx.beginPath();
//            ctx.moveTo(centreX, centreY)
//            // start a new path
//            ctx.arc (0,0,80,0,2*Math.PI); // a circle with center point (100,100) and radius 80
//            ctx.stroke();






//            ctx.beginPath();
//            //ctx.fillStyle = "black";

//            ctx.strokeStyle = 'green'
//            ctx.arc(centreX, centreY, width / 4, 0, Math.PI * 0.6, false);

//            ctx.stroke()



//            ctx.moveTo(centreX, centreY);
//            ctx.beginPath();

//            ctx.arc(centreX, centreY, width / 4, 0, Math.PI * -0.4, true);
//            ctx.strokeStyle = 'red'
//            ctx.stroke()


//            //ctx.arcTo(centreX, centreY, parent.width / 2, parent.height / 4, 40)


//            arc(0, 0, r_, r_, a0_ + PI, a1_+PI);


        }
    }




    /*
void dataGizmo(float x_, float y_, float z_, float cr_){
  // Display a gizmo reacting to incoming XYZ data

  // Graphic option & parameters
  blendMode(MULTIPLY);
  float sWeight_ = 10;   // stroke weight reference
  float coefReg_ = cr_;  // values mapping coefficient

  // Change coordinate system
  pushMatrix();
  translate(width/2, height/2,0);        // middle screen (XY reference)

  // Compute coordinate values
  float cx_ = coefReg_* width* x_;       // abscissa for the X-line value
  float cy_ = -coefReg_* width* y_;      // ordinate for the Y-line value
  float a0_ = -HALF_PI/2;                // reference angle of the Z-arc axis
  float a1_ = coefReg_*PI*z_ + a0_;      // angle of the Z-arc axis
  int r_ = width/2;                      // radius of the Z-arc axis
  float czx_ = r_/2*cos(a1_);            // abscissa of the Z value
  float czy_ = r_/2*sin(a1_);            // ordinate of the Z value
  float czx0_ = r_/2*cos(QUARTER_PI);    // abscissa of the Z reference
  float czy0_ = -r_/2*sin(QUARTER_PI);   // ordinate of the Z reference

  //--------------------------------------------------------------
  //---------------------  DIPLAY VALUES  ------------------------
  //--------------------------------------------------------------

  noFill();
  strokeWeight(sWeight_);

  // Display X and Y values
  stroke(c1);
  line(0, 0, cx_, 0);                    // X-line values
  stroke(c2);
  line(0, 0, 0, cy_);                    // Y-line values

  // Display Z values on arc axis
  if(a0_>a1_){
    // Reverse angle to draw arc in both senses (if Z<0)
    float a_ = a0_;
    a0_ = a1_;
    a1_ = a_;
  }
  stroke(c3);
  arc(0, 0, r_, r_, a0_ , a1_);          // Z-arc axis
  arc(0, 0, r_, r_, a0_ + PI, a1_+PI);   // Z-arc axis reverse (style purpose)

  //--------------------------------------------------------------
  //--------------------  STYLE POLISH  --------------------------
  //--------------------------------------------------------------

  noStroke();

  // Line ending (circle)
  fill(c1);
  ellipse(cx_ ,0, 2*sWeight_, 2*sWeight_);         // X
  fill(c2);
  ellipse(0 , cy_, 2*sWeight_, 2*sWeight_);        // Y
  fill(c3);
  ellipse(czx_ , czy_, 2*sWeight_, 2*sWeight_);    // Z
  ellipse(-czx_ ,-czy_, 2*sWeight_, 2*sWeight_);   // Z reverse

  // Round cap for P3D mode
  translate(0,0,-1);
  fill(c1);
  ellipse(0,0, sWeight_, sWeight_);                // round cap X
  fill(c2);
  ellipse(0,0, sWeight_, sWeight_);                // round cap Y
  fill(c3);
  ellipse(czx0_, czy0_, sWeight_, sWeight_);       // round cap Z
  ellipse(-czx0_, -czy0_, sWeight_, sWeight_);     // round cap Z reverse

  // Visual landmarks
  translate(0,0,1);
  fill(c0);
  ellipse(0,0, sWeight_, sWeight_);                // origin XY
  ellipse(cx_,0, sWeight_, sWeight_);              // X
  ellipse(0,cy_, sWeight_, sWeight_);              // Y
  ellipse(czx0_ , czy0_, sWeight_, sWeight_);      // Origin Z
  ellipse(-czx0_ , -czy0_, sWeight_, sWeight_);    // Origin Z
  ellipse(czx_ , czy_, sWeight_, sWeight_);        // Z
  ellipse(-czx_ , -czy_, sWeight_, sWeight_);      // Z

  // Extra style
  fill(c1);
  ellipse(0,0, 4*sWeight_, 4*sWeight_);

  // Reference Z-axis
  noFill();
  stroke(c0);
  strokeWeight(sWeight_/4);
  line(-czx0_, -czy0_, czx0_, czy0_);

  popMatrix();  // back to original coordinate system
}
*/

}
