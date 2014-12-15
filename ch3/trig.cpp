// this program gets a value from the keybaord and displays the sin of it.
#include<iostream>
#include<iomanip>
#include<string>
#include<cmath>

using namespace std;

int main()
{
  double x = 0.0;
  double y = 0.0;
  cout << "Enter value (radians) ";
  cin >> x;
  y = sin(x);
  cout << y << endl;
  return 0;
}

