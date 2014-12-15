//#include<iostream>
#include<stdio.h>
//using namespace std;

int main()
{
  FILE* fp = fopen("./file1.txt", "r");
  if(fp)
  {
    printf("file1.txt is open\n");
    fclose(fp);
  }

  return 0;  
}
