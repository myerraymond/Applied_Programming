#include <iostream>
#include <string>

using namespace std;

int countbrackets(string str, char ch);

int count1, count2;
string arithmetic;

int main() {
  cout << "Enter a line of arithmetic: ";
  getline(cin, arithmetic);
  count1 = countbrackets(arithmetic , '(');
  count2 = countbrackets(arithmetic , ')');
  if (count1 == count2) {
    cout << "The line of arithmetic is balanced.\n";
  } else {
    cout << "The line of arithmetic is not balanced.\n";
  }
}

int countbrackets(string str, char ch) {
  int count, len, i;
  count = 0;
  len = str.length();
  for (i = 0; i < len; i++) {
    if (str[i] == ch) {
      count++;
    }
  }
  return count;
}
