#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
  int a = 0;
  int b = 1;
  int v = 0;

  // relational expressions!!!!!
  cout << (b > 0) << endl;  
  cout << (b < 0) << endl;  
  cout << (b >= 0) << endl;  
  cout << (b <= 0) << endl;  
  cout << (b == 0) << endl;  
  cout << (b != 0) << endl;  
  cout << endl;
 
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

  return 0;
}

