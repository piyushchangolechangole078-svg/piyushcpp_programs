#include <iostream>
using namespace std; 
int main(){
    int acc_balance = 5000;
    int amount;
    int choice;
    do{
        cout<<"\n=========ATM MENU===========\n";
        cout<<"1.check balance"<<endl;
        cout<<"2.Deposit Money"<<endl;
        cout<<"3.Withdraw Money"<<endl;
        cout<<"4.Exit"<<endl;
        cout<<"Enter your choice:";
        cin>>choice;

        switch (choice){
            case 1:
            cout<<"The current balance is:"<<acc_balance<<endl;
            cout<<"Balanced check successfully!";
            break;

            case 2:
            cout<<"Enter the amount to deposit:";
            cin>>amount;
            acc_balance = acc_balance+amount;
            cout<<"Amount Deposited successfully!"<<endl;
            cout<<"The Updated Balance is : Rs. "<<acc_balance<<endl;
            break;

            case 3:
            cout<<"Enter the amount to withdraw:";
            cin>>amount;
            if(amount<=acc_balance){
                acc_balance = acc_balance - amount;
            cout<<"Amount Withdraw Successfully!"<<endl;
            cout<<"Remaining balance is:Rs."<<acc_balance<<endl;
            }else{
                cout<<"Insufficient balance!\n";
            }
            break;

            case 4:
            cout<<"\n=========Thank you for using the ATM===========\n";
            break;

            default:
            cout<<" Invalid Choice!\n";
        
        }
}while(choice!=4);
   return 0;
}