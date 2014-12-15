#include<iostream>
#include<iomanip>
using namespace std;

int level2(int b)
{
  return ++b;
}

int level1(int a)
{
  return a + level2(a);
}

int main()
{

  cout << level1(1) << endl;
  
 
  return 0;
}

