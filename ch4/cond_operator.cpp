#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
  bool ba = true;
  bool bb = false;
  bool flag = true;

  if(ba)
     cout << "true\n";
  else
     cout << "false\n";

  ba ? flag = true : flag = false;

  if(flag)
     cout << "co true\n";
  else
     cout << "co false\n";

 
  return 0;
}

