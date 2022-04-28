class Riddle{
private:
    string question;
    string answer;
public:
    Riddle(){}
    Riddle(string que, string ans):question(que),answer(ans){}

    void setRiddle(string que, string ans) {
        question = que;
        answer = ans;
    }
    void askRiddle() {
        string userAns;
        int guess = 3;
        int guessRemaining = 2;
        cout << "\n\n* " <<question<<endl;
        cout<<"Answer: ";
        cin >> userAns;
        for (int i = 1; i < guess; i++)
        {if (userAns == answer) {
                cout << "It is correct."<<endl;
                break;
            }
            else {
                cout << "It is incorrect. You have " << guessRemaining--<< " guess remaining"<<endl;
                cout<<"Answer: ";
                cin >> userAns;
                if(answer == userAns && guessRemaining == 0){
                    cout<< "It is correct"<<endl;
                }
                else if(answer !=userAns && guessRemaining ==0){
                    cout<<"The correct answer is: "<<answer<<endl;
                }
            }
        }
    }
};