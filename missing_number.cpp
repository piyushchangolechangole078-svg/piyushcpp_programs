#include <iostream>
using namespace std;
int main(){
    int arr[100];
    int n;
    cout<<"Enter the number of elements in an array:";
    cin>>n;
    cout<<"Enter array element:";
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }
    int total = n*(n+1)/2;
    int sum = 0;

    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int missing = total - sum;
    if(missing != 0){
        cout<<"The missing number is:"<<missing<<endl;
    }else{
        cout<<"No missing number found!";
    }
    cout<<endl<<"Thank you piyush!";

    return 0;
}