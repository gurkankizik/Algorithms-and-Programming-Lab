#include <iostream>
#include "MyCircle.h"

int main()
{
    MyCircle c1;
    c1.display();

    c1.setRadius(5.2);
    c1.setX(10);
    c1.setColor("red");
    c1.display();

    MyCircle* cPtr = new MyCircle;
    cPtr->display();

    return 0;
}