#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
  string n1,n2,n3;
  double v1,v2,v3;
  double vt;
  double p1,p2,p3;

  cout << "n1: ";
  cin >> n1;
  cout << "v1: ";
  cin >> v1;

  cout << "n2: ";
  cin >> n2;
  cout << "v1: ";
  cin >> v2;

  cout << "n3: ";
  cin >> n3;
  cout << "v1: ";
  cin >> v3;

  vt = v1 + v2 + v3;
  
  p1 = v1 / vt;
  p2 = v2 / vt;
  p3 = v3 / vt;
 
  cout << setw(10) << right << n1 << " " << v1 << " " << p1 << endl; 
  cout << setw(10) << right << n2 << " " << v2 << " " << p2 << endl; 
  cout << setw(10) << right << n3 << " " << v2 << " " << p3 << endl; 

  cout << "total " << vt << endl;

  return 0;
}

