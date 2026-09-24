#include <iostream>
using namespace std;
int main(){
   int start[] = {1,3,0,5,8,5};
   int finish[] = {2,4,6,7,9,9};
   
//  for(int i=1;i<n;i++){
//     if(start[i]>=lastfinish){
//         count++;
//         lastfinish = finish[i];
//     }
//  }
//  cout<<"The Maximum Activities are:"<<count<<endl;
//  cout<<"Thank you piyush!";
int n = 6;
int count = 1;
int lastfinish = finish[0];
for(int i=1;i<n;i++){
    if(start[i]>=lastfinish){
        count++;
        lastfinish = finish[i];
    }
}
cout<<"The Maximum activities count is:"<<count<<endl;
cout<<endl<<"Thank you piyush";
    return 0;
}