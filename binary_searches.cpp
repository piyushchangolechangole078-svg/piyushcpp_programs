#include<iostream>
using namespace std; 
int binarysearch(int arr[],int n,int target){
    int st = 0;
    int end = 6;
    while(st<=end){
        int mid = st+(end-st)/2;
        if(arr[mid] == target){
            return mid;
        }
        else if(arr [mid]<target){
            st = mid+1;
        }
        else{
             end = mid-1;
        }
       
    }
    return -1;
}
int main(){
    int arr[] = {1,3,5,7,9,11,13};
    int n = 6;
    int target;
    cout<<"Enter the target:";
    cin>>target;
    int result = binarysearch(arr,n,target);
    if(result != -1){
        cout<<"Element found at index:"<<result<<endl;
    }
    else{
        cout<<"Element not found!";
    }
    cout<<endl<<"Thank you piyush!";

    return 0;
}