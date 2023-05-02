// Myer Raymond #18035406

 #include <iostream>
using namespace std;

 int input, day, month, year, newday, newday2;

 int main() {
   cout << "Enter the difference in days (from -7 to 7): ";
   cin >> input;
   if ((input > 7) || (input < -7)){
     cout << "The input isn't between -7 and 7." << endl;
   }
   // ^^ making sure the input is between -7 and 7
   if ((input <= 7) && (input >= -7))
    cout << "Enter a date in the form Day Month Year (00 00 0000): ";
  cin >> day >> month >> year ;
// ^^ if the input is correct enter the Day Month Year
  newday = day + input;
    if (newday > 31){
      month = month+1;
    }
    if (month >=13){
      month = 1;
    }
    if (month >=13){
      year= year + 1;
    }

  newday2 = newday % 31;
// ^^ calculating the day/month/year(positive input)


  cout << "The final date is: " << newday2 << "/" << month << "/" << year << endl ;
  }
