#include<iostream>
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
    Node*root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    cout<<"The root is:"<<root->data<<endl;
    cout<<"The left child is:"<<root->left->data<<endl;
    cout<<"The right child is:"<<root->right->data<<endl;
    cout<<"Thank you piyush!";
    return 0;
}