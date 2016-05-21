/*
PRIME PALINDROME
Veronuka Kotckovich
This program determines the largest prime palindrome less than specified max number.
*/

#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main()
{
  int max=10000;     //specified max number
  int num=3;         //start checking for prime from 3
  int largest = 0;
  int palindrome = 0;
  bool notPrime = false;

  while(num<=max)
  {
    int i = 2;
    notPrime = false; 
    while(i<num && !notPrime)
    {
      int check = num%i; //checking for prime, check=0 if num is NOT  prime
      if(check==0)
      {
        notPrime = true;
      }
      i++;
    }
    if(notPrime == false) //check if prime number is palindrome
    {
      string palindStr = to_string(num); //converting int to string
      int len = palindStr.length();      //finding the length of string
      bool palin = true;
      int front=0;              
      int back=len;
      while(palin==true && front<=len-1) //checking if numbers from front & back match
      {
        if(palindStr[front]!=palindStr[back-1])
        {
          palin = false;
        }
        else
        {
          front++;
          back--;
        }
      }
      if(palin==true)
      {
        palindrome=num;
        if(palindrome>largest) //finding the largest palindrome
        {
          largest=palindrome;
        }
      }
    }
    num++; 
  }
  cout<<largest<<endl;  //print the largest prime palindrome
  
  return 0;
}
