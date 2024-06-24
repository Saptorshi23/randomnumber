#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
  srand(unsigned(time(NULL)));
  int randomN = (rand()%100)+1;
  int guess=0;
  while(guess!=randomN)
  {
    cout << "Guess the number(1-100)";
    cin >> guess;

    if(guess>randomN)
    {
      cout << "Guess lower" << endl;
    }
    else if(guess<randomN)
    {
      cout << "Guess higher" << endl;
    }
    else
    {
      cout << "Your guess was correct" << endl;
    }
  }
  return 0;
  }