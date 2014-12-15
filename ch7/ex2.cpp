#include<iostream>
#include<iomanip>
#include<string>
#include<vector>
using namespace std;

int main()
{
  int a[4];
  vector<int> b;

  for(int i = 0; i < 8; i++)
  {
    //a[i] = 2*i;
    a[i] = i;
  }
  
  // won't work for c style arrays
//  a[100000] = 0;

#if 0 
  cout << a[0] << " ";
  cout << a[1] << " ";
  cout << a[2] << " ";
  cout << a[3] << " ";
  cout << endl;
#endif

  for(int i = 0; i < 4; i++)
  {
    cout << a[i]  << " ";
  }

  int tmp = 0;
  b.push_back(tmp);
  tmp++;
  b.push_back(tmp);
  tmp++;
  b.push_back(tmp);
  tmp++;
  b.push_back(tmp);
  tmp++;
  b.push_back(tmp);
 
  for(int i = 0; i < b.size(); i++)
  {
    cout << b[i]  << " ";
  }
  cout << endl;

  // won't work for vectors either
  //b[10000] = 0;

  return 0;
}

