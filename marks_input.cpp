#include <iostream>
using namespace std;
int main(){
    int arr[100];
    int n;
    cout<<"Enter the number of student:";
    cin>>n;
    cout<<"Enter marks of "<<n<<" students:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    int sum = arr[0];
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    cout<<endl<<"Total marks is :"<<sum<<endl;
    int avg = sum/n;
    cout<<"Average marks is:"<<avg<<endl;
    int max = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    cout<<"The Highest marks is  :"<<max<<endl;
    int min = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    cout<<"The lowest element is :"<<min<<endl;
    int count = 0;
    for(int i=0;i<n;i++){
        if(arr[i]>=75){
          count++;
        }
    }
    cout<<"The number of students scoring above 70 marks is:"<<count<<endl;
    cout<<"Thank you piyush!";
    
    return 0;
}