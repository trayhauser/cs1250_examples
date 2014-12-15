#include<iostream>
#include<iomanip>
using namespace std;

int WTF()
{
  cout << "Hi I'm right here giving a message?\n";
  exit(100); 
  return 1;
}


int main()
{
  int a = 0;

  a = WTF();

  cout << a << endl; 

  return 0;
}

