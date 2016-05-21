#include <iostream>
#include "Circle.h"
#include <cstdlib>
#define _USE_MATH_DEFINES // for C++
#include <cmath>
using namespace std;

// set the x coordinate of the circle center
void Circle::setX(double xCoord)
{
   x = xCoord;
}

//get the xcoordinate of the circle center
double Circle::getX() const
{
   return x;
}

//set the y coordinate of the circle center
void Circle::setY(double yCoord)
{
   y = yCoord;
}

//get the y coordinate of the circle center
double Circle::getY() const
{
   return y;
}

//set the radius of the circle
void Circle::setRadius(double r)
{
   if(radius > 0)
       radius = r;
   if(radius<=0)
   {
      cout<<"ERROR: invalid radius!\n";
      exit(1);
   }
}

//get the radius of the circle
double Circle::getRadius() const
{
   return radius;
}

double Circle::getArea()
{
   return radius * radius * M_PI;
}

//check if the  circle contains the point
bool Circle::containsPoint(double xValue, double yValue)
{
   double a, b, c;
   bool status;

   if(x >= xValue)
      a = x - xValue;
   else
      a = xValue - x;
   if(y >= yValue)
      b = y - yValue;
   else
      b = yValue - y;


   c = sqrt(a*a + b*b);

   if(radius >= c)
      status = true;

   else
      status = false;

   return status;
}


