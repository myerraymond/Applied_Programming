#include <iostream>
#include <string>

using namespace std;

int stringtoint(string str, int total);
int value, total, i;
string temp;
bool isnumber;

int main() {
  cout << "Enter an integer value ";
  cin >> temp;
  isnumber = true;
  total = temp.length();
  for (i = 0; i < total; i++){
    if((temp[i] < '0' ) || (temp[i] > '9')){
      isnumber = false;
    }
  }
  if (isnumber == true){
    value = stringtoint(temp, total);
    cout << "The integer value is " << value << endl;
  } else {
    cout << temp << " is not an integer value!\n";
  }
}

int stringtoint(string str, int total){
  //function to convert a string to integer
  int num, i;
  num = 0;
  for(i = 0; i < total; i++){
    num = num *10 + str[i] -48;
  }
  return num;
}
