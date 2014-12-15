#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

#define M_PI 3.14592 

int main()
{
//  const double PI = 3.14;
  double a = 0;
  double r = 2;


  a = M_PI * pow(r,2); 
  cout << a << endl;
  cout << M_PI << endl;

  return 0;
}

