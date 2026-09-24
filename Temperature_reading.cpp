#include<iostream>
using namespace std;
class Temperaturesensor{
    public:
    float Temperature;
    void readTemperature(){
        cout<<"Reading Temperature...";
    }
};
int main(){
   readTemperature();

    return 0;
}