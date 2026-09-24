#include<iostream>
using namespace std;
int main(){
    int n =3;
    int graphs[3][3]{
        {0,1,1},
        {1,0,0},
        {1,0,0}
    };
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<graphs[i][j]<<" ";
        }
        cout<<endl;
    }
cout<<"THank you Piyush!";
    return 0;
}