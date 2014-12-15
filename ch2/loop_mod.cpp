#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
  int a = 2;  
  int b = 3;
  int c = 4;
  int d;

  for(int i = -20; i < 20; i++)
  {
    d = i % a;
    cout << d << " = " << i << " % " << a << endl;
  }

  return 0;
}  

