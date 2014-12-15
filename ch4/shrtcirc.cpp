#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
  int nA = 1;
  int nB = 2;
  int nC = 3;
  int nD = -1;

  // short circuit evaluation.
  if( (nA == nB) && (nD += 1) )
  //if( (nA == nA) && (nD += 1) )
  //if( (nA == nA) or (nB == nB) )
  {
    cout << nD << endl;
    cout << "Yep it is true\n";
  }
  else
  {
    cout << nD << endl;
    cout << "No way it is false\n";
  } 

  return 0;
}

