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
int countinternal(Node*root){
    if(root == NULL){
        return 0;
    }
    if(root->left == NULL && root->right == NULL){
        return 0;
    }
    int leftcount = countinternal(root->left);
    int rightcount = countinternal(root->right);
    return leftcount+rightcount+ 1;
}
int main(){
    Node*root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->left->left->left = new Node(60);
    root->left->left->right = new Node(70);

    cout<<"The internal nodes count is :"<<countinternal(root)<<endl;
    cout<<"Thank you piyush!";
    return 0;
}