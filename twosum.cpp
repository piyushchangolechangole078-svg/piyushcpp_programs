#include <iostream>
#include <vector>
using namespace std;
int main(){
  vector<int>nums = {2,3,7,11,15};
  int target;
  cout<<"Enter the target:";
  cin>>target;
  bool found = false;
  for(int i=0;i<nums.size();i++){
    for(int j=i+1;j<nums.size();j++){
        if(nums[i] + nums[j] == target){
            cout<<"Target found!"<<endl;
            cout<<"Indices are:"<< i <<" and "<<j<<endl;
            cout<<"Values are:"<< nums[i]<<" and "<<nums[j]<<endl;
            found = true;
            break;

        }
    }
    if(found){
        break;
    }
  }
  if(!found){
    cout<<"Target not found!";
  }
    return 0;
}