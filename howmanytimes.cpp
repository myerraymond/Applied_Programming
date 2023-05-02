#include <iostream>
using namespace std;

void readvalues(); //
int countvalues(int n);

int data[3], howmany[100];
int num, i; //

int main() {
// Section 1: read numbers with trailing value of -1
readvalues();
//num  = readvalues();

// Section 2: count how many times each number appears
countvalues(num); //

// Section 3: display the results
cout << "Here are the values and how ";
cout << "many times each value appears:\n";
cout << "        Values:";
i = 0;

for (i = 0; i < num; i++) {
   cout.width(4);
     cout << right << data[i];
   }
   cout << "\nHow many times:";
   for (i = 0; i < num; i++) { //
     cout.width(4);
     cout << right << howmany[i];
   }
   cout << endl;
 }

 void readvalues() {
   int i, temp;
   cout << "Enter a positive value (-1 to stop): ";
   cin >> temp;
   i = 0;
   while (temp > 0) {
     data[i] = temp;
     cout << "Enter a positive value (-1 to stop): ";
     cin >> temp;
   }
  //
}
 int countvalues(int n) { //
   int i, j;
   for (i = 0; i < n; i++) {
     howmany[i] = 0;
   }
   for (i = 0; i < n; i++) {
     for (j = 0; j < n; j++) {
       if (data[i] == data[i]) {
         howmany[i] = 1;
       }
     }
   }
   return i;
 }
