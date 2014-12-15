#include<iostream>
#include<iomanip>
#include"supercool.h"
using namespace std;

int main(int argc, char** argv)
{
  int ia = 0;
  int ib = 0;
  int iret = 0;
  float fret = 0.1;

  printf("%s\n", argv[0]);
  printf("%d\n", argc);
  if(argc == 2)
  {
    printf("%s\n", argv[1]);
  }

  ia = 4;
  ib = 5;

  //iret = supercoolmultiplication(5,5);
  fret = supercoolmultiplication(5.1,5.1);
  cout << "fret=" << showpoint << fixed << setprecision(2) << fret << endl;

  //cout << iret << "=" << ia << "*" << ib << endl;
 
  //return 0;
}

