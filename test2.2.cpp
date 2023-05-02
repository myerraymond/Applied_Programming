 #include <iostream>
 using namespace std;

 int amount, weeks, hours, totaldays;

 int main() {
   cout << "Enter an amount of hours: ";
   cin >> amount;
   totaldays = amount / 24;
   hours = amount % 24;
   weeks = totaldays / 7;
   if (weeks == 0) {
     cout << amount << " hours = " << weeks << " weeks, ";
     cout << totaldays << " days, ";
     cout << hours << " hours.\n";
   } else {
     cout << amount << " hours = " << weeks << " weeks, ";
     cout << totaldays << " days, " << hours << " hours.\n";
   }
 }
