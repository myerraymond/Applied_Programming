#include <iostream>
using namespace std;

int square();

int x;


int main(){
  sqaure();
  x = x * x;
  cout << "The square of the number is " << x;

}
int square(){
  cout << "Finding the square of a number; \n";
  cout << "Please insert a number: ";
  cin >> x;
}
