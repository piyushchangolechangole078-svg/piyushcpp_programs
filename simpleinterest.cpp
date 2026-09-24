#include <iostream>
using namespace std; 
int main(){
    int p,r,t;
    cout<<"Enter the principle amount rate and time:";
    cin>>p>>r>>t;
    int si = (p*r*t)/100;
    cout<<"The simple interest is :"<<si<<endl<<"Thank you!";

   return 0;
}