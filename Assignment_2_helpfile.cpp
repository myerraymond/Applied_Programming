
#include <iostream>
using namespace std;

int judge, temp;
float mark, final, highest, lowest;

int main () {
  cout << "Enter number of judges: ";
  cin >> judge;
  temp = 0;
  while ((judge >=9) || (judge <= 3)){
    cout << "Invalid. ";
    cout << "Enter number of judges again (4 to 8): ";
    cin >> judge;
}
for (temp = 0; temp < judge; temp++){
    cout << "Enter mark: ";
    cin >> mark;
  }
    if ((mark < 0.0) || (mark > 10.1)){
      cout << "Invalid. ";
      cout << "Enter mark again (0.0-10.0): ";
      cin >> mark;
    }
    
if (mark > highest){
  highest = mark;
}
if (mark < lowest){
  lowest = mark;
}

if (highest <= mark){
  highest = mark;
} else if (highest >= mark) {
    lowest = mark;
}



cout << highest << " and " << lowest << endl;
}
