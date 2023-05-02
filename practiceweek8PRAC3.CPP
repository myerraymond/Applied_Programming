#include <iostream>
#include <string>

using namespace std;

bool lowercase(char c);
bool uppercase(char d);

char x;


int main(){
  cout << "Enter a character: ";
  cin >> x;
  while(x != 'Q'){
    if ((x < 122) || (x > 122)){
      if(lowercase(x) == true){
        cout << x << " is a lowercase letter.";
      } else if (uppercase(x) == true){
        cout << x << " is a uppercase letter. ";
      } else {
        cout << x << " is not a letter.";
      }
      cout << "\n Enter another character or Q to stop: ";
      cin >> x;
    }
  }
}
  bool uppercase(char d) {
  if((d >= 'A') && (d <= 'Z')){
    return true;
  }
  return false;
}


  bool lowercase(char c) {
  if((c >= 'a') && (c <= 'z')){
    return true;
  }
  return false;
}
