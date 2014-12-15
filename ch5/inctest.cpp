#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
  int i = 0;

  //++i++; // doesn't compile
  i=1+++i; // doesn't compile
 
  cout << i << endl; 
 
  return 0;
}

