# include<iostream>
# include <string>
using namespace std;

class Inventory{

  public:

  string productName;
  int quantity;
  float price;
  float total;
  string manufecturer;

  void assignValues(string name, int qty, float pr, string manu){
    productName = name;
    quantity = qty;
    price = pr;
    manufecturer = manu;
    total = qty * pr;
  }

  void displayValues(){
    cout << "Product Details" << endl;
    cout << "Product Name: " << productName << endl;
    cout << "Quantity: " << quantity << endl;
    cout << "Price: " << price << endl;
    cout << "Total: " << total << endl;
    cout << "Manufacturer: " << manufecturer << endl;
    cout << endl;
  }
};

int main(){

  cout << "Inventory System" << endl;
  cout << "Enter Inventory Size" << endl;
  int size;
  cin >> size;

  Inventory arr[size];  // array of objects  // 5 object

  for (int i = 0; i < size;i++){
    // cout << "Enter Product Name" << endl;
    // getline(cin, arr[i].productName);
    // cout << "Enter Quantity" << endl;
    // cin >> arr[i].quantity;
    // cout << "Enter Price" << endl;
    // cin >> arr[i].price;
    // cout << "Enter Manufacturer" << endl;
    // cin >> arr[i].manufecturer;
    string name;
    int qty;
    int price;
    string manu;

    cout << "Enter Product Name" << endl;
    cin.ignore();
    getline(cin,name);
    
    cout << "Enter Quantity" << endl;
    cin >> qty;
    cout << "Enter Price" << endl;
    cin >> price;
    cout << "Enter Manufacturer" << endl;
    cin >> manu;
    arr[i].assignValues(name,qty,price,manu);

  }

  for (int i = 0; i < size;i++){
    arr[i].displayValues();
  }

  return 0;
}
