#include<iostream>
#include<iomanip>
using namespace std;

int a = 12;

int fun(int b);

int main()
{
  //int a = 10;  

  fun(a);
  {
    //int a = 9;
    cout << a << endl;
  }
 
  return 0;
}

int fun(int b)
{
  //int a = 11;
  cout << a << endl;  
}


