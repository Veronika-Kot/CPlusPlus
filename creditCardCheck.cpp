/*Veronika Kotckovich
The program determines which credit cards are real, double every third number starting from the first one, add them together, and then add them to those figures that were not doubled. If the total sum of all numbers is divisible by 10 without remainder, then this credit card is real. 

The first argument is a path to a file. Each row includes a test case with a credit card number that you need to check. */

#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h> 
using namespace std;

int main () {
  string line;
  ifstream myfile ("example.txt");
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
      int sum=0;
      char one;
      for(int i=0;i<=18;i=i+2)
     {
      one = line[i];
      if(one==' ')
      {
        i++;
        one = line[i];
      }
         int num = one - '0';
         int doubleNum = num*2;
         sum+=num;
         sum+=doubleNum;
     }
       if(sum%10==0)
       {
         cout<<"Real"<<endl;
       }
       else
       {
         cout<<"Fake"<<endl;
       }
    }
    myfile.close();
  }
  
  return 0;
}
