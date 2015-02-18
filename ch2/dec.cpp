#include <iostream>
using namespace std;

#define DEBUG 1

int main()
{
  int a = 2;
  int b = 3;
  int c = 10;
  int d;
  long l = 2L;
  double e = 1.2f;

#ifdef DEBUG
  d = a * 2;
  d *= 2;
  d += 2;
  d -= 2;
  d /= 2;
  d = c / b;
  e = c % b;
#endif
#if 0
  d = d * 2;
  d = c / a;
  d = c - a;
#endif
  d = (a * b) / (c + b);

  d = (a * b) / (c + b);

  d = a + b + c + b;

  cout << e << endl;
}  

