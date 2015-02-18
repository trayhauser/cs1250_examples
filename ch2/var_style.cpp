#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
  double fShares = 0.0;
  double fSharePrice = 0.0;
  int b = 0;

  fShares = 1.9999;

  // new way
  b = static_cast<int>(fShares);
  // still good old way from the c world
  b = (int)fShares;

 
  return 0;
}

