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
 int countonechild(Node*root){
    if(root == NULL){
        return 0;
    }
    int leftcount = countonechild(root->left);
    int rightcount = countonechild(root->right);
    if((root->left == NULL && root->right != NULL)||
     (root->right == NULL && root->left != NULL)){
      return leftcount + rightcount +1;
    }
    return leftcount + rightcount;
 }

int main(){
    Node*root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->right->right = new Node(50);

    cout<<"The count of Nodes with single child is:"<<countonechild(root)<<endl<<"thank you!";
    return 0;
}