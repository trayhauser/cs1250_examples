#include<iostream>
using namespace std;

int a = 5;

int main()
{
//  int a = 0;


  {
  int a = 0;
  a += 1;
  cout << a << endl;
  }

  {
  int a = 0;
  a += 2;
  cout << a << endl;
  }  

  a = a - 1;
  cout << a << endl;

  return 0;
}

