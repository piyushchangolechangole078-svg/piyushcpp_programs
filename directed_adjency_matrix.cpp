#include<iostream>
using namespace std;
int main(){
    int graph[3][3] = {0};
    int n = 3;
    int edges;
    cout<<"Enter the number of edges:";
    cin>>edges;
    for(int i =0;i<edges;i++){
    int u,v;
    cout<<"Enter the edges:";
    cin>>u>>v;
    graph [u][v] = 1;
    }
    cout<<"\n----Adgency Matrix---\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;

    }
    cout<<"Thank you piyush!";
    return 0;
}