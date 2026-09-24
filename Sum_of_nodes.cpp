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
        right = NULL;

    }
};
 int sumofnodes(node*root){
    if(root == NULL){
        return 0;
    }
    int leftsum = sumofnodes(root->left);
    int rightsum = sumofnodes(root->right);
    return leftsum+rightsum+root->data;
 }
int main(){
    node*root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    root->left->left = new node(40);
    root->left->right = new node(50);
    root->right->left = new node(60);
    root->right->right = new node(70);

    cout<<"The sum of nodes are:"<<sumofnodes(root)<<endl;
    cout<<"Thank you!";
    return 0;
}