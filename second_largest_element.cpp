#include<iostream>
using namespace std;
int main(){
    int n = 5;
    int arr[] = {30,39,4,54,43};
    int largest = arr[0];
    int secondlarge = arr[0];
for(int i = 1;i<n;i++){
    if(arr[i]>largest){
        largest = arr[i];
    }
    else if(arr[i]>secondlarge && arr[i]!=largest){
        secondlarge = arr[i];
    }
}
    cout<<"The largest element in an array is:"<<largest<<endl;
    cout<<"The second largest element in an arrya is:"<<secondlarge<<endl;
    cout<<"Thank you !";
    return 0;
}