#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
  static long a = 0;
  a++;
  cout << a << "\n";

  {
    long a = 2;
    cout << a << "\n";
  }

  //main(); 

  return 0;
}

