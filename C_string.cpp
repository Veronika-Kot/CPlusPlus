// Veronika Kotckovich
// Example of working with  null terminated C-strings
#include <iostream> 
#include <string> 
#include <stdio.h> 
#include <cstring>
using namespace std;
    
int lastIndexOf(char *s, char target);
//This function returns the last index where the target char can be found in the string. it returns -1 if the target char does not appear in the string.  For example, if s is “Giants” and target is ‘a’ the function returns 2.
void reverse(char *s);
//This function alters any string that is passed in. It should reverse the string. If “flower” gets passed in it should be reversed in place to “rewolf”.  To be clear, just printing out the string in reverse order is insufficient to receive credit, you must change the actual string to be in reverse order.
int replace(char *s, char target, char replacementChar);
//This function finds all instances of the char ‘target’ in the string and replaces them with ‘replacementChar’.  It also returns the number of replacements that it makes.  If the target char does not appear in the string it returns 0 and does not change the string.  For example, if s is “go giants”, target is ‘g’, and replacement is ‘G’, the function should change s to “Go Giants” and return 2.
int findSubstring(char *s, char substring[]);
//This function returns the index in string s where the substring can first be found. For example if s is “Skyscraper” and substring is “ysc” the function would return 2.  It should return -1 if the substring does not appear in the string.
bool isPalindrome(char *s);
// This function returns true if the argument string is a palindrome. It returns false if it is not.  A palindrome is a string that is spelled the same as its reverse.  For example “abba” is a palindrome. So is “hannah”, “abc cba”, and “radar”.


int main() 
{
    const int MAX_CHARS = 100, MAX = 100; 
    char userInput[MAX_CHARS], palindrome[MAX_CHARS]; 
    char userInput2[MAX], subs[MAX];
    char targ, targ1, repl;
    cout<<"Please, print any string.\n"; 
    cin.getline(userInput, MAX_CHARS);
    int count = 0;
     
    cout<<"Please, print a target character\n"; 
    cin>>targ; 
    cout<<"The target char was found in the position "<<lastIndexOf(userInput, targ)<<" (-1 not found)\n";
    
    reverse(userInput);    

    cout<<"Please, print another target character\n";
    cin>>targ1;
    cout<<"Please, print a char with which you want to replace the target character.\n";
    cin>>repl;
    cin.ignore(100, '\n'); 
    cout<<"We made "<<replace(userInput, targ1, repl)<<" replacements \n";
    cout<<"The new string is - "<<userInput<<endl;
    
    cout<<"Please, enter a substring.\n";
    cin.getline(subs, MAX);
     
    cout<<"The index where the substring can first be found: "<<findSubstring(userInput, subs)<<endl;

    cout<<"Print a new string for checking if it is a  palindrome\n";
    cin.getline(palindrome, MAX_CHARS);
     
    if(isPalindrome(palindrome))
       cout<<"It is a palidrome\n";
    else
       cout<<"It is not a palidrome\n";
    return 0;
}
 
int lastIndexOf(char *s, char target)
{
    int position = -1; 
    int count = 0;
    
    while(s[count] != '\0') 
    {
        if(s[count]==target)
            position = count;
        
        count++;
    }
    
    return position;
    
}


void reverse(char *s)
{
   int SIZE = strlen(s);
   char temp[SIZE];
   int pos = 0;
   for(int i=SIZE-1; i>=0; i--)
   {
     temp[pos]=s[i];
     pos++;
   }

   strcpy(s, temp);
      
   cout<<"The string was changerd to "<<s<<endl;
}
   

int replace(char *s, char target, char replacementChar)
{
   int count = 0, num = 0;  
   while(s[count] != '\0')
   {
      if(s[count]==target)
         {
            s[count] = replacementChar;
            num++;
         }
      count++;
   }
  
   return num;
}  


int findSubstring(char *s, char substring[])
{
   int position = -1;
   int  pos = 0;
   int SIZE_SUB = strlen(substring);
   int SIZE = strlen(s);
   bool flax = false;
   
   for(int i = 0; i < SIZE && flax == false; i++)
   {
      if(s[i]==substring[0])
      {
         pos = i;
            for(int j=1; j<SIZE_SUB; j++)
            {  
               i++;
               if(s[i]==substring[j])   
                  flax = true;
               else 
                  flax = false;
            }
      }
   }

   if(flax == true)
      position = pos;
   
   return position;

}


bool isPalindrome(char *s)
{
   int SIZE = strlen(s);
   char temp[SIZE];
   bool status = false;
   strcpy(temp, s);
      for(int j=SIZE-1; j>=0; j--)
      {
         s++;
         if(*s==temp[j])
         {
             status=true;
         }
         else
            status=false;
      }
   return status;
}


/* Sample OutPut

Please, print any string.
Veronika
Please, print a target character
i
The target char was found in the position 5 (-1 not found)

@he string was alerted to akinoreV

Please, print another target character
k
Please, print a char with which you want to replace the target character.
K
We made 1 replacements 
@he new string is - aKinoreV

Please, enter a sub-string.                               (Sub-string functioin is not workoikg together with other functions)
The index where the substring can first be found: -1

Print a new string for checking if it is a  palindrome
radar
It is a palidrome


Please, print any string.
Veronika
Please, print a target character
Q
The target char was found in the position -1 (-1 not found)
@he string was changerd to akinoreVw
Please, print another target character
L
Please, print a char with which you want to replace the target character.
G
We made 0 replacements 
@he new string is - akinoreV
Please, enter a sub-string .                               (Sub-string functioin is not workoikg together with other functions)
The index where the substring can first be found: -1
Print a new string for checking if it is a  palindrome
cats
It is not a palidrome


!!!!!Sample of sub-string functioin alone, when other funcrions are under comment marks

 


*/
