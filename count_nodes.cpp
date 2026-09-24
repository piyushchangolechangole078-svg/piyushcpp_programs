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
int countNodes(Node*root){
    if(root == NULL){
        return 0;
    }
    int leftcount = countNodes(root->left);
    int rightcount = countNodes(root->right);
    return leftcount + rightcount + 1;
}
int main(){
    Node*root = new Node(10);
    root->left = new  Node(20);
    root->right = new Node(30);
    root->left->left = new  Node(40);
    root->right->right = new Node(50);
    root->left->left->left = new  Node(60);
    root->right->right->right = new Node(70);
    root->left->left->left->left= new  Node(80);
    root->right->right->right->right = new Node(90);
    
    cout<<"Total nodes are:"<<countNodes(root)<<endl;
    cout<<"Thank you!";


    return 0;
}