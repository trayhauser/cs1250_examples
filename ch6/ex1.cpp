#include<iostream>
#include<iomanip>
using namespace std;

// style 1
// function prototype
void print_message();

// style 2
void print_theothermessage()
{
  cout << "The other hi\n";
}

int main()
{
  print_message();
  print_theothermessage();
 
  return 0;
}

// style 1
void print_message()
{
  cout << "Hi\n";
}
