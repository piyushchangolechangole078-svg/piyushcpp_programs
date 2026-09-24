#include<iostream>
using namespace std;
class student{
    public:
    int age;
    string name;
    void introduce(){
        cout<<"MY name is :"<<name<<endl;
        cout<<"MY age is:"<<age<<endl;
    }
};
int main(){
  student s1,s2,s3;
  s1.name = "Piyush changole";
  s2.name = "Kartik changole";
  s3.name = "Sarthak changole";
  s1.age = 19;
  s2.age = 16;
  s3.age = 13;
  s1.introduce();
  cout<<"\n-------------------\n";
  s2.introduce();
  cout<<"\n-------------------\n";
  s3.introduce();
    return 0;
}