#include<iostream>
#include<iomanip>
#include<cstdio>
using namespace std;

int main()
{
  char szBuff[100];
  string x;
//  cin >> x;
  getline(cin, x);
  strcpy(szBuff, x.c_str());
  cout << "Hello " << "(" << setw(8) << x << ")" << endl;
  printf("%s\n", szBuff);
  return 0;
}

