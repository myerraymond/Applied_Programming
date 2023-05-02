#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void breakstring(string s);

int count;
fstream hosp;
string filename, searchname, line, hospital, mask, gowns;

int main() {
  // 1. The user will enter the full name of the file
  cout << "Enter the FULL name of the file: ";
  cin >> filename;
  getchar();

  hosp.open(filename.c_str(), fstream::in);

  if (hosp.is_open() == false) {
    cout << "ERROR: not able to open " << filename << endl;
  } else {
    cout << "Enter the number of mask: ";
    getline (cin, searchname);
    cout << "Here is the list of books written by ";
    cout << searchname << endl;

    // 4. Access the file - read all the lines from the file
    count = 0;
    while (getline(hosp, line)) {
      cout << line << endl;  // DEBUG cout to display all lines
      breakstring(line);
      // convert yearstring to a number
      if (mask == searchname) {
        cout << gowns << " " << hospital << endl;
        count++;
      }
    }
    cout << searchname << " wrote " << count << " books.\n";

    hosp.close();
  }
}

void breakstring(string s) {
  int total, i;
  i = 0;
  hospital = "";
  while (s[i] != ';') {
    hospital = hospital + s[i];
    i++;
  }
  i++;
  mask = "";
  while (s[i] != ';') {
    mask = mask + s[i];
    i++;
  }
  i++;
  gowns = "";
  total = s.length();
  while (i < total) {
    gowns = gowns + s[i];
    i++;
  }
}
