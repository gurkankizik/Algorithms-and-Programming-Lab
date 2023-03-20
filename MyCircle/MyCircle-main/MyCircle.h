#include <iostream>

#ifndef MYCIRCLE_H
#define MYCIRCLE_H

class MyCircle {
private:
    double x;
    double y;
    double radius;
    std::string color;
    double getArea() const;
    double getPerimeter() const;

public:
    MyCircle();
    ~MyCircle();
    void setX(double x);
    void setY(double y);
    void setRadius(double radius);
    void setColor(std::string color);
    void display() const;

};

#endif