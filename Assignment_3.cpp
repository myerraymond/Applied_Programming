/* Myer Raymond #18035406 */
 #include <iostream>
 #include <iomanip>
 using namespace std;

 //Function problem(c) works. Remove (//), and highlight, ctrl + / on text not in function.
/*i started with a function, then got stuck so tried it without a function, then figured it out
so the function works also, just need to remove (//). Just thought i'd keep the function in.*/

//int problem(int c);
float volt[6], change[6];
float temp, av, fi, fa, dif;
int c, g, l;
//(av = average, fi = 10% value, fa = 15% value, dif = difference)


 int main () {
   temp = 1;
   cout << "Enter 6 voltages: ";
   while(c < 6){
     cin >> volt[c];
     temp = temp + volt[c];
     c++;
   }
  av = temp/6;
  cout << setprecision(4);
  cout << "The average is " << av << endl << endl;
  cout << setprecision(3);
  cout << "10% = " << av * 0.1 << " volts." << endl;
  cout << "15% = " << av * 0.15 << " volts." << endl << endl;
  fa = av * 0.1;
  fi = av * 0.15;

temp = 1;

for(c = 0; c < 6; c++){
  if (av > volt[c]){
    dif = av - volt[c];
  }
  if (av < volt[c]){
    dif = volt[c] - av;
  }
  g = 1;
  if((dif < fi) && (dif > fa)){
    if (l < 1){
      cout << "The following problems occurred: " << endl;
    }
    cout << temp << "." << " Voltage at hour " << c +1 << " was ";
    cout << setprecision(4);
    cout << volt[c] << " (difference of ";
    cout << setprecision(3);
    cout << dif << " volts)" << endl;
    temp++;
    l++;
  }
}

for(g = 0; g < 5; c++){
  change[g] = volt[g] - volt[g+1];
  if (change[g] < 0){
    change[g] = change[g] *-1;
  }
  if(change[g] > fi){
    if (l < 1){
      cout << "The following problems occurred: " << endl;
    }
    cout << temp << "." << " Voltage change from hour " << g + 1 << " to hour " << g + 2 << " was " << change[g] << " volts." << endl;
    temp++;
    l++;
  }
  g++;
}
if (l == 0){
  cout << "No problems were encountered. \n\n";
}





//problem(c);

 }

int problem(int c){
  float dif, temp, change[5];
  int g;
  temp = 1;
  for(c = 0; c < 6; c++){
    if (av > volt[c]){
      dif = av - volt[c];
    }
    if (av < volt[c]){
      dif = volt[c] - av;
    }
    if((dif < fi) && (dif > fa)){
      if (l < 1){
        cout << "The following problems occurred: " << endl;
      }
      cout << temp << "." << " Voltage at hour " << c +1 << " was ";
      cout << setprecision(4);
      cout << volt[c] << " (difference of ";
      cout << setprecision(3);
      cout << dif << " volts)" << endl;
      temp++;
      l++;
    }
}
  for(g = 0; g < 5; c++){
    change[g] = volt[g] - volt[g+1];
    if (change[g] < 0){
      change[g] = change[g] *-1;
    }

    if(change[g] > fi){
      if (l < 1){
        cout << "The following problems occurred: " << endl;
      }
      cout << temp << "." << " Voltage change from hour " << g + 1 << " to hour " << g + 2 << " was " << change[g] << " volts." << endl;
      temp++;
      l++;
    }
    g++;

  }
  if (l == 0){
    cout << "No problems were encountered. \n\n";
  }
}
