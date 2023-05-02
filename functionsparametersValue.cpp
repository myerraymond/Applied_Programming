#include <iostream>
using namespace std;

float addthree(float a, int b, int c);  //function prototype

int x;
float y;

int main(){
  x = 3;
  y = addthree(2.0, x, x*6%7);
  cout << "The result is " << y;

}

float addthree(float a, int b, int c){
  float result;
  result = a + b + c;
  return result;
}
