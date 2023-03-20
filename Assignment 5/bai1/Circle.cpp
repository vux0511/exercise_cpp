//
//  Circle.cpp
//  Ex_Cpp
//
//  Created by Hoàng Văn Vũ on 20/03/2023.
//

#include "Circle.h"

Circle::Circle() {
    this->radius = 0;
}

Circle::Circle(double radius) {
    this->radius = radius;
}

double Circle::getRadius() {
    return this->radius;
}

void Circle::setRadius(double radius) {
    this->radius = radius;
}

double Circle::getAria() {
    return this->area = this->pi * (this->radius * this->radius);
}

double Circle::getDiameter() {
    return this->diameter = this->radius * 2;
}

double Circle::getCircumference() {
    return this->circumference = 2 * this->pi * this->radius;
}

void Circle::display() {
    cout << "Area = "<< this->area << endl;
    cout << "Diameter = "<< this->diameter << endl;
    cout << "Circumference = "<< this->circumference << endl;
}


