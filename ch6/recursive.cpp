#include<iostream>
#include<iomanip>
using namespace std;

void recur()
{
  static int a = 10;
  cout << a << endl;
  if(a == 0)
    return;
  a--;
  recur();
  return;
}
int main()
{
  recur();
 
  return 0;
}

