#include<iostream>
#include<iomanip>
using namespace std;

// 100 digits of pi
#define m_PI 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679

const float PI = 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679;

int main()
{
  float fPI = m_PI;
  double dPI = m_PI;
  cout << PI << endl;
  cout << m_PI << endl;
  cout << fPI << endl;
  cout << dPI << endl;
 
  cout << setprecision(100) << showpoint << fixed;
  cout << fPI << endl;
  cout << dPI << endl;

  return 0;
}

