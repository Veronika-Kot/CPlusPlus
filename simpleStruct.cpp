//Veronika Kotckovich
//Simple struct
//
#include <iostream>
#include <string>
using namespace std;

struct salesRecord
{
   string burritoType;
   int numSold;
};

int main()
{
   int NUM_TYPES;
   cout<<"How many different types of burritos were sold today?\n";
   cin>>NUM_TYPES; 

   salesRecord sales[NUM_TYPES];   

   for (int i=0; i<NUM_TYPES; i++)
   {
      cout<<"Please, enter "<<i+1<<" burrito type.\n";
      cin>>sales[i].burritoType;

      cout<<"How many  "<<sales[i].burritoType<<" burrito were sold today?\n";
      cin>>sales[i].numSold;
   }

   cout<<"***Today report***\n";
   cout<<"Type:  Num.Sold:\n";
   for (int j=0; j<NUM_TYPES; j++)
   {
   cout<<sales[j].burritoType<<"  "<<sales[j].numSold<<endl;
   }
   return 0;
}
