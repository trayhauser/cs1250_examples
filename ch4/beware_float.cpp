#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
  float a = 89.99;
  float b = 90.00;
  float c = 90.01;

  //if(a < 1)
  //{
  //}

  
  //if(a < 1)
  //if(a <= 1)
  //if(a >= 1)
  //if(a != 1)
  //if(fabs(a) < 0.0001)
  //if(0.000001 == 0.00001)
  //if(fabs(b - a) < 0.1)

  if(fabs(b - c) <= 0.1)
  {
    cout << "true!\n";
  }
  else 
  {
    cout << "false!\n";
  }


  return 0;
}

