#include <iostream>
using namespace std;
int main(){
    int n,a[100];
    bool found;
    cout<<"Enter the number of element in an array:";
    cin>>n;
    cout<<"Enter array element:";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }s
    int key;
    cout<<"Enter the key to found!";
    cin>>key;
    for(int i=0;i<n;i++){
        if(a[i] == key){
            cout<<"Element found at index position "<< i <<endl;
            return found =1;
        }
    }
    cout<<"Element not found!";
    return found = 0;
    return 0;
}