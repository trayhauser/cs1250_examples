#include<iostream>
#include<iomanip>
#include<unistd.h>
using namespace std;

int main()
{
  int i = 0;
  while(true)
  {
    cout << ".....\n";
    if(i > 5)
      break;
    usleep(200000);
    i++;
  }
 
  return 0;
}

