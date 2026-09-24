#include <iostream>
using namespace std;
int main(){
    int current_year;
    int birth_year;

    cout<<"Enter The current year:";
    cin>>current_year;
    cout<<"Enter your birth year:";
    cin>>birth_year;
    int age = current_year - birth_year;
    if(birth_year > current_year){
        cout<<"Invalid birth year!";
    }
    cout<<"Your age is:"<<age<<endl;
    cout<<"Thank you !";
    return 0;
}