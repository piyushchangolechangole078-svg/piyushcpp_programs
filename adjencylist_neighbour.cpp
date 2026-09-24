#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>graph[4];
    int neighbor;

    graph[0].push_back(1);
    graph[0].push_back(2);

    graph[1].push_back(0);
    graph[1].push_back(3);

    graph[2].push_back(0);
    graph[2].push_back(3);

    graph[3].push_back(1);
    graph[3].push_back(2);
    
    for(int i=0;i<3;i++){
       cout<<"Neighbor of "<<i <<"->";
    for(int neighbor:graph[i]){
        cout<<neighbor<<" ";
    }
    cout<<endl;
}
   

    return 0;
}