#include<iostream>
#include<iomanip>
using namespace std;

#define TRUE 1
#define FALSE 0

int main()
{
  int nA = 1;
  int nB = 2;
  int nC = 3;
  int bVal = TRUE; 
  bool bBool = true;

  bVal = (nA <= nB);
  cout << bVal << endl;
  bBool = (nA <= nB);
  cout << bBool << endl;
 
  bVal = (nA >= nB);
  cout << bVal << endl;
  bBool = (nA >= nB);
  cout << bBool << endl;

  bVal = (nA == nB);
  cout << bVal << endl;
  bBool = (nA == nB);
  cout << bBool << endl;
  bBool = (nA == nA);
  cout << bBool << endl;

  bBool = (nA != nA);
  cout << bBool << endl;

  bBool = (!(nA == nA));
  cout << bBool << endl;

  //bVal = if(nA = nC);
  //cout << bVal << endl; 

  bVal = (nA == (nC - 2));
  cout << bVal << endl; 

  return 0;
}

