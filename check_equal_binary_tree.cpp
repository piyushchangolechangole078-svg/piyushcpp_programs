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
bool isidentical(Node*root1,Node*root2){
    if(root1 == NULL && root2 == NULL){
        return true;
    }
    if(root1 == NULL || root2 == NULL){
        return false;
    }
    if(root1->data != root2->data){
        return false;
    }
    int lefttree = isidentical(root1->left,root2->left);
    int righttree = isidentical(root1->right,root2->right);
    return lefttree && righttree;
}
int main(){
    //tree 1
    Node*root1 = new Node(10);
    root1->left = new Node(20);
    root1->right = new Node(30);
    root1->left->left = new Node(40);
    root1->left->right = new Node(50);
    root1->right->left = new Node(60);
    root1->right->right = new Node(70);
    
    //tree 2
      Node*root2 = new Node(10);
    root2->left = new Node(20);
    root2->right = new Node(30);
    root2->left->left = new Node(40);
    root2->left->right = new Node(50);
    root2->right->left = new Node(60);
    root2->right->right = new Node(70);

    // compare using function

    if(isidentical(root1,root2)){
        cout<<"Both trees are identical!";
    }else{
        cout<<"Tree are not identical!";
    }
    return 0;
}