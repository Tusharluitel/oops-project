using namespace std;
class Riddle{
private:
    string question;
    string answer;
    int guess = 3;
public:
    Riddle(){}
    Riddle(string que, string ans):question(que),answer(ans){}

    void setRiddle(string que, string ans) {
        question = que;
        answer = ans;
    }
    void askRiddle(){
        string userAns;
        int guessRemaining = 3;
        cout<<"\n"<<question;
        for(int i=0; i<guess; i++) {
            cin >> userAns;
            if (userAns != answer) {
                cout << "It is incorrect. You have " << --guessRemaining <<" guess remaining";
            }
            else{
                cout << "It is correct";
                exit(0);
            }
        }

    }
};