#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
  // beware of bad indenting!!!!!!
  // with nested ifs
  bool bval1 = true;
  bool bval2 = false;
  bool bval3 = false;
  if(bval1)
  if(bval2)
  if(bval3)
    cout << "true\n";
  else
    cout << "false\n";
 
  return 0;
}

