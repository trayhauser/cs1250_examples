//#include <stdio.h>
//#include <stdio.hpp>

// look to /usr/include first for header
#include <fun.h>
// look to the local project directory first for header
#include "fun.h"

#include <iostream>
using namespace std;

//const char c = 'a';
char c = 'a';

int main()
{
  //char c = 'a';
  int n = 4;
  float f = 4.0;
  double d = 4.0;
  string str = "4.0";
  int z = 0;
 
  char c1 = 0;
  char c2 = '0';
  string str = "0";
  int n1 = 0;


  n += 5;
  n = n + 5;
  str += "hi";
  str = str + "hi";


  {
    c = 'b';
    cout << "char = " << c << endl;
    n = 5;

    {
      cout << "char = " << c << endl;
      c = 'c';
    }

    cout << "char = " << c << endl;
    f = 5.0;
    d = 5.0;
    str = "6.0";
  }


#if 0
  cout << "sizeof char " << sizeof(c) << endl;
  cout << "sizeof int " << sizeof(n) << endl;
  cout << "sizeof float " << sizeof(f) << endl;
  cout << "sizeof double" << sizeof(d) << endl;
  cout << "sizeof string " << sizeof(str) << endl;
#else
  cout << "char = " << c << endl;
#endif


  return 0;
}
