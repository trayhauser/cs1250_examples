#include <iostream>
using namespace std;

#if 0
double funct()
{
  cout << "no args funct called\n";

  static int c;

  return c++;
}
#endif

#if 1
double funct(int a = 0, int b = 1)
{
  cout << "int funct called\n";

  static int c = 1;


  return a + b + c;
}

double funct(double a = 0.0f, double b = 1.0f)
{
  cout << "double funct called\n";

  static double c;

//  c++;

  return a + b + c;
}
#endif

int main()
{
  double a = 1.0;
  double b = 2.0;
  double c = 0.0;
  //double c = 0.0;
  for(int i = 0; i < 3; i++)
  {
    //cout << funct() << endl;
    //cout << funct(i) << endl;
    //cout << funct(i,i) << endl;
    //cout << funct(i,(float)i) << endl;
    //cout << funct((float)i) << endl;
    //cout << funct((double)i, (double)-3.2) << endl;
    //c = funct(a,b);
    c = funct(1);
    cout << c << endl;
    //cout << funct((double)i,b) << endl;
  }

  return 4;
}
