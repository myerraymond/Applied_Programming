#include <iostream>
using namespace std;

void readmark(int maxmark);

int test1, test2, temp, result;

int main () {
  readmark(30);
  test1 = temp;

  readmark(70);
  test2 = temp;

  result = test1 + test2;
  cout << "Final result is " << result << endl;
}

void readmark(int maxmark){
  cout << "Enter the mark for the test ";
  cin >> temp;
  while ((temp < 0) || (temp > maxmark)){
    cout << "Error: mark must be from 0 to " << maxmark << endl;
    cout << "Enter the mark again ";
    cin >> temp;
  }
}
