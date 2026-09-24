#include<iostream>
using namespace std;
int main(){
    int start[] = {1,3,0,5,8,5};
    int finish[] = {2,4,6,7,9,9};
    int n = 6;
    int lastfinish = finish[0];
    int count = 1;
    for(int i=1;i<n;i++){
        if(start[i]>=lastfinish){
        count++;
        lastfinish = finish[i];
    }
    }
    cout<<"The maximum activities are:"<<count<<endl;
    
    return 0;
}