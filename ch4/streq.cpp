#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
  string stra;
  string strb;

  stra = "aa";
  strb = "aA";

  if(stra == strb ) 
  {
    cout << "Yep they are the same!\n";
  }
  else
  {
    cout << "What?!!! They aren't.\n";
  }

  if(stra < strb)
  {
    cout << "stra less than strb!!!\n";
  } 
  else 
  {
    cout << "stra greater than strb!!!\n";
  }
  // ascii value
  cout << "stra =" << stra <<  " ascii values are " << (int)stra[0] << " "  << (int)stra[1] << endl;
  cout << "strb =" << strb <<  " ascii values are " << (int)strb[0] << " "  << (int)strb[1] << endl;
   
  return 0;
}

