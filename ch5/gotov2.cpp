#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
#if 0
  string str;

  do{
    cout << "Give me a string: ";
    cin >> str;
    /// some code goes here based on str 
  } while(str == "yes");

  int bb = 0;
  do{
    cout << "Hi " << bb << endl;
    bb++;
  } while(bb < 3); 

  int a = 0;
  while(a < 3)
  {
    cout << "Hi " << a << endl;
    a++;
  }
  
  for(int n = 0; n < 3; n++)
  {
    cout << "Hi " << n << endl;
  }
#endif

  int evilcnt = 0;
JUNK:
  cout << "Evil " << evilcnt << endl;
  evilcnt++; 
  if(evilcnt > 2)
    goto ENDOFJUNK;  

  goto JUNK;

ENDOFJUNK:

  return 0;
}

