#include<iostream>
#include<iomanip>
using namespace std;

//static int globalvariable; 
int i = 9;

int add()
{
  //int i = 2;
  //static int i; // first time initialized to zero
  //static int i = 3; 
  //cout << i << endl;

  return ++i;
  //return i++;
}

int main()
{
  int i = 8;
  //cout << i << endl;
  //add();

#if 1
  for(int i = 0; i < 3; i++)
  {
    cout << add() << endl;
  }
#endif
 
  return 0;
}

