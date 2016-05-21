//Circle header file
#ifndef CIRCLE_H
#define CIRCLE_H
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

#endif
