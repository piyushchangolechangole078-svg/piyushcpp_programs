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
void preorder(Node*root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<endl;
    preorder(root->left);
    preorder(root->right);
}
int main(){
    Node*root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->right->right = new Node(50);
    root->left->left->left = new Node(60);
    root->right->right->right = new Node(70);
    cout<<"Preorder Traversal:"<<endl;
    preorder(root);
    cout<<endl<<"Thank you!";
    return 0;
}