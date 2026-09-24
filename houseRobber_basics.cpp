#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of houses to rob:";
    cin>>n;
    int money[100];
    cout<<"Enter the money for each house:";
    for(int i=0;i<n;i++){
      cin>>money[i];
    }
    int dp[100];
    dp[0] = 0;
    dp[1] = money[0];
    for(int i=2;i<=n;i++){
        dp[i] = max(dp[i-1],dp[i-2]+money[i-1]);
    }
    cout<<"the Maximum amount is :";
    cout<<dp[n]<<endl;
    cout<<"Thank you!";
    return 0;
}