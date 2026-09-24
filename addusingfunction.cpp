#include<iostream>
using namespace std;
int sum(int a,int b){
    return a+b;
}
int main(){
    int a,b;
    cout<<"Enter the value of a and b:";
    cin>>a>>b;
    cout<<sum(a,b)<<endl;
    cout<<"Thank you!";
    return 0;
}