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
bool mirror(Node*leftNode,Node*rightNode){
    if(leftNode == NULL && rightNode == NULL){
        return true;
    }
    if(leftNode == NULL || rightNode == NULL){
        return false;
    }
    if(leftNode->data != rightNode->data){
        return true;
    }
    return mirror(leftNode->left,rightNode->right) && mirror(leftNode->right,rightNode->left);
}
bool issymmetric(Node*root){
    if(root == NULL){
        return true;
    }
    return mirror(root->left,root->right);
}
int main(){
    Node*root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(20);
    root->left->left = new Node(30);
    root->right->right = new Node(30);
    root->left->right = new Node(40);
    root->right->left = new Node(40);
    
    if(issymmetric(root)){
        cout<<"Tree is Symmetric!";
    }else{
  cout<<"Tree is not symmetric!";
    }
  
    cout<<"Thank you!";

    return 0;
}