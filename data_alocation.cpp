//Veronika Kotckovich
//Workind with pointers & dynamic allocated memory

#include <iostream>
#include <string>
using namespace std;

void initializeArrays(string *n, int *s, int size);
void sortData(string *n, int *s, int size);
void swapper(int& x, int& y, string& xx, string& yy);
void displayData(string *n, int *s, int size);

int main()
{
   string *league=NULL; // string pointer, points to null
   int *points=NULL; //int pointer, points to null
   int SIZE=0;
   
   cout<<"How many teams will you enter?: \n";
   cin>>SIZE;
   
   league=new string[SIZE]; //using pionter to allocate new memory 
   points=new int[SIZE];
   initializeArrays(league, points, SIZE);
   sortData(league, points, SIZE);
   displayData(league, points, SIZE);
   
   delete[] league; //deleting previous allocated memory
   league=NULL;
   delete[] points;
   points=NULL;
   
   return 0;
}

void initializeArrays(string *n, int *s, int size)
{
    for (int i=0; i<size; i++)
    {
        int num = i + 1;
        cout<<"Enter team #"<<num<<endl;
        cin>>n[i];
        cout<<"Enter the wins for "<<n[i]<<" team\n";
        cin>>s[i];
    }
}

void sortData(string *n, int *s, int size)
{
    bool swapped;
   
    do
    {
        swapped = false;
        for(int j=0; j<size-1; j++)
        {
           
            if(s[j] < s[j+1])
            {
                swapper(s[j], s[j+1], n[j], n[j+1]);
                swapped = true;
            }
        }
    }while(swapped);
}

void swapper(int& x, int& y, string& xx, string& yy)
{
    int tem;
    string temp;
   
    tem = x;
    x = y;
    y = tem;
   
    temp = xx;
    xx = yy;
    yy = temp;
}

void displayData(string *n, int *s, int size)
{
    cout<<"League Standings:\n";
    for(int g=0; g<size; g++)
        cout<< n[g] <<": "<<s[g]<<endl;
}


/* Sample OUTPUT

How many teams will you enter?: 
4
Enter team #1
Giants
Enter the wins for Giants team
99
Enter team #2
A's
Enter the wins for A's team
45
Enter team #3
Cubs
Enter the wins for Cubs team
76
Enter team #4
Padres
Enter the wins for Padres team
68
League Standings:
Giants: 99
Cubs: 76
Padres: 68
A's: 45

*/
