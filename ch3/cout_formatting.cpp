#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
  char ch;
  string str;
  int number;
  double dNum;
  //cout << "EnterChar: ";
  cout << "EnterNum: ";
  cin >> number;
  cin >> dNum;
  //cout << "EnterAnotherNum: ";
  cin >> ch;
  //cin.ignore();
  //ch << cin.get();

  cout << number << " ";
  cout << "EnterChar: ";
  cout << ch << " ";
  //cout << (int)ch << " ";
  //cout << static_cast<int>(ch) << " ";
  //cout << dNum << " ";
  //cout << fixed << dNum << " ";
  //cout << showpoint << dNum << " ";
  //cout << setprecision(2) << dNum << " ";
  cout << "KTHXBAI\n"; 
  return 0;
}

