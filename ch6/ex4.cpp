#include <iostream>
using namespace std;

#if 1
double funct(int a, int b)
{
  a++, b++;
  return a + b;
}
#else
double funct(int& a, int& b)
{
  a++, b++;
  return a + b;
}
#endif

int main()
{
  int x = 4;
  int y = 5;
  double w = 0.0;
  //for(int i = 0; i < 3; i++)
  {
    w = funct(x,y);
    cout << w << " " << x << " " << y << endl;
  }

  return 4;
}
