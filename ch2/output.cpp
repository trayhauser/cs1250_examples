#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
  double a = 5;
  double b = 3;

  cout << fixed << showpoint << setprecision(2) << a / b << endl; 
  cout << fixed << showpoint << setprecision(3) << a / b << endl; 
  cout << fixed << showpoint << setprecision(5) << a / b << endl; 
  cout << fixed << showpoint << setprecision(50) << a / b << endl; 
 
  return 0;
}

