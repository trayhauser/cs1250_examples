#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
  int a = 0;
  cout << "Give me someting! ";
  cin >> a;

  if(a == 0)
  {
    cout << "Zero!\n";
  }
  else if(a == 1)
  {
    cout << "One!\n";
  }
  else if(a == 2)
  {
    cout << "Two!\n";
  }
  else if(a == 3)
  {
    cout << "Three!\n";
  }
  else
  {
    cout << "Default!\n";
  }

  switch(a)
  {
    case 0: 
      cout << "Zero!\n";
      break;
    case 1: 
      cout << "One!\n";
      break;
    case 2: 
      cout << "Two!\n";
      break;
    case 3: 
      cout << "Three!\n";
      break;
    default: 
      cout << "Default!\n";
      break;

  }
  return 0;
}

