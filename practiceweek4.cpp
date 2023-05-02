#include <iostream>
using namespace std;

int i, j, reversedNum, temp, digit;

int main () {
  i = 1000;
  j = 2;
  for (i = 1000; i < 5000; i++){
    for (j = 2; j < 10; j++) {
      reversedNum = 0;
      temp = i;
      while (temp > 0) {
        digit = temp % 10;
        reversedNum = (reversedNum * 10) + digit;
        temp /= 10;
      }
      if (i * j == reversedNum) {
        cout << i << " * " << j << " = " << reversedNum << endl;
      }
    }

  }
}
