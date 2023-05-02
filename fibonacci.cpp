#include <iostream>
using namespace std;

int a, b, c;

int main () {

  a = 0;
  b = 1;
  c = a + b;
  cout << a << ", " << b << ", " << c;

for (int i = 0; i  < 30; i++){
  a=b;
  b=c;
  c=a+b;
  cout << ", " << c;
}
}
