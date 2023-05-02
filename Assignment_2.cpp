//Myer Raymond #18035406

#include <iostream>
#include <cmath>

using namespace std;

int temp, judge;
float mark, final, counter, highest, lowest;

int main () {
  cout << "Enter number of judges: ";
  cin >> judge;
  temp = 0;
  lowest = 99;

  while ((judge >=9) || (judge <= 3)){
    cout << "Invalid. ";
    cout << "Enter number of judges again (4 to 8): ";
    cin >> judge;
}
//^^ making sure the judge number is correct

  for (temp = 0; temp < judge; temp++){
      cout << "Enter mark: ";
      cin >> mark;
      if (temp == 0){
        lowest = mark;
      }
      counter = counter + mark;

      if (highest <= mark){
        highest = mark;
      } else {
         if (lowest >= mark) {
        lowest = mark;
      }
    }
//^^ finding highest and lowest value! works.
      while ((mark <= 0.0) || (mark >= 10.1)){
        cout << "Invalid. \n";
        cout << "Enter mark again (0.0-10.0): ";
        cin >> mark;
      }
}
// ^^ making sure the mark number is correct


final = counter - lowest - highest;
final = final/(judge - 2);

cout << "The Final Mark is: " << final << endl;

}
