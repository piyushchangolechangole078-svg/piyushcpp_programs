#include <iostream>
using namespace std; 
int main(){
    int a,b;
    char op;
    cout<<"Enter a and b:";
    cin>>a>>b;
    cout<<"Enter the operator :";
    cin>>op;
    if(op == '+'){
        cout<<a+b;
    }else if(op  == '-'){
        cout<<a-b;
    }else if(op == '*'){
        cout<<a*b;
    }else if (op == '/'){
        cout<<a/b;
    }else{
        cout<<"INvalid operator!";
    }
    return 0;

}