#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

//#define NULL \0

int main()
{
  unsigned int seed = time(0);
  int nVal = 0;
  //unsigned seed = 0;
//  unsigned int n = -1;
 
//  cout << n << endl; 

  srand(seed);

  for(int i = 0; i < 20; i++)
  {
    nVal = rand();
    //nVal *= -1; 
    nVal = nVal % 10;
    cout << nVal << endl;
  }
  //cout << rand() << endl;
  //cout << rand() << endl;
  return 0;
}

