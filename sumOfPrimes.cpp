/*
SUM OF PRIMES
Veronuka Kotckovich
This program determines the sum of the first 1000 prime numbers.
*/

#include <iostream>
using namespace std;

int main()
{
  int num=2;         //primes start at 2
  int count=0;
  int sum=0;
  bool notPrime = false;
  while(count<1000) 
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
    if(notPrime==false)
    {
       count++; //counts primes
       sum+=num; //tracks the sum of primes
    }
    num++;    
  }
  cout<<sum<<endl;   
  return 0;
}
