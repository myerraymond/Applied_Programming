#include <iostream>

using namespace std;

int load();
int round();

int l[7], r[7];

int main(){
  cout << "Insert an integer: ";
  cin >> l[0];
  load();
  round();
  cout << l[0] << " is rounded to " << r[0] << endl;

}

int load(){
  if((l[0] < 0) ||(l[0] > 500)){
    cout << "The integer isn't between 0 and 500, please insert it again: ";
    cin >> l[0];
  }
}

int round(){
  r[0] = (((l[0]+5)/10)*10);
  cout << l[0] << " rounded is " << r[0] << endl;
}
