#include <iostream>
using namespace std;
int main(){
int a,b;
cout<<"Enter a and b:";
cin>>a>>b;
if(a == b){
    cout<<"Both are equal numbers:";
}else if(a>b){
    cout<<"Greatest is "<< a <<endl;
}else{
    cout<<"Greatest is "<< b <<endl;
}
    return 0;
}