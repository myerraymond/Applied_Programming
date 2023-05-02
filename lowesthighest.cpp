#include <iostream>

using namespace std;

int count, num, mark, highest, lowest;

int main () {

    for (count = 1; count >= 1; count++){

      cout << "Enter the mark for student " << count << ": ";

      cin >> mark;

      if (mark <=-1) {

      cout << "Hightest mark: "<< highest << endl;

      cout << "Lowest mark: " << lowest << endl;

    } else

    if (highest < mark) {
          highest = mark;
    } else {   // cant figure out how to not display -1 or 0
      lowest = mark;

    }

}

}
