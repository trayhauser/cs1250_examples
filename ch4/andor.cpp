#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
  bool p = true;
  bool q = true;
  bool r = false;

  if(p and q)
  {
     cout << "Yep it's true\n";
  } 

  if(p or r)
  {
     cout << "Yep it's true\n";
  }
  else
  {
     cout << "Yep it's false\n";
  }

  return 0;
}

