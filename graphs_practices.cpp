#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>graph[3];

    graph[0].push_back(1);
    graph[0].push_back(0);
    graph[0].push_back(2);
    graph[0].push_back(3);
    graph[1].push_back(1);
    graph[1].push_back(2);
    graph[2].push_back(0);
    graph[2].push_back(1);

    for(int i=0;i<3;i++){
        cout<<i<<"->";
        for(int j:graph[i]){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    return 0;
}