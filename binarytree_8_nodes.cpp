#include <iostream>
using namespace std; 
class node{
    public:
    int data;
    node*left;
    node*right;
    
    node(int value){
        data = value;
        left = NULL;
        right  = NULL;
    }
};
int main(){
    node*root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    root->left->left = new node(40);
    root->right->right = new node(50);
    root->left->left->left = new node(60);
    root->right->right->right = new node(70);

    cout<<root->data<<endl;
    cout<<root->left->data<<endl;
    cout<<root->right->data<<endl;
    cout<<root->left->left->data<<endl;
    cout<<root->right->right->data<<endl;
    cout<<root->left->left->left->data<<endl;
    cout<<root->right->right->right->data<<endl;

    cout<<"Thank you piyush!";
    return 0;;
}