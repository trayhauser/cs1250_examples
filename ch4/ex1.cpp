#include<iostream>
#include<iomanip>
using namespace std;

// macro substitution

#define FRANCE 0
#define USA 1

#define TRUE 1
#define FALSE 0

int main()
{
  bool a = true;
  bool b = false;
  bool t = true;
  bool f = false;
  char szBuff[200]; // hi george this is a dude from france
  itn  nBuff[200];
  char* pStr = szBuff;
  
  float f_a = 0.01;
  float f_b = 1.01;
  float f_c = 1.011;

  char ca = 'a';
  char cb = 'b';
  char cc = 'c';
 
  string str_a = "aaa";
  string str_b = "bbb";
  string str_c = "ccc";

  int n_na = 0;
  int nb = 1 ;
  int nc = -1;

#ifdef USA
  // is equal
  //  if( (na == nb)  )
  //  if( TRUE )
  //  if( t )
  //  if( f_a >= f_b ) 
  //  if( f_a != f_b ) 
  //  if( false )
  if( str_a == str_a ) 
  {
    float f_na = 200.2222;
    if(str_a == str_a)
    {
//      int na = 100;
      cout << f_na << endl;
      cout << "They are equal!\n";
    }
    else
    {
      cout << "They are not equal!\n";
    }
    // do something
    cout << "The true part\n";
  } 
  else if(str_a == str_a)
  {
    cout << "The middle true part\n";
  }
  else
  {
    cout << "The false part\n";
  }
#endif

#if 0 // turns off french code
#ifdef FRANCE
 unsigned int szBuff[200]; 
 char* pStr = (char*)szBuff;
#endif
#endif

 
  return 0;
}

