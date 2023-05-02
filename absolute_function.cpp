#include <iostream>
using namespace std;

int absolute(int x);
int test1;

int main(){
  test1= absolute(1);
  cout << test1;
}

int absolute (int x) {
  int result;
  if (x > 0) {
    result = x;
  } else {
    result = -1 * x;
  }
  return result;
}
