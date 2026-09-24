#include<iostream>
using namespace std;
class BankAccount{
    private:
    int balance=0;

    public:
    BankAccount(int initialbalance){
        balance = initialbalance;
    }
    void deposit(int amount){
        if(amount>0){
            balance+=amount;
        }
    }
    int  getbalance(){
        return balance;
    }
};
int main(){
    BankAccount acc;
    acc.deposit(5000);
    cout<<"My balance is:"<<acc.getbalance()<<endl;
    return 0;
}