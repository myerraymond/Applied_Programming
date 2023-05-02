#include <iostream>
#include <cstdlib>
using namespace std;

int number, total;

int main () {
  total = 0;
  number = 999;  //force the test to be true
  while (number >= 0) {
    cout << "Enter a number (-1 to stop): ";
    cin >> number;
    total = total + number;

  }
  cout << "The total is " << total << endl;
}
