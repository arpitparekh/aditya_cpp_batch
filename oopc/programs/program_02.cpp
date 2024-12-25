#include<iostream>
using namespace std;

class Bank{
  public:
    string holderName;
    int accountNumber;
    string type;
    double balance;

    void assignValues(string hn,int an,string t,double b){
      holderName = hn;
      accountNumber = an;
      type = t;
      balance = b;
    }

    void depositMoney(double amount){
      balance += amount;
      cout << "Amount Deposited Successfully" << endl;
    }

    void withdrawMoney(double amount){
      if(balance < amount){
        cout << "Insufficient Balance" << endl;
      }else{
        balance -= amount;
        cout << "Amount Withdrawn Successfully" << endl;
      }
    }

    void displayDetails(){
      cout << "Holder Name: " << holderName << endl;
      cout << "Account Number: " << accountNumber << endl;
      cout << "Type: " << type << endl;
      cout << "Balance: " << balance << endl;
    }
};

int main()
{

  Bank b1;
  b1.assignValues("Sumit",123456,"Savings",10000);
  b1.depositMoney(5000);
  b1.withdrawMoney(2000);
  b1.displayDetails();

  string name;
  int accountNumber;
  string type;
  double balance;
  
  cout << "Enter Holder Name: ";
  getline(cin,name);

  cout << "Enter Account Number: ";
  cin >> accountNumber;

  cout << "Enter Type: ";
  cin.ignore();
  getline(cin,type);

  cout << "Enter Balance: ";
  cin >> balance;

  Bank b3;
  b3.assignValues(name,accountNumber,type,balance);

  int amount;
  cout << "Enter Amount to Deposit: ";
  cin >> amount;

  b3.depositMoney(amount);

  int withdrawAmount;
  cout << "Enter Amount to Withdraw: ";
  cin >> withdrawAmount;

  b3.withdrawMoney(withdrawAmount);

  b3.displayDetails();

  // Bank b2;
  // b2.assignValues("Ravi",123457,"Current",20000);
  // b2.depositMoney(10000);
  // b2.withdrawMoney(5000);
  // b2.displayDetails();

  return 0;
}
