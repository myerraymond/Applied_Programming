#include <iostream>

using namespace std;

int mark1, mark2, result;

int main() {
  cout << "Enter the mark for test 1 (0 to 50): ";
  cin >> mark1;
  while ((mark1 < 0) || (mark1 > 50)) {
    cout << "ERROR: mark must be from 0 to 50 \n";
    cout << "Enter the mark for test 1 (0 to 50): ";
    cin >> mark1;
  }
  cout << "Enter the mark for test 2 (0 to 50): ";
  cin >> mark2;
  while ((mark2 < 0) || (mark2 > 50)) {
    cout << "ERROR: mark must be from 0 to 50 \n";
    cout << "Enter the mark for test 2 (0 to 50): ";
    cin >> mark2;
  }
  result = mark1 + mark2;
  cout << "The final result is " << result << endl;
}
