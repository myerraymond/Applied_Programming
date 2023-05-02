// Myer Raymond #18035406
#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

string line, str, spread;
int length, i, temp, size, gap, final, totalsp, extra, j;
int gapper;
int justification();


int main(){
  cout << "Insert a line of text: ";
  getline(cin, line);
  getchar();
  length = line.length();
  if (length > 40){
    cout << "Error, excedes 40 characters.";
  }
gap = 0;
    for(i = 0; i < 40; i++){
      if(length < line[i]) {
          if(line[i] == ' ') {
            gap++;
      }
    }
  }
  totalsp = 40 - length;
  gap = gap % totalsp;
  //extra = totalsp - gap;
  temp = 0;
  j = 0;
  gapper = totalsp / gap + 1;

  for(i = 0; i < 40; i++){
    str = str + line[i];
      for(j = 0; j < gapper; j++){
          if((line[i] == ' ') && (temp < totalsp)){
              str = str + line[i] + "";
              temp++;
      }
    }
  }

  final  = justification();
  cout << str << endl<< endl;

}

int justification(){
  spread = "1234567890123456789012345678901234567890";
  size = spread.length();
  cout << spread << endl;
}
