#include<string>
#include<iostream>
#include "quiz.h"
#include "riddle.h"

using namespace std;
class User{
    string name;
    int age;
public:
    User(){}
    User(string userName,int userAge):name(userName),age(userAge){}
    void setName(string userName){name=userName;}
    string getName(){return name;}
    void setAge(int userAge){age=userAge;}
    int getAge(){return age;}
};
int main(){

    string name;
    int ageOfUser;
    int userDecision;
    string value;
    cout<<"Hello!!Enter Your name: ";
    getline(cin,name);
    cout<<"enter your age:";
    cin>>ageOfUser;
    User(name,ageOfUser);
    cout<<"Hello "<< name <<" are you interested to play quiz or riddle.\nIf yes press 1 for quiz and 2 for riddle, If no press 0:";
    cin>>userDecision;
    if(userDecision == 1){
        cout<<"You are playing quiz of history";
        Quiz history[3];
        history[0].setQuiz("Who was the last king of Nepal?","Birendra Shah","Gyanendra Shah","Prithivi Narayan Shah","Ram Shah",2,10);
        history[1].setQuiz("When did royal massacre took place?","2058, Jestha 17","2058, Jestha 16","2058, Jestha 19","2058, Jestha 18",3,10);
        history[2].setQuiz("Who was the mother of Prithivi Narayan Shah?","Kaushalyawati","Chandraprabhawati","Buddhimati","Subhadrawati",1,10);
        for (int i=0;i<3;i++)
        {

            history[i].printQues();
        }
    }

    else if(userDecision == 2){
        cout<<"You are playing riddle";
        Riddle riddle[3];
        riddle[0].setRiddle("What has one head, one foot and four legs?", "bed");
        riddle[1].setRiddle( "What has a head and a tail but no body?", "coin");
        riddle[2].setRiddle("What is so fragile that saying its name breaks it?", "silence");
        for (int j = 0; j<3; j++)
        {
            riddle[j].askRiddle();
        }

    }
    else{
        cout<<"Bye Bye";
        return 0;
    }
    return 0;
}