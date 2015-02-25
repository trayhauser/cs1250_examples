#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
  double x0 = 1234.5678;
  double x1 = 123.45678;
  double x2 = 12.345678;
  double x3 = 1.2345678;
  cout << setprecision(1) << fixed << showpoint << 1234.5678 << endl;
  cout << setprecision(2) << fixed << showpoint << 1234.5678 << endl;
  cout << setprecision(3) << fixed << showpoint << 1234.5678 << endl;
  cout << setprecision(4) << fixed << showpoint << 1234.5678 << endl;
  cout << setprecision(5) << fixed << showpoint << 1234.5678 << endl;
  cout << setprecision(6) << fixed << showpoint << 1234.5678 << endl;
  cout << setprecision(4) << fixed << showpoint << 652.378 << " " << 0.032894 << endl; 
  cout << setprecision(4) << fixed << showpoint << 652.301 << " " << 0.032894 << endl; 
  return 0;
}

