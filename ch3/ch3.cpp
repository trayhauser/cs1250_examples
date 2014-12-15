#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
  //char c = 'a';
  int n = 4;
  float f = 4.0;
  double d = 4.0;
  string str = "4.0";

  cout << n << endl;
//  cin >> f;

  //f = static_cast<float>(5) - static_cast<float>(2.1) * static_cast<float>(10);

  cout << setprecision(5) << fixed << showpoint << f << endl;

  return 0;
}

