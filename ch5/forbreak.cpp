#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
  for(int i = 0; i < 3; i++)
  {
    cout << i << endl;
    if(i == 1)
    {
      break;
    }
  }

  int j = 0;
  while(1)
  {
    cout << j << endl;
    if(j == 2)
    {
      break;
    }
    j++;
  }

  int k = 0;
  bool bCorrect = false;
  while(!bCorrect)
  {
    // if something is correct like a file open?
    bCorrect = true;
    if(k == 3)
    {
      break;
    } 
    k++;
  } 

  if(bCorrect == false)
  {
    cout << "Hasta later!\n"
    return 0;
  }
  return 0;
}

