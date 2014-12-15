#include<iostream>
#include <string>
#include<iomanip>
using namespace std;

// horstmann 
int main()
{
  int nI0 = 0;
  int nI1 = 1;
  string str = "0"; 
  string str1;
  char c = '0';
  char cArr[100];
  float f1 = 0.0;  
  float f2 = 0.00000000000000000000000000000000000000000000000000000000000000000000000000001;  

  if(nI0)
  { cout << "int true!!!\n";
  }
  else
  { cout << "int false!!!\n";
  }

  if(nI1)
  { cout << "int true!!!\n";
  }
  else
  { cout << "int false!!!\n";
  }

#if 0 // won't compile!!!!
  if((bool)(str))
  { cout << "str true!!!\n";
  }
  else
  { cout << "str false!!!\n";
  }

#endif
  cout << "Size!!!!" <<  str1.size() << endl;
  if(str1.size())
  { cout << "***str1 true!!!\n";
  }
  else
  { cout << "***str1 false!!!\n";
  }

  if(c)
  { cout << "char true!!!\n";
  }
  else
  { cout << "char false!!!\n";
  }

  if(f1)
  { cout << "f1 float true!!!\n";
  }
  else
  { cout << "f1 float false!!!\n";
  }

  if(f2)
  { cout << "f2 float true!!!\n";
  }
  else
  { cout << "f2 float false!!!\n";
  }
  return 0;
}

