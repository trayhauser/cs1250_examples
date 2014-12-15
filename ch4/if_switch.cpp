#include<iostream>
#include<iomanip>
using namespace std;

#define ZERO 0

int main()
{
  int a = 0;
  int b = 1;
  int c = 2;
  int nVar = 0;

  cout << "What val?";  
  cin >> nVar;
#if 1  
  if(a == nVar)
  {
    cout << "A" << endl;
  }
  else if(b == nVar)
  {
    cout << "B" << endl;
  }
  else if(c == nVar)
  {
    cout << "C" << endl;
  }
  else
  {
    cout << "WTF????" << endl;
  }
#endif

#if 1
  switch(nVar)
  {
    case ZERO:
      cout << "A" << endl;
    break;

    case 1:
      cout << "B" << endl;
    break;

    case 2: 
      cout << "C" << endl; 
    break;

    default: 
      cout << "WTF???" << endl;
    break;
 }  
#endif
 
  return 5;
}

