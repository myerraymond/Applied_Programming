#include <iostream>
using namespace std;

char c;
int code;

int main() {
  cout << "Press a key followed by Enter ";
  cin >> c;
  code = c;
  cout << "\nThe character is " << c << endl;
  cout << "\nThe character " << c << " has ASCII code " << code << endl;
}
