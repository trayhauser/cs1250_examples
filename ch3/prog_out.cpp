#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
  string x;
//  cin >> x;
  getline(cin, x);
//  cout << "Hello " << "(" << setw(8) << x << ")" << endl;

  std::cout << "\"\nHo\twdy!\n\"" << x << "\n";
  cout << x << endl;

  return 0;
}

