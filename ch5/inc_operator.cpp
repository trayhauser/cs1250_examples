#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
  int i = 0;

  //cout << i++ << endl; // 0
  //cout << ++i << endl; // 2
  cout << (++i)++ << endl;  // 1
  cout << i << endl;  // 2
  cout << i++*--i << endl;  // 4
 
  return 0;
}

