#include<iostream>
using namespace std;
int main(){
    int arr[] = {11,12,13,14,15,16,17};
    int n = 7;
    cout<<"The original array is:";
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"The reversed array is:";
    for(int i = n-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    cout<<"Thank you!";
    return 0;
}