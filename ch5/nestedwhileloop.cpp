#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
  int cnt = 0;
  int cnt1 = 0;
 
  while(1)   
  {
    //cout << cnt << " " << cnt1 << endl;
    cnt1 = 0;
    while(1)
    {
      if(cnt1 == 2)
      {
         cout << "HI\n";
         break;
      }
      cnt1++;
    }
    cnt++;
    if(cnt == 2)
    {
         cout << "hi\n";
       break;
    }
  }
 
  return 0;
}

