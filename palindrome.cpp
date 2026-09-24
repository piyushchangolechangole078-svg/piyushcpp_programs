#include<iostream>
using namespace std;
int main(){
    int n;
    long long reverse =0;
    
    cout<<"Enter the number:";
    cin>>n;
    int original = n;
    if(n<0){
        return false;
    }
    while(n>0){
        int rem = n%10;
        reverse = reverse*10+rem;
        n = n/10;
    }
    if(original == reverse){
        cout<<"Palindrome Number!";
    }else{
        cout<<"Not an palindrome Number!";
    }
    return 0;
}