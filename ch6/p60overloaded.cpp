#include<iostream>
#include<iomanip>
using namespace std;

int getValue()
{
  int inputValue;
  cout << "Enter an integer: ";
  cin >> inputValue;
  return inputValue;
}

double getValue()
{
  double inputValue;
  cout << "Enter a floating-point number: ";
  cin >> inputValue;
  return inputValue;
}

int main()
{
  auto val = 1;
  val = getValue();
  return 0;
}


