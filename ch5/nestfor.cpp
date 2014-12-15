#include<iostream>
#include<iomanip>
using namespace std;

int var2 = 0;
int main()
{
  var2 = 0;
  int var1 = 0;
  int var3 = 0;
  for(; var1 < 3; var1++)
  {
    for(var3 = 0; var3 < 4; var3++)
    {
      var2++;
      ;
    }
  }
  cout << var2 << endl;
 
  return 0;
}

