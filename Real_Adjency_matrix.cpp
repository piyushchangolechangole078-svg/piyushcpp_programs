#include<iostream>
using namespace std;
int main(){
    int n,e;
    int graph[10][10] = {0};
    cout<<"enter the number of vertices:";
    cin>>n;
    cout<<"Enter the nuomber of edges:";
    cin>>e;
    cout<<"enter the edges:";
    for(int i=0;i<n;i++){
      int u,v;

      cin>>u>>v;
      graph[u][v] =1;
      graph[v][u] =1;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Thank you!";
    return 0;
}