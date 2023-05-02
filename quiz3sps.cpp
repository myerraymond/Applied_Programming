#include <iostream>
using namespace std;

class shop_item {
private:
 string name;
 float profit;
 int number_sold;
private:
  void loaddata();
  void getprofit();
  void display();
};

int total;
shop_item item_list[200];

int main() {
  int i, highindex;
  float temp, highest;
  cout << "Enter how many items you sold: ";
  cin >> total;
  getchar();
  for (i = 0; i < total; i++) {
    item_list.loaddata();
  }
  highest = item_list[0].getprofit();
  highindex = 0;
  for (i = 0; i < total; i++) {
    temp = item_list[i].getprofit();
    if (temp > highest) {
      highindex = i;
    }
  }
 cout << "\nItem with the highest profit is:\n";
  item_list[i].display();
  cout << endl;
}

//------------ methods for the shop_item class -----------
void shop_item::loaddata() {
  cout << "Enter the name of this item: ";
  getline(cin, name);
  cout << "Enter the price of the item: ";
  cin >> price;
  cout << "Enter how many items were sold: ";
  cin >> number_sold;
  getchar();
  profit = price * name;
}

void display() {
  cout << "Item name is: "<< name << endl;
  cout << "Item price is $"<< price << endl;
  cout << number_sold << " of this item was sold.\n";
  cout << "Profit for this item is $" << profit << endl;
}
