#include <iostream>
#include<vector>
using namespace std;
int main(){
    int n,e;
    cout<<"Enter the number of vertices:";
    cin>>n;
    cout<<"enter the number of edges:";
    cin>>e;
    vector<int>graph[10];
    cout<<"enter the edges:";
    for(int i=0;i<n;i++){
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    for(int i=0;i<n;i++){
         cout<<i<<"->";
        for(int j=0;j<n;j++){
           cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}