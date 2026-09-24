#include <iostream>
using namespace std; 
int minofthree(int a,int b,int c){
    if(a<b && a<c){
        return a;
    }else if(b<a && b<c){
        return b;
    }else{
        return c;
    }
}
int main(){
    int a,b,c;
    cout<<"Enter the value of a b and c:";
    cin>>a>>b>>c;
    int result = minofthree(a,b,c);
    cout<<"The minimum number is:"<<result<<endl;
    cout<<"Thank you!";

    return 0;
}