#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
  double a = 19.2;
  int    b = 2;
  int    c = 5;
  cout << a * b << endl;

  //b = a;
 
  cout << b << endl;
 
  cout << (double)c / b << endl;
  cout << static_cast<double>(c) / b << endl;

  return 0;
}

