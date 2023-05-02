#include <iostream>
using namespace std;

void readmark();  //function prototype

int test1, test2, maxmark, temp, result;

int main(){
  maxmark = 30;
  readmark();
  test1 = temp;

  maxmark = 70;
  readmark();
  test2 = temp;

  result = test1+test2;
  cout << "Final result is " << result;

}

void readmark(){
  cout << "Enter the mark for the test ";
  cin >> temp;
  while ((temp < 0) || (temp > maxmark)) {
    cout << "Error: mark must be from 0 to " << maxmark << endl;
    cout << "Enter the mark again ";
    cin >> temp;
  }
}
