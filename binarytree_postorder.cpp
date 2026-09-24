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

void postorder(Node*root){
    if(root == NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<endl;
}
int main(){
    Node*root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->right->right = new Node(50);

    cout<<"Postorder Traversal is:";

    postorder(root);
    return 0;
}