#include <iostream>
using namespace std;

double funct(int a, int b = 1)
{
  cout << "int funct called\n";
  return a + b;
}

double funct(double a, double b = 1.0f)
//double funct(double a, double b)
{
  cout << "double funct called\n";
  return a + b;
}

int main()
{
  double d = 4.0;
  int i = 1;

  cout << funct(d,d) << endl;

  return 4;
}
