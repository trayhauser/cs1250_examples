#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
  int nVar = 0;
  int i = 88;
  float bb = 10.0f;
  int b = 10; 
  int a = 0; 
  float c = 3.0f;
 
  for(b = 10, a = 0, c = 3.0f; (a < 5) && (b > 0); a++, b--)
  {
    //cout << a << endl;
    cout << b << endl;
    //cout << c << endl;
  }

  cout << i << " " ;
  cout << endl;
 
  return 0;
}

