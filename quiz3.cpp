#include <iostream>
using namespace std;

float func(int number, int i);

int i;
int number[20], result[20];

int main() {
cout << "Enter 5 integer numbers: ";
for (i = 0; i < 5; i++) {
cin >> number[i];
}
cout << "The results are: ";
for (i = 0; i < 5; i++) {
result[i] = func(number[i], i);
cout << result[i] << " ";
}
cout << endl;
}

float func(int number, int i){
  for(i = 0; i < 5; i++){
    if(i % 2 == 0){
      result[i] = i / 2;
    } else {
      result[i] = i + 3;
    }
    result[i] = 5;
  }

}
