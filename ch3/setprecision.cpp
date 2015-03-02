#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
  double x0 = 1234.5678;
  double x1 = 123.45678;
  double x2 = 12.345678;
  double x3 = 1.2345678;
  cout << setprecision(1) << 1234.5678 << endl;
  cout << setprecision(2) << 1234.5678 << endl;
  cout << setprecision(3) << 1234.5678 << endl;
  cout << setprecision(4) << 1234.5678 << endl;
  cout << setprecision(5) << 1234.5678 << endl;
  cout << setprecision(6) << 1234.5678 << endl;
  return 0;
}

