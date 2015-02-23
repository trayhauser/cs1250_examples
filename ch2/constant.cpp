#include<iostream>
#include<iomanip>
using namespace std;

// in the old days
#define TRUE 1
#define FALSE 0

//#define 0 TRUE

int main()
{
  int a = 3;
  const int b = 42;
  bool bA = true;
  

  a = 4;
  cout << a << endl;
 
  a = 5;
  cout << a << endl;

  //b = 5;
  //cout << b << endl;
 
  
  cout << TRUE << endl;

  return 0;
}

