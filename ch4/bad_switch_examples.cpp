#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
  string a = "0";
  cout << "Give me someting! ";
  cin >> a;

  //won't work
  switch(a)
  {
    case "0": 
      cout << "Zero!\n";
      break;
    case "1": 
      cout << "One!\n";
      break;
    case "2": 
      cout << "Two!\n";
      break;
    case "3": 
      cout << "Three!\n";
      break;
    default: 
      cout << "Default!\n";
      break;

  }
  return 0;
}

