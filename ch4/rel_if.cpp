#include<iostream>
#include<iomanip>
using namespace std;

// relational operators are expressions

int main()
{
  int a = 0;
  int b = 1;
  int v = 0;

  v = (b > 0);  
  cout << v << endl;  

  v = (b < 0);  
  cout << v << endl;  

  v = (b >= 0);  
  cout << v  << endl;  

  v = (b <= 0);  
  cout << v  << endl;  

  v = (b == 0);  
  cout << v  << endl;  

  v = (b != 0);  
  cout << v  << endl;  

  v = (b == 3);  
  cout << v  << endl;  

  v = (b = 3);  
  cout << v  << endl;  

  return 0;
}

