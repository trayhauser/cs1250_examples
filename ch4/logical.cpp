#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
  int a = 0;
  int b = 1;
  int c = 0;

  // and
  if(a && b && c)
    cout << "true\n";
  else
    cout << "false\n";
 
  if(a and b and c)
    cout << "true\n";
  else
    cout << "false\n";

  // or
  if(a || b || c)
    cout << "true\n";
  else
    cout << "false\n";
  
  if(a or b or c)
    cout << "true\n";
  else
    cout << "false\n";

  return 0;
}

