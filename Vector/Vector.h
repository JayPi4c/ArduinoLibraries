#ifndef Vector_h

#define Vector_h

#include "Arduino.h"


class Vector {
  
public:
    
Vector();
    
Vector(double x_, double y_, double z_ = 0);
    
~Vector();


   
 
double x;
    
double y;
    
double z;

    
Vector set(double x_, double y_, double z_ = 0);
    
Vector set(Vector v);

Vector copy();
    
Vector get();
    
double mag();
    
double magSq();
    
Vector add(Vector v);
    
Vector add(double x, double y, double z = 0);
    
Vector sub(Vector v);
    
Vector sub(double x, double y, double z = 0);
    
Vector mult(double n);
    
Vector div(double n);
    
double dist(Vector v);
    
double dot(Vector v);
    
double dot(double x, double y, double z = 0);
    
Vector normalize();
    
Vector limit(double max);
    
Vector setMag(double len);
    
double heading();



};

#endif
