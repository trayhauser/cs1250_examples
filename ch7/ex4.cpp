#include<iostream>
#include<iomanip>
#include<vector>

using namespace std;

void print(vector<int>& b)
{
  for(int i = 0; i < b.size(); i++)
  {
    cout << b[i] << endl;
  }
}

int main()
{
  vector<int> a;

  a.push_back(1);
  a.push_back(2); 
  a.push_back(3); 
  print(a);

  return 0;
}

