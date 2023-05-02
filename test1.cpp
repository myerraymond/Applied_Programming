#include <iostream>
#include <cstdlib>

using namespace std;

int id1, id, mark;

int main () {
  cout << "Enter the ID: ";
  cin >> id1;
  id = id1 % 100;
  if ((id <= 10) || (id >= 50)){
    id = id +2000;
  }
  if ((id <= 51) || (id >= 99)) {
    id = id + 1900;
  }


  if (id < 1980){
    cout << "You must consult the archvies\n";
    cout << id;
    exit(13);
  }

  cout << "Enter the mark: " << endl;
  cin >> mark;
  if (mark <= 50){
    cout << "Student " << id1 << " fails with " << mark << "%" << endl;
  }
  if (mark >= 51){
    cout << "Student " << id1 << " passes with " << mark << "%" << endl;
  }

}
