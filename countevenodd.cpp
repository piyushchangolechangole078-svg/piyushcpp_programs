#include <iostream>
using namespace std; 
int main(){
   int n,arr[100];
   int evencount =0;
   int oddcount = 0;
   cout<<"Enter the number of elements in an array :";
   cin>>n;
   cout<<"Enter array elements:";
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   for(int i=0;i<n;i++){
    if(arr[i]%2 ==0){
        evencount++;
    }else{
        oddcount++;
    }
   }
   cout<<"The evencount in an array is: "<<evencount<<endl;
   cout<<"the oddcount in an array is :"<<oddcount<<endl;
   return 0;
}