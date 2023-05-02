
#include <iostream>
using namespace std;

int number;

int main() {
  number = 1;                   // initialise the loop variable
  while (number <= 10) {
    cout << number << endl;
    number = number + 1;        // can we use a shortcut here?
  }
}
