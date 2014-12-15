#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main()
{
  string strX;
  string strY;
  string strZ; 
  char szX[10];
  char szY[10];
  char szZ[10];

  strcpy(szX, "1");
  strcpy(szY, "2");
  strcat(szZ, szX);
  strcat(szZ, szY);

  strX = "1";
  strY = "2";

  strZ = strX + strY;

  cout << "The string output is: " << strZ << endl;
  printf("The string output is: %s\n", strZ.c_str());

  printf("The string output is: %s\n", szZ);

  return 0;
}

