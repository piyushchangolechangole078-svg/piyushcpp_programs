#include <iostream>
using namespace std; 
int main(){
    int length;
    int breadth;
    cout<<"Enter the length and breadth:";
    cin>>length>>breadth;
    int area = (length*breadth);
    int perimeter = 2*(length+breadth);
    cout<<"The area is :"<< area <<endl;
    cout<<"The perimeter is :"<< perimeter<<endl;
    cout<<"Thank you!";
    return 0;
}