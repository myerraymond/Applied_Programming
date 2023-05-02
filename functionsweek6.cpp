#include <iostream>
using namespace std;

void prompt();  //function prototype

int x;

int main(){
  prompt();   //function call
  cin >> x;
  cout << "You entered " << x;
}

void prompt(){        //function defintion
  cout << "Please type in a number\n";
  cout << "The number must be from 0 to 10\n";
  cout << "Press enter after typing the number\n";
}
