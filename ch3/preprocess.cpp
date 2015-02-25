#include<iostream>
#include<iomanip>
using namespace std;


#define _TEST_

#ifdef _TEST_ 

int main()
{
  cout << "main no1\n"; 
  return 0;
}

#else

int main()
{
  cout << "main no2\n"; 
  return 0;
}
#endif
