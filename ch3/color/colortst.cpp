#include <iostream>
#include "colormod.h" // namespace Color
using namespace std;
int main() {
    Color::Modifier red(Color::FG_RED);
    Color::Modifier def(Color::FG_DEFAULT);
    cout << "This ->" << red << "word" << def << "<- is red." << endl;
}
