#include <iostream>
using namespace std; 
int square(int n){
    return n*n;
}
int main(){
    int n;
    cout<<"Enter the number to find square:";
    cin>>n;
    cout<<"The square is :"<<square(n);
    cout<<endl<<"Thank you!";
    return 0;
}