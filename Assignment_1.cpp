// Myer Raymond, #18035406

#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

 int difference, day, month, year, newday, newday2, leapyear;

 int main() {
   cout << "Enter the difference in days (from -7 to 7): ";
   cin >> difference;
   if ((difference > 7) || (difference < -7)){
     cout << "The input isn't between -7 and 7." << endl;
   }
   // ^^ making sure the input is between -7 and 7
   if ((difference <= 7) && (difference >= -7))
    cout << "Enter a date in the form Day Month Year (00 00 0000): ";
  cin >> day >> month >> year ;
// ^^ if the input is correct enter the Day Month Year
  if (year % 4 == 0) {
    leapyear = 1;
  }
  if (year %  100 == 0) {
    leapyear = 0;
  }
  if (year % 400 == 0) {
    leapyear = 1;
}
//^^ calculating the leapyear
if (difference >= 1){
  newday = day + difference;
    if ((month == 1) || (month == 3) || (month == 5) || (month == 7) || (month == 8) || (month == 10) || (month == 12)) {
        newday2 = newday % 31;
        if ((day >= 32) || (day <= 0)) {
          cout << "The day is invalid. \n";
          exit(13);
        }
        if (newday == 31){
          newday2 = 31;
        }

    }
    if (month == 2){
      newday2 = newday % 28;
      if (((day >= 29) && (leapyear == 0)) || (day <= 0)){
        cout << "The day is invalid.\n";
        exit(13);
      }
    }
     if (leapyear == 1){
        newday2 = newday % 29;
        if ((day >= 30) || (day <= 0)){
          cout << "The day is invalid. \n";
          exit(15);
        }
      }

    if ((month == 4) || (month == 6) || (month == 9) || (month == 11)){
      newday2 = newday % 30;
      if ((day >= 31) || (day <= 0)) {
        cout << "The day is invalid. \n";
        exit(14);
      }
    }

    if (newday > 31){
      month = month+1;
    }
    if (month == 13){
      month = 1;
      if (month == 1){
        year = year + 1;
    }
    }
} else {
// ^^ calculating the day/month/year(positive input) & false input.
if (difference <= 0){
  newday = day + difference;
  if (newday < 0){
      month = month - 1;
  }
  if ((month == 0) || (month == 1) || (month == 3) || (month == 5) || (month == 7) || (month == 8) || (month == 10) || (month == 12)){
    newday2 = newday;
      if (newday2 < 0){
        newday2 = 31 + newday;
      }
    }
  }
  if ((month == 2)){
    newday2 = newday;
      if (newday2 < 0) {
        newday2 = 28 + newday;
      }
    if (leapyear == 1){
      newday2 = newday;
      if (newday2 < 0) {
        newday2 = 29 + newday;
      }
  }
}
  if ((month == 4) || (month == 6) || (month == 9) || (month == 11)){
    newday2 = newday;
    if (newday2 < 0){
      newday2 = 30 + newday;
    }
  }
  if (month < 1){
      month = 12;
        if (month == 12){
            year = year -1;
  }
  }
}
 // ^^ calculating the day/month/year(negative input)
if (month >= 13){
  cout << "The month is invalid. \n";
  exit(14);
}
  cout << "The final date is: ";
  cout.fill('0');
  cout.width(2);
  cout << right << newday2 << "/" ;
  cout.fill('0');
  cout.width(2);
  cout << month << "/" << year << endl ;
  }
