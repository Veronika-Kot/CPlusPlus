//Veronika
//Converter tempreture in fahrenheit celsius.

#include <iostream>
#include<iomanip>
#include <cmath>
using namespace	std;

bool toCelsiusByReference(double &value);

int main()

{
 double  temF;
 bool valid; 
// cout.setf(ios::fixed, ios::floatfield);
  
  cout<<"Print fahrenheit tempreture; then print enter.\n";
  cin>>temF;
  
  toCelsiusByReference (temF); 
  // cout<<setprecision(0)<<temF<<setprecision(2)<<"F = "<<temC<<"C \n";
 // else 
  // cout<<"error "<<temF<<"below freezing. \n";
 return 0;
}
 

bool toCelsiusByReference(double &value)
{
 double temC;  
 bool flag;
 if (value >= 32.0)
  {    
    temC =  5.00 / 9.00 * (value - 32);
    cout<<setprecision(2)<<value<<setprecision(2)<<"F = "<<temC<<"C \n";
    
    flag = true; 
  }
  else
  {
    cout<<"error "<<value<<"below freezing. \n";
    flag = false;
  }
 return flag;
}    

