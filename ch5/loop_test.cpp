#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
// goto inf loop
  int i = 0;

// i can haz while loop
there:
  if(i == 5) 
  {
    //break;
    goto notthere;
  }
  cout << "HAI\n";
  i++;
  goto there;     
notthere:

// i can haz do whilz loop
therenothisone:
  cout << "WTF!!!!\n";
  i++;
  if(i == 10) 
  {
    //break;
    goto nottherethisnothere;
  }
  goto therenothisone;     
nottherethisnothere:

// i can haz for loopz

// initilizer partz
  int variable = 0;
nocheezyet:
// stoppingz condz
  if(variable == 5)
  {
    goto cheeze;
  }
// i canz chase mize

// loopz bodz
  cout << "wherz cheez!\n";

  variable++; 
  goto nocheezyet;
cheeze:
  cout << "found chezz!!!!!\n";

  return 0;
}

