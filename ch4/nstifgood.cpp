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
#if 0 // bad
  if(bval1)
  if(bval2)
  if(bval3)
    cout << "true\n";
  else
    cout << "false\n";
#endif  

#if 1 // good
  // what really is going on
  if(bval1)
  {
    if(bval2)
    {
      if(bval3)
        cout << "true\n";
      else
        cout << "false\n";
    }
  }
#endif

#if 0
  if(bval2)
    cout << "one\n"; cout << "two\n";
#endif
 
  return 0;
}

