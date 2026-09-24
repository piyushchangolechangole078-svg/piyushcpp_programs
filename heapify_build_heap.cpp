#include <iostream>
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
void buildheapify(int heap[],int n){
    for(int i = n/2-1;i>=0;i--){
        heapify(heap,n,i);
    }

}
int main(){
int heap[] = {20,10,50,30,40};
int n = 5;
buildheapify(heap,n);
cout<<"The max heap is:";
for(int i=0;i<n;i++){
    cout<<heap[i]<<" ";
}
cout<<endl<<"Thank you piyush!";
    return 0;
}