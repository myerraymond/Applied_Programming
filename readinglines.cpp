#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// example line: The Two Towers; J.R.R.;1954
void breakstring(string s);

int count;
fstream bookfile;
string filename, searchname, line, title, author, yearstring;

int main () {
  cout << "Enter the full name of the book file : ";
  cin >> filename;
  getchar();

  bookfile.open(filename.c_str(), fstream::in);
  if (bookfile.is_open() == false) {
    cout << "Error: not able to open" << filename;
  } else {
    cout << "Enter the name of the author: ";
    getline(cin, searchname);
    cout << "Here is the list of books " << searchname;
    cout << endl;

    count = 0;
    while (getline(bookfile, line)) {
      cout << line << endl; //debug cout
      breakstring(line);
      if (author == searchname){
        cout << yearstring << " " << title;
        count++;
      }
      bookfile.close();
    }
  }
}

void breakstring(string s) {
  int total, i;

  i = 0;
  title = "";
  while(s[i] != ';') {
    title = title + s[i];
    i++;
  }
  i++; //skip over the ;

  author = "";
  while(s[i] != ';') {
    author = author + s[i];
    i++;
  }
  i++;

  yearstring = "";
  total = s.length();
  while(i < total) {
    yearstring = yearstring + s[i];
    i++;
  }
}
