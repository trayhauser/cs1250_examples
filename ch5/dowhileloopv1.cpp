#include<iostream>
#include<iomanip>
using namespace std;

#define FALSE 0
#define TRUE  1
#define THING  (i++) 

int main()
{

  int i = 0;
  int bOk = TRUE;
  do
  {
    cout << i << endl;
    if(i == 5)
      bOk = FALSE;
    i++;
  } while( bOk );

  //THING; /// just incrementing.
  i++;
  //cout << THING << endl;
  cout << (i++) << endl;
   
  return 0;
}

