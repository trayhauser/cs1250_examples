#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
  float a = 0.1;
  cout << "Give me someting! ";
  cin >> a;

  //won't work
  switch(a)
  {
    case static_cast<int>(0.0): 
      cout << "Zero!\n";
      break;
    case static_cast<int>(1.0): 
      cout << "One!\n";
      break;
    case static_cast<int>(2.0): 
      cout << "Two!\n";
      break;
    case static_cast<int>(3.0): 
      cout << "Three!\n";
      break;
    default: 
      cout << "Default!\n";
      break;

  }
  return 0;
}

