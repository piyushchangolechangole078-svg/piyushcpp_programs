#include<iostream>
#include<vector>
using namespace std;
int main(){
    int vertices =5;
    int edges;
    vector<int>graph[5];
    cout<<"Enter the number of edges:";
    cin>>edges;
    for(int i=0;i<edges;i++){
        int u,v;
        cout<<"Enter the value of edges:";
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    for(int i=0;i<vertices;i++){
        cout<<i<<"->";
        for(int j:graph[i]){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    return 0;
}