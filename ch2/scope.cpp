#include<iostream>
#include<iomanip>
using namespace std;

int a = 20;

int main()
{
  // the program does not know about a right
  // here v

  ///a = 3;


  int a = 20;
  cout << a << endl;

  {
     int a = 4;
     cout << a << endl;
  }
 
  cout << a << endl;

  return 0;
}

