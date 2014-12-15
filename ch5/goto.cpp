#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
  int i = 0; 
  bool bOk = true;
  while( bOk ) 
  {
    cout << i << " " ;
THEOTHERHERE:
    if(i == 2)
    {
      bOk = false;
      //break;
      goto HERE;
    }
    i++;
  }
HERE:

  cout << i << " " ;
  cout << endl;
  goto THEOTHERHERE;
 
  return 0;
}

