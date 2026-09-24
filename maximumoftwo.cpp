#include <iostream>
using namespace std; 
int maximum(int a,int b){
    if(a>b){
    return a;
}else{
    return b;
}
}
int main(){
    int a,b;
    cout<<"Enter the value of a and b:";
    cin>>a>>b;
    cout<<"The maximum of two numbers "<< a <<"and"<< b<<"is:"<<maximum(a,b)<<endl;
    cout<<"Thank you!";
    return 0;
}