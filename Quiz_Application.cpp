#include<iostream>
#include<string>
using namespace std;
void displayquestion(string question,string options[],char correctanswer,int &score){
    cout<<endl<<question<<endl;
    cout<<"A."<<options[0]<<endl;
    cout<<"B."<<options[1]<<endl;
    cout<<"C."<<options[2]<<endl;
    cout<<"D."<<options[3]<<endl;

    char answer;
    cout<<"Enter your answer:";
    cin>>answer;
    
    if(answer>='a' && answer<='z'){
        answer-=32;
    }
    if(answer == correctanswer){
        cout<<"correct!";
        score++;
    }else{
       cout<<"Wrong!"<<endl; 
       cout<<"Correct answer:"<<correctanswer<<endl;
    }
}

int main(){
    
    string questions[5]{
    "Which language are we learning?",
    "Which data structure follows LIFO?",
    "Which symbol is used an access an class member through an object?",
    "Which loop is commonly used when the number of iteration is known?",
    "Which keyword is used to create an class in C++?"
    
    };
    string options[5][4] = {
    {"Python","C++","Java","HTML"},
    {"Queue","Stack","Array","Tree"},
    {".","->","::","&"},
    {"for loop","While loop","do while loop","if statement"},
    {"object","struct","class","define"}
    };

    char correctanswer[5]{
       'B','B','A','A','C'
    };

    int score=0;
    cout<<"\n==============================\n";
    cout<<"-------QUIZ APPLICATION-----------\n";
    cout<<"==============================\n";

    for(int i=0;i<5;i++){
        displayquestion(
        questions[i],
        options[i],
        correctanswer[i],
        score
        );
    }
    cout<<"========================\n";
    cout<<"        RESULT       \n";
    cout<<"========================\n";

    cout<<"Total Questions:5"<<endl;
    cout<<"Correct answer:"<<score<<endl;
    cout<<"Wrong answer:"<<5-score<<endl;
    cout<<"Final Score:"<<score<<"/5"<<endl;

    if(score == 5){
        cout<<"Excellent!";
    }
    else if(score>=3){
        cout<<"Good Job!";
    }else{
        cout<<"Keep practing!";
    }
   
    return 0;
}