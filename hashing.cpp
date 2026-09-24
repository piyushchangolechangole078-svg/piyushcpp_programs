#include<iostream>
using namespace std;
struct Node{
    int key;
    Node*next;
};
void insert(Node*table[],int key){
    Node*newNode = new Node;
    newNode->key = key;
    newNode->next = table[index];
    table[index] = newNode;
}
void display(Node*table[]){
    for(int i=0;i<10;i++){
        cout<<i<<":";
        Node*temp = table[i];
        while(temp!=nullptr){
            cout<<temp->key<<'->';
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }

}
int main(){
    int n = 10;
    Node*table[10];
    for(int i=0;i<n;i++){
        table[i] = nullptr;
    }

    return 0;
}