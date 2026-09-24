#include <iostream>
using namespace std;
int main(){
    int arr[] {4,5,1,2,1,4,5};
    int n = 7;
    for(int i=0;i<n;i++){
        int count = 0;
        for(int j = 0;j<n;j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count == 1){
            cout<<"The NON repeating number in an array is: "<<arr[i]<<endl;
        }
    }
    return 0;
}