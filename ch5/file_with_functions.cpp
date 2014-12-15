#include<iostream> // cin cout
#include<iomanip> // stream formatting
#include<fstream> // all of your file handling needs
using namespace std;

int add(int a, int b)
{
  return a+b;
}

double add(doubel a, double b)
{
  return a+b;
}

void fileopen(string filename)
{
  cout << "Give me the name!" ;
  cin >> filename; // ask the user for the file name
  ifstream inputFile(filename.c_str());
}


int main()
{
  string name;
  int pop; 
  string filename;

#if 0
  cout << "Give me the name!" ;
  cin >> filename; // ask the user for the file name
  ifstream inputFile(filename.c_str());
#endif
  

  const char* pStr = filename.c_str();
  printf("File name entered was ==> %s\n", pStr);

#if 1
  for(int i = 0; i < 4; i++)
  {
    inputFile >> name >> pop;

    cout << "The record is ==>";
    cout << name << " " << pop << endl; 
  }
#exit

  return 0;
}

