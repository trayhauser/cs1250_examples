#include<iostream>
#include"tfile.h"
using namespace std;

float print_message()
{
  //cout << str << endl;
  return 3.2; 
}

int print_message(int a)
{
  cout << a << endl;
  return a;
}

string print_message(string str)
{
  string a;
  ///a = "Our cool return message\n";
  //cout << str << endl;
  cout << str << endl;
  return a;
}
