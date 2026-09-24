#include <iostream>
using namespace std;

int main(){
    int arr[] = {5,3,4,1,2};
    int n = 5;

    for(int i=0;i<n-1;i++){//rounds
        for(int j = 0;j<n-i-1;j++){//comparison
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]); 
            }
        }
    }
    cout<<"The sorted array is :";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}