#include <iostream>
using namespace std;

int year,  leapyear;

int main() {
  cout << "Enter a year ";
  cin >> year;
  if (year % 4 == 0)  {
    if (year % 100 == 0) {
      if (year % 400 == 0) {
        leapyear = 1;
      } else {
        leapyear = 0;
      }
    } else {
      leapyear = 1;
    }
  } else {
    leapyear = 1;
  }
  if (leapyear == 1) {
    cout << year << " is a leap year.";
  } else {
    cout << year << " is not a leap year.";
  }
}
