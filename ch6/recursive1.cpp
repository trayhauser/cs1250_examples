#include<iostream>
#include<iomanip>
using namespace std;

void recur(int a)
{
  cout << a << endl;
  if(a == 0)
    return;
  recur(a--);
  return;
}
int main()
{
  recur(10);
 
  return 0;
}

