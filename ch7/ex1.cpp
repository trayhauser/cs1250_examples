#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main()
{

  // C style arrays
  const int size = 4;
  int a[] = { 0, 1, 2, 3};
  int b[4]; 
  int c[size];
  string s[size];
  char ch[size];

  for(int i = 0; i < 4; i++)
  {
    cout << a[i] << " ";
  } 
  cout << endl;

  for(int i = 0; i < 4; i++)
  {
    //b[i] = 0;
    cout << b[i] << " ";
  } 
  cout << endl;

  for(int i = 0; i < 4; i++)
  {
    c[i] = i;
    cout << c[i] << " ";
  } 
  cout << endl;

  for(int i = 0; i < 4; i++)
  {
    //c[i] = i;
    cout << s[i] << " ";
  } 
  cout << endl;

  ch[0] = '0';
  ch[1] = '1';
  ch[2] = '2';
  ch[3] = '3';
  for(int i = 0; i < 4; i++)
  {
    //ch[i] = i;
    cout << ch[i] << " ";
  } 
  cout << endl;


  return 0;
}

