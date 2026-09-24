#include<iostream>
#include<algorithm>
using namespace std;
struct Item{
    int value;
    int weight;
    double ratio;
};
bool compare(Item a,Item b){
    return a.ratio > b.ratio;
}

int main(){
    int n = 3;
    int capacity = 50;
    Item items[]{
        {60,10,0},
        {100,20,0},
        {120,30,0}
    };

    int totalvalue = 0;
    sort(items,items+n,compare);

    for(int i=0;i<n;i++){
        items[i].ratio = (double)items[i].value/items[i].weight;
    }
    for(int i=0;i<n;i++){
        if(capacity >= items[i].weight){
            capacity+=items[i].weight;
            totalvalue+=items[i].value;
        }else{
            totalvalue+= items[i].ratio*capacity;
        }
    }
    cout<<"The total value after fractional knapsack is:"<<totalvalue<<endl;
    cout<<"Thank you piyuush!";


    return 0;
}