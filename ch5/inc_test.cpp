#include<iostream>
//#include<iomanip>
using namespace std;

int main()
{
  int I = 2;
  int J = 0;
  int K = 0;

  //J = (I++)*(--I);
  //J = 1*(--I);
  //J = (I++)*1;
  J = (I++)+(++I);
  cout << J << endl;
  cout << I << endl;

#if 0
  cout << (--I) << endl;
  J = I;
  cout << (I++) << endl;
  K = I;
  K = J * K;
  cout << K << endl;
#endif
 
  return 0;
}

