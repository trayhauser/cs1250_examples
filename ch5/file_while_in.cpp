#include<iostream> // cin cout
#include<iomanip> // stream formatting
#include<fstream> // all of your file handling needs
using namespace std;

int main()
{
  string name;
  int pop; 
  string filename;

  cout << "Give me the name! " ;
  cin >> filename; // ask the user for the file name
  //ifstream inputFile(filename); // <-- produces error
  ifstream inputFile(filename.c_str()); // <-- do file name this way
  
  const char* pStr = filename.c_str();
  printf("File name entered was ==> %s\n", pStr);

  if(inputFile.is_open())
  {
    while(inputFile >> name >> pop)
    {
      cout << "The record is ==>";
      cout << name << " " << pop << endl; 
    }
    inputFile.close();
    return 0;
  }
  else
  {
    cout << filename << " does not exist!!!\n";
    return -1;
  }
}

