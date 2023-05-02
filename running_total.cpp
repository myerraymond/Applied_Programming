#include <iostream>
using namespace std;

int count, number, total;

int main() {
  total = 0; //initialise the total to zero
  count = 0; //initialise the total to zero
  cout << "Enter four numbers to be added: \n";
  while (count < 4) {
    cout << "Enter a number: ";
    cin >> number;
    total = total + number;
    count++;
  }
  cout << "The total is " << total << endl;

}
