//HOMEWORK #3, Veronika Kotckovich, vkotckov

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void playOneGame();
bool shouldPlayAgain();
char getUserResponseToGuess(int);
int getRandomMidpoint(int &rlow, int &rhigh);
int getMidpoint(int &low, int &high);

int mid = 0;
int lowVal;
int highVal;
char logInt;

int main()
{
  do
  {
    playOneGame();
  } while (shouldPlayAgain());
  return 0;
}

void playOneGame()
{
  char ready;
  ready = 'o';
  lowVal = 1;
  highVal = 100;
  mid = 0;
  cout<<"Think of a number between 1 and 100.\n"; 
  cout<<"Press 'r'  when you are ready: ";
  cin>>ready;
  if (ready=='r')
  {
    cout<<"Do you want me to use logic or intuition? (print 'g'-loGic, ";
    cout<<"'i'-Intuition: ";
    cin>>logInt;
    if (logInt == 'g')
      getMidpoint(lowVal,highVal);
    if (logInt =='i')
      getRandomMidpoint(lowVal,highVal);
  }
}

int getRandomMidpoint(int &rlow, int &rhigh)
{
  srand(time(NULL));
  cout<<"Choosing between "<<rlow<<" and "<<rhigh<<endl;
  mid =( rand()% (rhigh + 1 - rlow)) + rlow;
  getUserResponseToGuess(mid);
}

int getMidpoint(int &low, int &high)
{
  cout<<"Choosing between "<<low<<" and "<<high<<endl;
  mid = (low+high)/2;
  getUserResponseToGuess(mid);
}


char getUserResponseToGuess(int guess)
{
  char h, l, answ;
  cout<<"Is it "<<guess<<"? (h/l/c): ";
  cin>>answ;
  if (answ == 'h')
  {
    lowVal = mid + 1;
    if (logInt == 'g')
      getMidpoint(lowVal,highVal);      
    if (logInt =='i')
      getRandomMidpoint(lowVal,highVal);
  }
  if (answ == 'l')
  {
    highVal = mid - 1;
    if (logInt == 'g')
      getMidpoint(lowVal,highVal);      
    if (logInt =='i')
      getRandomMidpoint(lowVal,highVal);
  }
}

bool shouldPlayAgain()
{
  char playA, y, n;
  playA = 'n';
  bool status;
  cout<<"Great! Do you want to play again? (y/n): ";
  cin>>playA;
  cout<<" \n\n";

  if (playA == 'y')
    status = true;
  if (playA == 'n')
    status = false;
  return status;
}  
 

/* Sample Run

(checking for number 31)

Think of a number between 1 and 100.
Press 'r'  when you are ready: r
Do you want me to use logic or intuition? (print 'g'-loGic, 'i'-Intuition: g
Choosing between 1 and 100
Is it 50? (h/l/c): l
Choosing between 1 and 49
Is it 25? (h/l/c): h
Choosing between 26 and 49
Is it 37? (h/l/c): l
Choosing between 26 and 36
Is it 31? (h/l/c): c
Great! Do you want to play again? (y/n): y
 

Think of a number between 1 and 100.
Press 'r'  when you are ready: r
Do you want me to use logic or intuition? (print 'g'-loGic, 'i'-Intuition: i
Choosing between 1 and 100
Is it 87? (h/l/c): l
Choosing between 1 and 86
Is it 33? (h/l/c): l
Choosing between 1 and 32
Is it 22? (h/l/c): h
Choosing between 23 and 32
Is it 27? (h/l/c): h
Choosing between 28 and 32
Is it 32? (h/l/c): l
Choosing between 28 and 31
Is it 29? (h/l/c): h
Choosing between 30 and 31
Is it 31? (h/l/c): c
Great! Do you want to play again? (y/n): n
 

(checking for number 7)

Think of a number between 1 and 100.
Press 'r'  when you are ready: r
Do you want me to use logic or intuition? (print 'g'-loGic, 'i'-Intuition: i
Choosing between 1 and 100
Is it 86? (h/l/c): l
Choosing between 1 and 85
Is it 71? (h/l/c): l
Choosing between 1 and 70
Is it 3? (h/l/c): h
Choosing between 4 and 70
Is it 41? (h/l/c): l
Choosing between 4 and 40
Is it 10? (h/l/c): l
Choosing between 4 and 9
Is it 8? (h/l/c): l
Choosing between 4 and 7
Is it 6? (h/l/c): h
Choosing between 7 and 7
Is it 7? (h/l/c): c
Great! Do you want to play again? (y/n): y
 

Think of a number between 1 and 100.
Press 'r'  when you are ready: r
Do you want me to use logic or intuition? (print 'g'-loGic, 'i'-Intuition: g
Choosing between 1 and 100
Is it 50? (h/l/c): l
Choosing between 1 and 49
Is it 25? (h/l/c): l
Choosing between 1 and 24
Is it 12? (h/l/c): l
Choosing between 1 and 11
Is it 6? (h/l/c): h
Choosing between 7 and 11
Is it 9? (h/l/c): l
Choosing between 7 and 8
Is it 7? (h/l/c): c
Great! Do you want to play again? (y/n): n

*/
