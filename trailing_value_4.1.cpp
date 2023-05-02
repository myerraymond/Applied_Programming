#include <iostream>
using namespace std;

int number, total;

int main () {
  total = 0;
  cout << "Enter a number (-1 to stop) ";
  cin >> number;
  while (number >= 0) {
    total = total + number;
    cout << "Enter a number (-1 to stop) ";
    cin >> number;
  }
  cout << "The total is " << total << endl;
}
