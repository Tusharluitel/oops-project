#include<iostream>
#include<string>
using namespace std;
template <class T>
class Quiz{
private:
    T question;
    T option1;
    T option2;
    T option3;
    T option4;
    int correctAnswer;
    int score;
public:
    Quiz(){}
    Quiz(T ques,T optOne,T optTwo,T optThree,T optFour,int answer,int sc):question(ques),option1(optOne),
                                                                          option2(optTwo),option3(optThree),option4(optFour),correctAnswer(answer),score(sc){}
    void setQuiz(string ques,string optOne,string optTwo,string optThree,string optFour,int answer,int sc){
        question=ques;
        option1=optOne;
        option2=optTwo;
        option3=optThree;
        option4=optFour;
        correctAnswer=answer;
        score=sc;
    }
    void askHistoryQues(Quiz his,int n)
    {
        cout<<"1."<<question<<endl;
        cout<<"a."<<option1<<endl;
        cout<<"b."<<option2<<endl;
        cout<<"c."<<option3<<endl;
        cout<<"d."<<option4<<endl;

    }


};
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
    cout<<"Hello!!Enter Your name: ";
    getline(cin,name);
    cout<<"enter your age:";
    cin>>ageOfUser;
    User(name,ageOfUser);
    cout<<"Hello "<< name <<" are you interested to play quiz or riddle.\nIf yes press 1 for quiz and 2 for riddle, If no press 0:";
    cin>>userDecision;
    if(userDecision == 1){
        cout<<"You are playing quiz of history";
        Quiz <string>history[3];
        history[0].setQuiz("Who was the last king of Nepal?","Birendra Shah","Gyanendra Shah","Prithivi narayan Shah","Ram Shah",2,10);
        history[1].setQuiz("When did royal massacre took place?","2058, Jestha 17","2058, Jestha 16","2058, Jestha 19","2058, Jestha 18",3,10);
        history[2].setQuiz("Who was the mother of Prithivi Narayan Shah?","Kaushalyawati","Chandraprabhawati","Buddhimati","Subhadrawati",1,10);
        for (int i=0;i<3;i++)
        {
            askHistoryQues(history[i],3);
        }
    }
    else if(userDecision == 2){
        cout<<"You are playing riddle";
    }
    else{
        cout<<"Bye Bye";
        return 0;
    }
    return 0;
}
