#include <iostream>
#include "Circle.h"
using namespace std;

int main()
{
   Circle m;
   Circle *figurePtr = NULL;
   figurePtr = &m;
   double xCir, yCir, rCir, xP, yP;

   cout<<"Print the X-coordinate of the center of the circle: ";
   cin>>xCir;
   
   cout<<"Print the Y-coordinate of the center of the circle: ";
   cin>>yCir;
   
   cout<<"Print the radius of the circle: ";
   cin>>rCir;
  

   figurePtr->setX(xCir);
   figurePtr->setY(yCir);
   figurePtr->setRadius(rCir);

   cout<<"Coordonate of the cicle cente: ("<<m.getX()<<","<<m.getY()<<")\n";
   cout<<"The radius of the center: "<<m.getRadius()<<endl;
   cout<<"The are of the circle: "<<m.getArea()<<endl;
   
   cout<<endl;

   cout<<"Think of some point. Now, let's check if it's contained in the circle.\n";
   cout<<"Print the X-coordinate of the point: ";
   cin>>xP;
  
   cout<<"Print the X-coordinate of the point: ";
   cin>>yP;

   if(figurePtr->containsPoint(xP,yP))
   {
      cout<<"The point is contained in the circle\n";
   }
   else
      cout<<"The point is not contained in the circle\n";

   return 0;
}

   
