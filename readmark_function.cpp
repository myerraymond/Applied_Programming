#include <iostream>
using namespace std;

void readmark();

int test1, test2, maxmark, temp, result;

int main (){

  //Section 1: get the mark for test 1.
  maxmark = 30;
  readmark();
  test1 = temp;
  //Section 2: get the mark for test 2.
  maxmark = 70;
  readmark();
  test2 = temp;
  //Section 3: calculate the final result.
  result = test1+test2;
  cout << "Final result is " << result << endl;
}

void readmark() {
  cout << "Enter the mark for the test ";
  cin >> temp;
  while ((temp < 0) || (temp > maxmark)) {
    cout << "Error: mark must be from 0 to " << maxmark << endl;
    cout << "Enter the mark again ";
    cin >> temp;
  }
}
