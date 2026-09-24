#include<iostream>
#include<unordered_map>
using namespace std; 
int main(){
    unordered_map<int,int>mp;
    mp[10] = 5;
    mp[20] = 8;
    mp[30] = 9;

    cout<<mp[10]<<endl;
    cout<<mp[20]<<endl;
    return 0;
}