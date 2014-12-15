#include<iostream>
#include<iomanip>
using namespace std;

int __sum(int a, int b)
{
  return a + b;
#if 0
  int tot = 0;
  for(int i = b; i < a; i++ )
  {
    tot += i;
    //cout << tot << endl;
  }
  return tot;
#endif
}

int main()
{
  
  cout << __sum(5,2) << endl;
 
  return 0;
}

