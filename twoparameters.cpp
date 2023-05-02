#include <iostream>
using namespace std;

void prompt(int mini, int maxi);

int a, b;

int main() {
  prompt(12, 33);
  cin >> a;
  prompt(85, 99);
  cin >> b;
  cout << "You entered " << a << " and " << b << endl;
}

void prompt(int mini, int maxi){
  cout << "Please type in a number \n";
  cout << "The number must be from " << mini;
  cout << " to " << maxi << endl;
  cout << "Press enter after typing the number \n";
}
