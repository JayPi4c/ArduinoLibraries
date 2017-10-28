#include "Vector.h"

Vector::Vector() {
  x = 0;
  y = 0;
  z = 0;
}

Vector::Vector(double x_, double y_, double z_ = 0) {
  x = x_;
  y = y_;
  z = z_;
}

Vector Vector::set(double x_, double y_, double z_) {
  x = x_;
  y = y_;
  z = z_;
  return *this;
}

Vector Vector::set(Vector v) {
  x = v.x;
  y = v.y;
  z = v.z;
  return *this;
}

Vector Vector::copy() {
  return *this;
}

Vector Vector::get() {
  return copy();
}

double Vector::mag() {
  return (double)sqrt(x * x + y * y + z * z);
}

double Vector::magSq() {
  return (x * x + y * y + z * z);
}

Vector Vector::add(Vector v) {
  x += v.x;
  y += v.y;
  z += v.z;
  return *this;
}

Vector Vector::add(double x_, double y_, double z_) {
  x += x_;
  y += y_;
  z += z_;
  return *this;
}

Vector Vector::sub(Vector v) {
  x -= v.x;
  y -= v.y;
  z -= v.z;
  return *this;
}

Vector Vector::sub(double x_, double y_, double z_) {
  x -= x_;
  y -= y_;
  z -= z_;
  return *this;
}

Vector Vector::mult(double n) {
  x *= n;
  y *= n;
  z *= n;
  return *this;
}

Vector Vector::div(double n) {
  x /= n;
  y /= n;
  z /= n;
  return *this;
}

double Vector::dist(Vector v) {
  double dx = x - v.x;
  double dy = y - v.y;
  double dz = z - v.z;
  return (double) sqrt(dx * dx + dy * dy + dz * dz);
}

double Vector::dot(Vector v) {
  double dx = x - v.x;
  double dy = y - v.y;
  double dz = z - v.z;
  return (double) sqrt(dx * dx + dy * dy + dz * dz);
}

double Vector::dot(double x, double y, double z) {
  double dx = x - x;
  double dy = y - y;
  double dz = z - z;
  return (double) sqrt(dx * dx + dy * dy + dz * dz);
}

Vector Vector::normalize() {
  double m = mag();
  if (m != 0 && m != 1) {
    div(m);
  }
  return *this;
}

Vector Vector::limit(double max) {
  if (magSq() > max * max) {
    normalize();
    mult(max);
  }
  return *this;
}


Vector Vector::setMag(double len) {
  normalize();
  mult(len);
  return *this;
}

double Vector::heading() {
  double angle = (double) atan2(y, x);
  return angle;
}

Vector::~Vector() {

}
