#include<iostream> // cin cout
#include<iomanip> // stream formatting
#include<fstream> // all of your file handling needs
using namespace std;

int main()
{
  string name;
  int pop = 100; 
  string filename;
  string colTitle1;
  string colTitle2;
  int nRec = 4;
  colTitle1 = "col1";
  colTitle2 = "col2";

  cout << "Give me the name!" ;
  cin >> filename; // ask the user for the file name
  //ifstream outFile(filename); // <-- produces error.
  ofstream outFile(filename.c_str()); // <-- do file name this way
  
  const char* pStr = filename.c_str();
  printf("File name entered was ==> %s\n", pStr);

  if(outFile.is_open())
  {
    outFile << nRec;
    outFile << colTitle1;
    outFile << colTitle2;
    outFile << endl;

    cout << colTitle1 << "   " << colTitle2 << endl;
    for(int i = 0; i < nRec; i++)
    {
      outFile << "grp" << i << "   "<< pop << endl;
      pop += 100;

      cout << "The record is ==>";
      cout << name << " " << pop << endl; 
    }
    outFile.flush();
    outFile.close();
    return 0;
  }
  else
  {
    cout << filename << " does not exist!!!\n";
    return -1;
  }

}

