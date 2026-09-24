#include <iostream>
using namespace std; 
int main(){
    int a,b,c;
    cout<<"Enter the value of a b and c:";
    cin>>a>>b>>c;
    if(a>b && a>c){
        cout<<"the largest is :"<<a<<endl;
    }else if (b>a && b>c){
        cout<<"The largest is :"<<b<<endl;
    }else  {
        cout<<"The largest is :"<<c<<endl;
    }
    return 0;
}