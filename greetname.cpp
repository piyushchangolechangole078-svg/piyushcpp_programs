#include <iostream>
#include <string>
using namespace std; 
void greet(string name){
    cout<<"Welcome,"<< name <<"!"<<endl;
}
int main(){
    string name;
    cout<<"Enter the name:";
    getline(cin,name);
    greet(name);
    cout<<endl<<"Thank you!";
    return 0;
}