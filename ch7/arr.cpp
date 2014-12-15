#include<iostream>
#include<iomanip>
using namespace std;

//void comp(int* arr)
void comp(int arr[])
{
  for(int i = 0; i < 20; i++)
  {
    arr[i] += 1;
  }
}

int main()
{
  const int size = 20;
  int varr[size];
  //int varr1 = {1,1};
   
  for(int i = 0; i < size; i++)
  {
    varr[i] = 0;
  }

  comp(varr);

  for(int i = 0; i < size; i++)
  {
    cout << varr[i]; 
  }
  cout << endl;
  
  return 0;
}

