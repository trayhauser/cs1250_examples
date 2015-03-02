#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
  char ch;
  int number;
  std::cout << "Enter a number: ";
  cin >> number;
  cin.ignore();
  cout << "Enter a character: ";
  ch = cin.get();

  cout << number << " " << ch << endl;
  cout << "KTHXBAI.\n";
 
  return 0;
}

