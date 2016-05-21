//Veronika Kotckovich
//Simple class implementation

#include <iostream>
#include <cstdlib>
#define _USE_MATH_DEFINES // for C++
#include <cmath>
using namespace std;

class Circle
{ 
   private: 
     double x; 
     double y;
     double radius;
   public:
     void setRadius(double r);
     void setX(double xCoord);
     void setY(double yCoord);
     double getRadius() const;
     double getX() const;
     double getY() const;
     double getArea();
     bool containsPoint(double xValue, double yValue);
};

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

int main()
{
   Circle m;
   Circle *figurePtr = NULL;
   figurePtr = &m;

//   m.setX(-2);
//   m.setY(-4);
//   m.setRadius(-5);

   figurePtr->setX(6);
   figurePtr->setY(4);
   figurePtr->setRadius(7);

   cout<<"Coordonate of the cicle cente: ("<<m.getX()<<","<<m.getY()<<")\n";
   cout<<"The radius of the center: "<<m.getRadius()<<endl;
   cout<<"The ares of the circle: "<<m.getArea()<<endl;

//   if(m.containsPoint(-1,-1))
     if(figurePtr->containsPoint(1,1))
   {
      cout<<"The point is contained in the circle\n";
   }
   else
      cout<<"The point is not contained in the circle\n";

   return 0;
}

   
