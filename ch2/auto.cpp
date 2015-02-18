// build this with the following command line
// g++ -std=c++11 auto.cpp
#include<iostream>
#include<iomanip>
#include<typeinfo>
using namespace std;

int main()
{
  auto a = 9.3;
  auto i = 3;

  cout << a << " " << i << endl;

  cout << typeid(a).name() << " " << typeid(i).name() << endl;
 
  return 0;
}

