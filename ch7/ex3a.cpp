#include<iostream>
#include<iomanip>
using namespace std;

void print(int a[]) //definition
{
  for(int i = 0; i < 6; i++)
  {
    cout << a[i] << " ";
    cout << endl;
  }
  cout << endl;
}

//void print(int b[])
//void print(int b[][])
// [row][col]
void print(int b[][2])
{

  for(int i = 0; i < 3; i++)
  {
    for(int j = 0; j < 2; j++)
    {
      cout << b[i][j] << " ";
      cout << endl;
    }
  }
  cout << endl;
}

int main()
{
  int a[] = {0,1,2,3,4,5}; 
  int b[][2] = { {0,1} ,{ 2,3} ,{4,5}}; 
  int c[3][2] = { {0,1} ,{ 2,3} ,{4,5}}; 
  print(a);
  print(b);
  print(c);
  return 0;
}
