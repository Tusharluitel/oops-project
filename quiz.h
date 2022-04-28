using namespace std;

class Quiz{
    //friend void display(Quiz);
private:
    string question;
    string option1;
    string option2;
    string option3;
    string option4;
    int correctAnswerPosition;
    string correctAnswer;
    int score;
public:
    Quiz(){}
    Quiz(string ques,string optOne,string optTwo,string optThree,string optFour,string rightAnswer, int answer,int sc):
            question(ques),option1(optOne),option2(optTwo),option3(optThree),option4(optFour),correctAnswer(rightAnswer),correctAnswerPosition(answer),score(sc){}
    void setQuiz(string ques,string optOne,string optTwo,string optThree,string optFour,string rightAnswer,int answer,int sc){
        question=ques;
        option1=optOne;
        option2=optTwo;
        option3=optThree;
        option4=optFour;
        correctAnswer=rightAnswer;
        correctAnswerPosition = answer;
        score=sc;
    }

    void printQues(){
        static int totalScore;
        int ans;
        int i;
        cout<<"\n\n";
        cout<<"*"<<question<<endl;
        cout<<"1."<<option1<<endl;
        cout<<"2."<<option2<<endl;
        cout<<"3."<<option3<<endl;
        cout<<"4."<<option4<<endl;
        cout<<"Ans: ";
        cin>>ans;

        if (ans==correctAnswerPosition)
        {
            totalScore = totalScore + score;
            cout<<"Your answer is right!!"<<endl;
            cout<<"Your score is: "<< totalScore <<endl;


        }
        else{
            cout<<"Your ans is wrong and the correct answer is : "<<correctAnswer<<endl;
            cout<<"Your score is: "<< totalScore <<endl;
        }

    }
};