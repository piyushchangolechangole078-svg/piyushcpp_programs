#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,e;
    vector<int>graph[10];
    cout<<"Enter the number of vertices:";
    cin>>n;
    cout<<"Enter the number of edges:";
    cin>>e;
    graph[10][10]={0};
    for(int i=0;i<e;i++){
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    cout<<"\n-------Adjency List-------\n";
    for(int i=0;i<n;i++){
        cout<<i<<"->";
        for(int j:graph[i]){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<"Thank you "
    return 0;
}