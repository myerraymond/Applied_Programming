#include <iostream>
using namespace std;

int value;

int main() {
  cout << "Enter an integer value ";  //prompt
  cin >> value;
  if (value < 10) {
    cout << "The value is less than 10 ";
  } else {
    cout << "The value is greater than or equal to 10 ";
  } //else=otherwise
}
