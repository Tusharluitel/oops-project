//project of quizzdle
#include<string>
#include<iostream>
#include <iomanip>
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
    int yourChoice;
    string value;
    string playAgain;
    cout<<setw(60)<<" --------------------------------"<<endl;
    cout<<setw(48)<<"WELCOME"<<endl;
    cout<<setw(45)<<"TO"<<endl;
    cout<<setw(50)<<"QUIZZDLE!!"<<endl;
    cout<<setw(60)<<" --------------------------------"<<endl;

    cout<<endl;
    cout<<"Hello!!! \nEnter Your name: ";
    getline(cin,name);
    cout<<"Enter your age: ";
    cin>>ageOfUser;
    loop:
    cout<<"\n----------------------------------------------------------------"<<endl;
    User(name,ageOfUser);
    cout<<"\nHello "<< name<<","
        <<"\nAre you interested to play quiz or riddle?";
    cout<<endl;
    cout<<"\nPress 1 for QUIZ and 2 for RIDDLE, Press 0 to EXIT: "<<endl;

    cin>>userDecision;
    if(userDecision == 1){
        cout<<"----------------------------------------------------------------"<<endl;
        cout<<"\nPress 1 to play History Quiz";
        cout<<"\nPress 2 to play Sports Quiz";
        cout<<"\nPress 3 to play KPOP Quiz"<<endl;
        cout<<"\nEnter your choice: ";
        cin>>yourChoice;
        if(yourChoice == 1) {
            cout << "\nYou are playing quiz of history";
            cout <<endl;
            Quiz history[10];
            history[0].setQuiz("Who was the last king of Nepal?",
                               "Birendra Shah", "Gyanendra Shah",
                               "Prithivi narayan Shah", "Ram Shah","Gyanendra Shah", 2, 10);
            history[1].setQuiz("When did royal massacre took place?",
                               "2058, Jestha 17", "2058, Jestha 16",
                               "2058, Jestha 19", "2058, Jestha 18","2058, Jestha 19", 3, 10);
            history[2].setQuiz("Who was the mother of Prithivi Narayan Shah?",
                               "Kaushalyawati", "Chandraprabhawati",
                               "Buddhimati", "Subhadrawati","Kaushalyawati", 1, 10);
            history[3].setQuiz("Which of the following are also known as “farmers of forty centuries”?",
                               "Romans", "Greeks",
                               "Chinese", "Mesopotamian’s","Chinese", 3, 10);
            history[4].setQuiz(" Who was popularly known as Africa’s Gandhi?",
                               "Mir Karzai", "Firoz Gandhi",
                               "Nelson Mandela", "M.K.Gandhi","Nelson Mandela", 3, 10);
            history[5].setQuiz("The famous painting ‘Monalisa’ was the creation of?",
                               "Michael Angelo", "Leonardo-da-Vinci",
                               "Picasso", "Van Gogh","Leonardo-da-Vinci", 2, 10);
            history[6].setQuiz("The world’s first drainage system was build by the people of?",
                               "Egyptian civilization", "Indus Valley civilization",
                               "Chinese civilization", "Mesopotamian civilization","Indus Valley civilization", 2, 10);
            history[7].setQuiz("When was NATO signed?",
                               "1949", "1990",
                               "1948", "1950","1949", 1, 10);
            history[8].setQuiz("Which of the following was the first artificial satellite?",
                               "Lander Beagle", "Sojourner",
                               "Apollo 11", "Sputnik","Sputnik", 4, 10);
            history[9].setQuiz("Who were the Axis powers in World War-II?",
                               "Poland Japan Germany", " Italy Japan Britain",
                               " Germany Italy France", "Germany Italy Japan","Germany Italy Japan", 4, 10);
            for (int i = 0; i < 10; i++) {
                history[i].printQues();
            }

        }
        else if(yourChoice == 2) {
            cout << "\nYou are playing quiz of Sports";
            cout <<endl;
            Quiz sports[10];
            sports[0].setQuiz("When was the first recorded olympics held?",
                              "825 BC", "776 BC",
                              "80 AD", "none","776 BC" ,2, 10);
            sports[1].setQuiz("Bull fighting is the national game of which country?",
                              "Spain", "Portugal",
                              "Hungary", "None","None", 4, 10);
            sports[2].setQuiz("Which of the following terms is not associated with the following term?",
                              "Free kick", "Off side",
                              "Penalty Stroke", "Penalty kick","Penalty Stroke", 3, 10);
            sports[3].setQuiz("The term ‘Butterfly Stroke’ is related to which sports?",
                              "Golf", "Football",
                              "Swimming", "Boxing","Swimming", 3, 10);
            sports[4].setQuiz("How many dimples are there on the average golf ball?",
                              "300", "336",
                              "404","295","336" ,2, 10);
            sports[5].setQuiz("Which country won the first ever football world cup?",
                              "Brazil", "Uruguay",
                              "Argentina", "Belgium","Uruguay", 2, 10);
            sports[6].setQuiz("How long is the total distance of a marathon? ",
                              "42.16 km", "30 km",
                              "42 km", "50.5km","42.16 km", 1, 10);
            sports[7].setQuiz("What is the name of the fictional sport played in the Harry Potter series?",
                              "Quidrick", "Quidditch",
                              "Kuitch", "Quidith","Quidditch", 2, 10);
            sports[8].setQuiz("How many gold medals has Usain Bolt won? ",
                              "9", "10",
                              "8", "5","8", 3, 10);
            sports[9].setQuiz("In which sport would competitors use a piece of equipment known as a foil?",
                              "Water Polo", "Boxing",
                              "Supa Punt", "Fencing","Fencing", 4, 10);

            for (int i = 0; i < 10; i++) {
                sports[i].printQues();
            }
        }
        else if(yourChoice == 3) {
            cout << "\nYou are playing quiz of Kpop";
            cout <<endl;
            Quiz kpop[10];
            kpop[0].setQuiz("Approximately how many K-pop groups are there in South Korea?",
                            "50","100",
                            "300","500","300",3,10);
            kpop[1].setQuiz("Which K-pop group members include Hyunjin, Felix, Bang Chan and Han?",
                            "TXT","Bigbang","Wanna One",
                            "Stray Kids","Stray Kids",4,10);
            kpop[2].setQuiz("Which group’s songs include PTT, Why Not, Butterfly and Star?",
                            "Twice","BTS",
                            "LOONA","Monsta X","LOONA",3,10);
            kpop[3].setQuiz("Which K-pop artist was the first to reach 1 billion views on YouTube?",
                            "Taeyeon","Chungha",
                            "PSY","Kim Ryeowook","PSY",3,10);
            kpop[4].setQuiz("What color did the BTS members dye their hair when their album “Love Yourself: Tear” was released?",
                            "Black","Purple",
                            "Orange","Pink","Black",1,10);
            kpop[5].setQuiz("Which successful K-Pop group has the most members as of 2022?",
                            "EXO","NCT",
                            "Seventeen","LOONA","NCT",2,10);
            kpop[6].setQuiz("Which girl group’s lead singer was featured in Got7’s “Girls Girls Girls” music video?",
                            "Mamamoo","Girls’ Generation",
                            "Twice","Red Velvet","Twice",3,10);
            kpop[7].setQuiz("Which K-pop band was the first to perform at Coachella?",
                            "Twice","BLACKPINK",
                            "EXO","BTS","BLACKPINK",2,10);
            kpop[8].setQuiz("Which K-pop group was the first to have a number one album on the Billboard 200?",
                            "Big Bang","BTS",
                            "BoA","Exo","BTS",2,10);
            kpop[9].setQuiz("When was Seo Taiji and Boys formed?",
                            "1992","1980",
                            "1984","1979","1992",1,10);
            for (int i = 0; i < 10; i++) {
                kpop[i].printQues();
            }
        }
    }
    else if(userDecision == 2){
        cout<<"You are playing riddle";
        Riddle riddle[10];
        riddle[0].setRiddle("What has one head, one foot and four legs?", "bed");
        riddle[1].setRiddle( "What has a head and a tail but no body?", "coin");
        riddle[2].setRiddle("What is so fragile that saying its name breaks it?", "silence");
        riddle[3].setRiddle("People make me, save me, change me, raise me. What am I?","money");
        riddle[4].setRiddle("What goes through cities and fields, but never moves?","road");
        riddle[5].setRiddle("What begins with an “e” and only contains one letter?","envelope");
        riddle[6].setRiddle("I am an odd number. Take away a letter and I become even. What number am I?","seven");
        riddle[7].setRiddle("What can travel all around the world without leaving its corner?","stamp");
        riddle[8].setRiddle("What has words, but never speaks?","books");
        riddle[9].setRiddle("What has a thumb and four fingers, but is not a hand?","hand");
        for (int j = 0; j<10; j++)
        {
            riddle[j].askRiddle();
        }
    }
    else {
        cout<<"----------------------------------------------------------------"<<endl;
        cout << "Bye Bye";
        return 0;
    }
    cout<<"Do you wanna play again? Type y for yes and n for no: ";
    cin>>playAgain;
    if(playAgain == "y"){
        goto loop;
    }
    else{
        cout<<"Thank you for playing";
    }

    return 0;
}