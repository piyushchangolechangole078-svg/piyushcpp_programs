#include<iostream>
using namespace std;

int main(){
    int heap[] = {50,30,40,10,20,35,7,8,12,11,30,32};
    int n = 12;
    for(int i=0;i<n;i++){
        cout<<"Node:"<<heap[i]<<endl;

        int left = 2*i+1;
        int right = 2*i+2;

        if(left<n){
            cout<<"left child:"<<heap[left]<<endl;
        }
        if(right<n){
            cout<<"Right child:"<<heap[right]<<endl;
            cout<<endl;
        }
    }
    return 0;
}