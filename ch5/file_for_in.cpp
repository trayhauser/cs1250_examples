#include<iostream> // cin cout
#include<iomanip> // stream formatting
#include<fstream> // all of your file handling needs
using namespace std;

int main()
{
  string name;
  int pop; 
  string filename;
  string colTitle1;
  string colTitle2;
  int nRec;

  cout << "Give me the name!" ;
  cin >> filename; // ask the user for the file name
  //ifstream inputFile(filename); // <-- produces error.
  ifstream inputFile(filename.c_str()); // <-- do file name this way
  
  const char* pStr = filename.c_str();
  printf("File name entered was ==> %s\n", pStr);

  if(inputFile.is_open())
  {
    inputFile >> nRec;
    inputFile >> colTitle1;
    inputFile >> colTitle2;

    cout << colTitle1 << "   " << colTitle2 << endl;
    for(int i = 0; i < nRec; i++)
    {
      inputFile >> name >> pop;

      cout << "The record is ==>";
      cout << name << " " << pop << endl; 
    }
    return 0;
  }
  else
  {
    cout << filename << " does not exist!!!\n";
    return -1;
  }

}

