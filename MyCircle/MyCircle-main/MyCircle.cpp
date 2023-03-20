#include <iostream>
#include "MyCircle.h"
#define PI 3.14159

MyCircle::MyCircle() {
    this->x = 0.0;
    this->y = 0.0;
    this->radius = 1.0;
    this->color = "blue";
}

MyCircle::~MyCircle() {
    std::cout << "Object destroyed" << std::endl;
}

void MyCircle::setX(double x) {
    if (x >= -100 && x <= 100)
        this->x = x;

    else
        std::cout << "Invalid coordinate !!!" << std::endl;
}

void MyCircle::setY(double y) {
    if (y >= -100 && y <= 100)
        this->y = y;

    else
        std::cout << "Invalid coordinate !!!" << std::endl;
}

void MyCircle::setRadius(double radius) {
    if (radius >= 0 && radius <= 100)
        this->radius = radius;

    else
        std::cout << "Invalid radius !!!" << std::endl;
}

void MyCircle::setColor(std::string color) {

    this->color = color;
}

void MyCircle::display() const {
    std::cout << '(' << this->x << ',' << this->y << ") radius: " << this->radius << "  color: " << this->color << "  area: " << this->getArea() << "  perimeter: " << this->getPerimeter() << std::endl;
}

double MyCircle::getArea() const {
    return PI * this->radius * this->radius;
}

double MyCircle::getPerimeter() const {
    return 2 * PI * this->radius;
}