#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*left;
    Node*right;

    Node(int value){
        data = value;
        left = NULL;
        right = NULL;
    }
};
int main(){
    Node*root = new Node(20);
    cout<<"The root node is :"<<root->data<<endl;
    cout<<"thank you!";
    return 0;
}