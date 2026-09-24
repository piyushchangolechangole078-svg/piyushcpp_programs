#include<iostream>
#include<string>
using namespace std;
  class BankAccount{
    private:
    double accountnum;
    string name;
    double balance;

    public:
    BankAccount(){
        accountnum = 0;
        name = "";
        balance = 0;
    }
    void createAccount(){
        cout<<"Enter Account Number:";
        cin>>accountnum;
        cin.ignore();

        cout<<"Enter account Holder name:";
        getline(cin,name);
        cout<<"Enter Initial balance:";
        cin>>balance;
        if(balance<0){
            balance = 0;
            cout<<"Invalid balance.Balance set to 0";
        }
        cout<<endl<<"Account created Successfully!"<<endl;
    }
      void deposit(){
        double amount;
        cout<<"Enter Deposit Amount:";
        cin>>amount;

       if(amount >0){
        balance += amount;
          cout<<"Amount Deposited Successfully!"<<endl;
       }else{
     cout<<"Invalid Amount!"<<endl;
       }
      }
      void withdraw(){
        double amount;
        cout<<"Enter Withdraw Amount:";
        cin>>amount;
        if(amount<=0){
            cout<<"Invalid Amount!";
        }else if(amount > balance){
            cout<<"Insufficient Balance!";
        }else{
        balance-=amount;
        cout<<"Amount Withdraw Successfully!";
        }
      }
      void checkbalance(){
        cout<<"Current Balance: Rs "<<balance<<endl;
      }

      void Displaydetails(){
        cout<<"\n=============================\n";
        cout<<"====== ACCOUNT DETAILS =========\n";
        cout<<"\n=============================\n";
        cout<<"Account Number:"<<accountnum<<endl;
        cout<<"Account Holder name:"<<name<<endl;
        cout<<"Account balance: Rs "<<balance<<endl;
        cout<<"================================="<<endl;

      }
      bool searchAccount(double accN){
        return accountnum == accN;
      }
};
int main(){
    BankAccount accounts[100];
    int accountcount = 0;
    int choice;

    do{
      cout<<"\n==============================================\n";
      cout<<"\n==========BANK MANAGEMENT SYSTEM=============\n";
      cout<<"\n==============================================\n";
      cout<<"1.Create Account"<<endl;
      cout<<"2.Deposit Money"<<endl;
      cout<<"3.Withdraw Money"<<endl;
      cout<<"4.check balance"<<endl;
      cout<<"5.Display Details"<<endl;
      cout<<"6.Search Account"<<endl;
      cout<<"7.Exit"<<endl;
      cout<<"==============================================\n";
    
    cout<<"Enter your choice:";
    cin>>choice;

    switch(choice){
      case 1:{
        if(accountcount < 100){
          accounts[accountcount].createAccount();
          accountcount++;
        }else{
        cout<<"Bank Account Storage is FULL!";
        }
        break;
      }
      case 2:{
        int accN;
        bool found = false;

        cout<<"Enter the account number:";
        cin>>accN;
        for(int i=0;i<accountcount;i++){
          if(accounts[i].searchAccount(accN)){
          accounts[i].deposit();
          found = true;
          break;
        }
      }
        if(!found){
          cout<<"Account Not found!";
        }
        break;
      }
      case 3:{
      int accN;
      bool found = false;
      cout<<"Enter the account number:";
      cin>>accN;

      for(int i=0;i<accountcount;i++){
          if(accounts[i].searchAccount(accN)){
          accounts[i].withdraw();
          found = true;
          break;
        }
      }
        if(!found){
          cout<<"Account not found!";
        }
        break;
      }
    
      case 4:{
      int accN;
      bool found = false;
      cout<<"Enter the Account number:";
      cin>>accN;
      for(int i=0;i<accountcount;i++){
        if(accounts[i].searchAccount(accN)){
        accounts[i].checkbalance();
        found = true;
        break;
      }
    }
      if(!found){
        cout<<"Account not found!";
      }
      break;
      }
      case 5:{
        int accN;
        bool found = false;
        cout<<"Enter the account number:";
        cin>>accN;
        for(int i=0;i<accountcount;i++){
          if(accounts[i].searchAccount(accN)){
          accounts[i].Displaydetails();
          found = true;
          break;
        }
      }
        if(!found){
          cout<<"Account not found!";
        }
        break;
    }
    case 6:{
      int accN;
      bool found = false;
      cout<<"Enter the account number:";
      cin>>accN;
      for(int i=0;i<accountcount;i++){
        if(accounts[i].searchAccount(accN)){
          cout<<"\nAccount found\n";
          accounts[i].Displaydetails();
          found = true;
          break;
        }
      }
      if(!found){
        cout<<"Account not found!";
      }
      break;
    }
    case 7:{
      cout<<"Thank you for using BANK MANAGEMENT SYSTEM visit again!";
      break;
    }
    default:{
      cout<<"Invalid choice.please try again!";
    }
      
  }
}while(choice!=7);
    return 0;
}
