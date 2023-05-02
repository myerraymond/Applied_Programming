#include <iostream>
using namespace std;

int value;

int main(){
  cout << "Enter an integer value";
  cin >> value;
  if ((value >= 1) && (value <= 6)) {
    cout << "This is a valid dice throw \n";
  }
  if ((value == 27) || (value == 83)) {
    cout << "This value is either 27 or 83 \n";
  }
}
