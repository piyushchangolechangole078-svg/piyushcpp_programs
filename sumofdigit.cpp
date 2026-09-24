#include <iostream>
using namespace std;
int main(){
    int n,a[100];
    cout<<"enter the number of digit:";
    cin>>n;
    cout<<"Enter the digit to calculate the sum:";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int sum = 0; 
    for(int i=0;i<n;i++){
        sum += a[i];
    }
    cout<<"The sum is:"<<sum<<endl<<"Thank you!";
    return 0;
}