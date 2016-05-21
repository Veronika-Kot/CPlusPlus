// Program 2 - Game with a dealer

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
  // first, second, next - user's cards, total- addition of these cards 
  // dStart, dNext - dealer's cards, dTotal -addition of these cards

   int first, second, next, total, dStart, dNext, dTotal;
   char answ, play, contin;
   srand(time(0));
   total = 0;
   dTotal = 0;  
   
   //Game starts, generating randon numbers for first three cards.
   do
   { 
     dStart = rand () % 11+1;
     dTotal = dStart;
     cout << "The dealer starts with a "<<dStart<<endl;              
     first = rand () % 11+1;
     second = rand () % 11+1;
     cout << "You  first cards :"<<first<<", "<<second<<endl;
     total = first + second;
     cout << "Your total: "<<total<<endl;
     cout <<"hit (y/n)?:";                    
     cin >> answ;   
           
     //User gets a  card       
     while (answ == 'y' && total < 21)
      {
        next = rand () % 11+1;
        total = total + next;
        cout << "Card: "<< next <<endl;
        cout << "Your total :"<< total<<endl;
    
        if (total > 21)
         {
           cout <<"Sorry. You Lost!\n";
         } 
          
        else
         {
           cout <<"hit (y/n):";   
           cin >> answ;
         }
      }
   
     //Dealer gets a card
     if (total <= 21 && dTotal<=21)
      {
        do
         {
           contin = 'g';
           dNext = rand () % 11+1;
           dTotal = dTotal + dNext;
           cout << "Dealer has a "<< dNext <<endl;
           cout << "Dealer's total :"<< dTotal<<endl;

             if (dTotal > 21)
              {
                cout <<"You Win!\n";
              }                 
             else if (dTotal == total)
              {
                cout <<"PUSH!\n"; 
              }
             else  if ((dTotal > total) && (dTotal <= 21))
              {
                cout <<"The Dealer Wins!\n";
               // dTotal = 22;
              }
             else 
              {              
                cout <<"(c to continue):";
                cin >> contin;
              }
        }while (contin == 'c' && dTotal < 21);
      }   
                 
              
     
     cout << "Do you want to play again?(y/n)";
     cin >> play;
   } while (play == 'y');    
      
   return 0;
}


/* Sampel

The dealer starts with a 5
You  first cards :2, 4
Your total: 6
hit (y/n)?:y
Card: 3
Your total :9
hit (y/n):y
Card: 4
Your total :13
hit (y/n):y
Card: 7
Your total :20
hit (y/n):n
Dealer has a 10
Dealer's total :15
(c to continue):c
Dealer has a 5
Dealer's total :20
PUSH!
Do you want to play again?(y/n)y

The dealer starts with a 5
You  first cards :11, 1
Your total: 12
hit (y/n)?:y
Card: 4
Your total :16
hit (y/n):y
Card: 7
Your total :23
Sorry. You Lost!
Do you want to play again?(y/n)y

The dealer starts with a 6
You  first cards :2, 3
Your total: 5
hit (y/n)?:y
Card: 1
Your total :6
hit (y/n):y
Card: 9
Your total :15
hit (y/n):y
Card: 6
Your total :21
hit (y/n):n
Dealer has a 11
Dealer's total :17
(c to continue):c
Dealer has a 10
Dealer's total :27
You Win!
Do you want to play again?(y/n)y

The dealer starts with a 11
You  first cards :3, 10
Your total: 13
hit (y/n)?:n
Dealer has a 9
Dealer's total :20
The Dealer Wins!
Do you want to play again?(y/n)n

*/
