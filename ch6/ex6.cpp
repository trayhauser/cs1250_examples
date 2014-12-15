#include <iostream>
using namespace std;

const int m = 1;

void f()
{
  cout << "m=" << m << endl;  
}

void h()
{
  int m = 2;
  cout << "m=" << m << endl;  
}

int main()
{
  f();
  h();
  return 4;
}
