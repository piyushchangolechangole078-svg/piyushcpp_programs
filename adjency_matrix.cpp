#include<iostream>
using namespace std;
int main(){
    int graph[3][3] = {0};
    int edges;
    int n =3;
    cout<<"Enter the number of edges:";
    cin>>edges;

    for(int i =0;i<edges;i++){
        int u,v;
        cout<<"Enter the edges:";
        cin>>u>>v;

        graph[u][v] = 1;
        graph[v][u] = 1;
    }
    cout<<"\n--------Adjency Matrix ----------\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
         cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}