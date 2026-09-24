#include <iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age:";
    cin>>age;
    if(age>=18){
        cout<<"you are eligible to vote!";

    }else{
        cout<<"YOU are not eligible to vote!";
    }
    return 0;
}