//Veronika Kotckovich
//BlackJack game, no dealer

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
   int first, second, next, total;
   char answ, play;
   srand(time(0)); 
   do
   {
     first = rand () % 11+1; // generating random number - first card
     second = rand () % 11+1; // second card
     cout << "First cards :"<<first<<", "<<second<<endl;
     total = first + second;
     cout << "Total: "<<total<<endl;
     if (total == 21)
        cout <<"Congratulations! You Win!\n";
     else  if (total > 21)
      {
        cout <<"Bust.\n";
        cout <<"Sorry. You Lost!\n";
      }
     else
     {    
     cout <<"Do you want another card? (y/n):";
     cin >> answ;
     }

     while (answ == 'y'&& total < 21)
      {       
        next = rand () % 11+1; //generating random number for any nexy card
        total = total + next;
        cout << "Card: "<< next <<endl;
        cout << "Total :"<< total<<endl;
        if (total == 21)
           cout <<"Congratulations! You Win!\n";
        else  if (total > 21)
         {  
            cout <<"Sorry. You Lost!\n";
            cout <<"Bust.\n"; 
         }        
        else
         {
            cout <<"Do you want anoter card? (y/n):";   
            cin >> answ;
         }   
      }
     
     cout << "Do you want to play again?(y/n):";
     cin >> play;
     } while (play == 'y');    
   
   return 0;
}



/* Sampel 

First cards :7, 9
Total: 16
Do you want anoter card? (y/n):y
Card: 4
Total :20
Do you want anoter card? (y/n):n
Do you want to play again?(y/n):y

First cards :8, 6
Total: 14
Do you want another card? (y/n):y
Card: 2
Total :16
Do you want anoter card? (y/n):y
Card: 9
Total :25
Sorry. You Lost!
Bust.
Do you want to play again?(y/n):y


First cards :8, 3
Total: 11
Do you want another card? (y/n):y
Card: 5
Total :16
Do you want anoter card? (y/n):y
Card: 5
Total :21
Congratulations! You Win!
Do you want to play again?(y/n):n
*/

