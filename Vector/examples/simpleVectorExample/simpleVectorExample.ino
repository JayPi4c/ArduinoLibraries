//made by JayPi4c      28.10.17
//All the code and the ways of calculating is from the Processing github page 
//about their PVector object
//http://github.com/Processing/Processing
//https://github.com/processing/processing/blob/master/core/src/processing/core/PVector.java

//this library is not finished at all but it does what I need so far
//by time I will redo this library

#include <Vector.h>//include the library so you can use it 


Vector v0(15, 25);  //declare and initialize the Vectorobject v0 with an xValue of 15 and yValue of 25

void setup() {
  //create a standalone copy of the v0 object and store it in the new Object v1
  Vector v1 = v0.copy();

  //start Serial so we can see the values of the vector in the serial monitor
  Serial.begin(9600);
  //calls the function show with the argument of the vectorObject v0
  //this function prints the x and the y value as well as the magnitude in the serial Monitor
  show(v0);

  //multiply the whole VectorObject by 5
  v0.mult(5);
  //show the result of the multiplication
  show(v0);
  //set the magnitude down to 10
  v0.setMag(10);
  //show the result of the multiplication
  show(v0);
  
}

//a little function to save lines and have the code easier to read
void show(Vector v) {
  Serial.print("x: ");
  Serial.print(v.x);
  Serial.print("; y: ");
  Serial.print(v.y);
  Serial.print(" ;Mag: ");
  Serial.println(v.mag());
}

void loop() {
  // put your main code here, to run repeatedly:
}
