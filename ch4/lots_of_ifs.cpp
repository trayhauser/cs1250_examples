#include<iostream>
#include<iomanip>
using namespace std;

// examples of ifs with preprocessor
// also examples of different kinds of ifs

int main()
{
  int a = 0;

#if 0
  if(a < 0)
    cout << "Less than 0" << endl;
  else if(a == 0)
    cout << "equal to 0" << endl;
  else
    cout << "greater than 0" << endl;
#endif
#if 0
  if(a < 0)
  {
    cout << "Less than 0" << endl;
    cout << "aa\n";
  }
  else if(a == 0)
  {
    cout << "equal to 0" << endl;
    cout << "bb\n";
  }
  else
  {
    cout << "greater than 0" << endl;
    cout << "cc\n";
  }
#endif
#if 1
  if(a < 0)
  {
    cout << "Less than 0" << endl;
    cout << "aa\n";
  }
  if(a == 0)
  {
    cout << "equal to 0" << endl;
    cout << "bb\n";
    a = -8;
  }
  else if(a != 0) 
  {
    cout << "greater than 0" << endl;
    cout << "cc\n";
  }
#endif


  return 0;
}

