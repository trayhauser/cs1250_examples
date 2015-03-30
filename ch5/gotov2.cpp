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

// for loop
  int evilcnt = 0;
JUNK:
  cout << "Evil " << evilcnt << endl;
  if(evilcnt > 2)
  {
    goto ENDOFJUNK;  
  }
  {
    cout << "I see stars, said Dave, the computer" << endl;
  }  
  evilcnt++; 
  goto JUNK;

ENDOFJUNK:

// do while
  int a = 0;
STARTOFMOREJUNK:
  cout << "I really see stars, said Dave, the computer" << endl;

  a++;
  if(a > 2)
    goto ENDOFMOREJUNK;

  goto STARTOFMOREJUNK;    

ENDOFMOREJUNK:

  return 0;
}

