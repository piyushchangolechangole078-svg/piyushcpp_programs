#include<iostream>
using namespace std;
void heapify(int heap[],int n,int i){
    int largest = i;
    int left = 2*i+1;
    int right = 2*i+2;
 
    if(left<n && heap[left]>heap[largest]){
        largest = left;
    }
    if(right<n && heap[right]>heap[largest]){
        largest = right;
    }

    if(largest!=i){
        swap(heap[i],heap[largest]);
        heapify(heap,n,largest);
    }
}
int main(){
    int heap[] = {50,10,40,30,20,35};
    int n = 6;
    heapify(heap,n,1);
    for(int i=0;i<n;i++){
        cout<<heap[i]<<" ";

    }
    return 0;
}