#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
  int i = 0;

  ++i++;
 
  cout << i << endl; 
 
  return 0;
}

