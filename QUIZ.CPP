#include <iostream>
#include <iomanip>
using namespace std;

int i, t, c, d, reg;
float well[100], auck[100];
float temp, temp2, avg, avg1;

int main() {
  cout << "Insert region code(4 for well, 9 for auck, -1 to stop), press enter, then insert the fuel price. \n";
  while(reg != -1){
    cout << "Region Code: ";
    cin >> reg;
    if((reg != 4) && (reg != 9)){
      cout << "The region is incorrect\n";
      cout << "Please try again: ";
      cin >> reg;
    }
    if (reg == 4){
      cout << "Price for Wellington: ";
      cin >> well[c];
      temp = temp + well[c];
      t++;
    }
    if (reg == 9){
      cout << "Price for Auckland: ";
      cin >> auck[d];
      temp2 = temp2 + auck[d];
      i++;
    }


  }
  avg = temp2/i;
  avg1 = temp/t;
  cout << setprecision(3);
  cout << "Auckland average petrol price is $" << avg << endl;
  cout << "Wellington average petrol price is $" << avg1 << endl;
  cout << i;
}
