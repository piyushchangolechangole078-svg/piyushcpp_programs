#include <iostream>
using namespace std; 
int main(){
    float CT;
    cout<<"Enter the Temperature in Celcius:";
    cin>>CT;
    float FT = (CT*(9.0/5.0))+32;
    cout<<"The temperature in Farenhite is:"<<FT<<endl<<"Thank you!";

   return 0;
}