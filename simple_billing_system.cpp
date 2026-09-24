#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of items:";
    cin>>n;

    string name[100];
    double price[100];
    double quantity[100];

    double total = 0;

    for(int i=0;i<n;i++){
      cout<<endl<<"Item "<<i+1<<endl;
      cout<<"Enter Item name:";
      cin>>name[i];
      cout<<"Enter Item price:";
      cin>>price[i];
      cout<<"Enter Item quantity:";
      cin>>quantity[i];

      total += (price[i]*quantity[i]);
      cout<<"Total:"<<total<<endl;

        }

        cout<<"\n---------FINAL BILL-----------\n";

        for(int i=0;i<n;i++){
        cout<<name[i]<<":"<<price[i]<<"X"<<quantity[i]<<"="<<
        price[i]*quantity[i]<<endl;
        }
    
    cout<<"\n--------------------------\n";
    cout<<"Grand total:"<<total<<endl;

    return 0;
}