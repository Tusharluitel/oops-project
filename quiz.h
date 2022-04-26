using namespace std;
class Quiz{
private:
    string question;
    string option1;
    string option2;
    string option3;
    string option4;
    int correctAnswer;
    int score;
public:
    Quiz(){}
    Quiz(string ques,string optOne,string optTwo,string optThree,string optFour,int answer,int sc):question(ques),option1(optOne),
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
    void printQues(){
        int ans;
        cout<<endl;
        cout<<"--."<<question<<endl;
        cout<<"a."<<option1<<endl;
        cout<<"b."<<option2<<endl;
        cout<<"c."<<option3<<endl;
        cout<<"d."<<option4<<endl;
        cout<<"ans";
        cin>>ans;
        if (ans==correctAnswer)
        {
            int totalScore;
            totalScore=totalScore+score;
            cout<<"your answer is right!!";
            cout<<"your score is:"<<totalScore;
        }
        else{
            cout<<"your ans is wrong and the correct answer is : "<<correctAnswer<<endl;
        }

    }
};