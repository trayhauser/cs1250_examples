#include<iostream>
#include<string>
using namespace std;

int main()
{
  string str1;
  string str2;
  string str3;
  int a = 0;
  cout << "Enter string : ";
  //cin >> str1;
  cin >> str1 >> str2;
  //cin >> str1 >> a;
  cin.ignore();
  str3 = str1 + str2;
  //str2 += str1;
  //cout << "What was entered -> " << str1  << endl;
  cout << "What was entered -> " << str3  << endl;
  //cout << "What was entered -> " << str1 << a << endl;
  //cout << "What was entered -> " << str1 << " " << str2 << endl;
  //cout << "What was entered -> " << str1 << " " << a+3 << endl;

#if 0 
  cout << "Enter string : ";
  getline(cin, str1);
  //str3 = str1 + str2;
  cout << "What was entered -> " << str1 << endl;
#endif

  return 0;
}

