#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
  int a = 0;
  int b = 1;
  int c = 2;
  int nVar = 0;

  cout << "What val?";  
  cin >> nVar;

  switch(nVar)
  {
    case 0:
      cout << "A" << endl;
    //break;

    case 1:
      cout << "B" << endl;
    //break;

    case 2: 
      cout << "C" << endl; 
    break;

    default: 
      cout << "WTF???" << endl;
    break;
 }  
 
  return 0;
}

