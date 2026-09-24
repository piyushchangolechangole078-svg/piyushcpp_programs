#include <iostream>
using namespace std;
struct Item{
    int weight;
    int value;
    double ratio;
};
bool compare(Item a,Item b){
    return a.ratio>b.ratio;
}
int main(){
  int items Item[] ={
    {5,500,0},
    {4,320,0},
    {6,300,0}

  };
  int capacity = 10;
  int n = 3;
  for(int i=0;i<n;i++){
       Item[i].ratio = (double)Item[i].value/Item[i].weight;

  }
    return 0;
}