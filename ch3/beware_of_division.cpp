#include<iostream>
#include<iomanip>
using namespace std;

int main()
{

  unsigned int a = 5;
  float b = 3;

  //cout << setprecision(3) << showpoint << fixed << a / b << endl; 
  cout << setprecision(3) << showpoint << fixed << (static_cast<float>(a) / b) << endl; 
  return 0;
}

