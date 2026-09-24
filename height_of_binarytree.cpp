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
   int height(Node*root){
    if(root == NULL){
        return 0;
    }
    int leftheight = height(root->left);
    int rightheight = height(root->right);
    return max(leftheight,rightheight)+1;
   }
int main(){
    Node*root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->right->right = new Node(50);
    root->left->left->left = new Node(60);
    root->right->right->right = new Node(70);
    root->left->left->left->left = new Node(80);

    cout<<root->data<<endl;
    cout<<root->left->data<<endl;
     cout<<root->right->data<<endl;
     cout<<root->left->left->data<<endl;
      cout<<root->right->right->data<<endl;
       cout<<root->left->left->left->data<<endl;
        cout<<root->right->right->right->data<<endl;
         cout<<root->left->left->left->left->data<<endl;
  
    cout<<"The height of tree = "<<height(root)<<endl;
    cout<<"Thank you!";
    return 0;
}