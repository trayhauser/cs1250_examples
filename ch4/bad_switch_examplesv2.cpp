#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
  float a = 0.1;
  cout << "Give me someting! ";
  cin >> a;

  // won't work
  switch(a)
  {
    case 0.0: 
      cout << "Zero!\n";
      break;
    case 1.0: 
      cout << "One!\n";
      break;
    case 2.0: 
      cout << "Two!\n";
      break;
    case 3.0: 
      cout << "Three!\n";
      break;
    default: 
      cout << "Default!\n";
      break;

  }
  return 0;
}

