#include <iostream>
using namespace std;

double funct(int a, int b)
{
  a++, b++;
  if(a == 1)
  {
    cout << "exiting from inside of function!!\n";
    exit(EXIT_FAILURE);
  }
  return a + b;
}

int main()
{
  int x = 0;
  int y = 0;
  double w = 0.0;
  for(int i = 0; i < 3; i++)
  {
    w = funct(x,y);
    cout << w << " " << x << " " << y << endl;
  }

  cout << "exit at end of main\n";
  return 4;
}
