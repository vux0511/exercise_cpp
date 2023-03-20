//
//  Circle.h
//  Ex_Cpp
//
//  Created by Hoàng Văn Vũ on 20/03/2023.
//

#ifndef Circle_h
#define Circle_h

#include <iostream>
using namespace std;

class Circle {
    private:
        double radius;
        double pi = 3.14;
        double area;
        double diameter;
        double circumference;
    public:
        // Default
        Circle();
    
        // Constructor. Accepts the radius of the circle as an argument.
        Circle(double radius);
    
        // getRadius. An accessor function for the radius variable.
        double getRadius();
    
        //setRadius. A mutator function for the radius variable.
        void setRadius(double radius);
    
        // getArea. Returns the area of the circle, which is calculated as area = pi * radius * radius
        double getAria();
    
        // Returns the diameter of the circle, which is calculated as diameter = radius *2
        double getDiameter();
    
        // Returns the circumference of the circle, which is calculated as circumference = 2 * pi * radius
        double getCircumference();
    
        void display();
    
};

#endif /* Circle_h */
