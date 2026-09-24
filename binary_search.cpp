#include <iostream>
using namespace std;
int main(){
    int n;
    int arr[100],target;
    cout<<"Enter the number of elements in an array:";
    cin>>n;
    cout<<"enter array elements :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the target to find:";
    cin>>target;
    int st = 0;
    int end = n-1;
    while(st<=end){
        int mid = st+(end-st)/2;
        if(arr[mid] == target){
            cout<<"Target found at index postion :"<<mid<<endl;
            return 0;
        }else if(arr[mid]>target){
            end = mid-1;
        }else{
            st = mid+1;
        }
    }
    cout<<"Element or target not found in an array!";
    cout<<"Thank you piyush!";
    return 0;
}