#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
  //int i = 10;
  int i = 0;

  //while(--i)
  while(1)
  {
    i++;
    cout << i << endl;
    cout << "i= " << i << " mod (i%2)" << (i % 2) << endl;
    if(i % 2)
    {
      continue;
    }
    if(i == 4)
    {
      cout << "Exit\n";
      break;
    }
    cout << "Hi " << i << endl;
  }
  


  
  return 0;
}

