#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
  int cnt = 0;
  int theothercnt = 0;
 
  //while(cnt < 5)   
  while(1)   
  {
    cout << cnt << endl;
    cnt++;
    if(cnt == 2)
    {
       break;
    }
    int theothercnt = 0;
    while(1)
    {
       cout << theothercnt << endl;
       theothercnt++;
       if(theothercnt == 2)
       {
         break;
       }
    }
#if 0
    theothercnt = 0;
    while(theothercnt != 2)
    {
       cout << theothercnt << endl;
       theothercnt++;
    }
#endif
    
  }
 
  return 0;
}

