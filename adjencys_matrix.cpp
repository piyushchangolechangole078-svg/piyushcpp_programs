#include <iostream>
using namespace std;
int main(){
    int graphs[4][4] ={0};

     graphs[0][1] = 1;
     graphs[1][0] = 1;

     graphs[0][2] = 1;
     graphs[2][0] = 1;

     graphs[1][3] = 1;
     graphs[3][1] = 1;

     graphs[2][3] = 1;
     graphs[3][2]= 1;

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<graphs[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Thank you piyush!";
    return 0;
}