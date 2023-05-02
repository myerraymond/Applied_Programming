#include <iostream>
using namespace std;

int id[10];

int i, j, d, temp, num;

int main() {
  num = 6;

  for(i = 0; i < num; i++){
    cout << "Insert Number for array : ";
    cin >> id[i];
  }
  
  id[2] = 0;

  cout << "The array is: " << endl;
  for(i = 0; i < num; i++){
    cout << "Array " << i << " is " << id[i];
    cout << endl;

  }
}
