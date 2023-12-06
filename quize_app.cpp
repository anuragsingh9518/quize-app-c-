#include<iostream>
using namespace std;
int main(){
int finalResult=0;
char playagain;
int playquiz(void);
finalResult=playquiz();
cout<<"your score is "<<finalResult<<endl;
if(finalResult>=6){
    cout<<"you are pass"<<endl;
    cout<<"do you want to play Quiz again y or n "<<endl;
    cin>>playagain;
    if(playagain=='y' || 'Y'){
        playquiz();
    }
    else{
        cout<<"thanks for playing Quize!";
    }

}
else{
    cout<<"you are fail"<<endl;
}
    
}
int playquiz(){
    char c;
    char option;
    int score=0;
    cout<<"------welcome to Quize game----------"<<endl;
    cout<<"------please follow the instructions--------"<<endl;
    cout<<"step 1: Quize contain 10 questions "<<endl;
    cout<<"step 2: you will be given 1 marks for each correct answer"<<endl;
    cout<<"step 3: there will be no negative marking"<<endl;
    cout<<"step 4: please press s to start the Quize "<<endl;
    cout<<"step 5: please select the option a,b,c,d"<<endl;
    cout<<"score more than 6 to pass exam "<<endl;
    cin>>c;
    if(c=='s' || c=='S'){
        cout<<"Q1.What is the capital of India?"<<endl;
        cout<<"(a) delhi (b) mumbai (c) patna (d) kolkata"<<endl;
        cin>>option;
        if(option=='a' || option=='A'){
            score=score+4;
        }
        else{
            score=score-1;
        }

         cout<<"Q2.Who is prime minister of India?"<<endl;
        cout<<"(a) rahul gandi  (b) arvind kejriwal (c) yogi (d) narander modi"<<endl;
        cin>>option;
        if(option=='d' || option=='D'){
            score=score+4;
        }
        else{
            score=score-1;
        }

         cout<<"Q3.What is full form of RAM ?"<<endl;
        cout<<"(a) random access memory  (b) rahul access memory  (c) rakesh aaya mumbai (d) research and maths"<<endl;
        cin>>option;
        if(option=='a' || option=='A'){
            score=score+4;
        }
        else{
            score=score-1;
        }

         cout<<"Q4.What is National bird of India?"<<endl;
        cout<<"(a) pecock (b) penguin (c) spearoww (d) eagel"<<endl;
        cin>>option;
        if(option=='a' || option=='A'){
            score=score+4;
        }
        else{
            score=score-1;
        }
         cout<<"Q5.What is the full form of I.T?"<<endl;
        cout<<"(a) Indian technology (b) Information technology (c) idiotic treatment (d) internet transition"<<endl;
        cin>>option;
        if(option=='a' || option=='A'){
            score=score+4;
        }
        else{
            score=score-1;
        }
         cout<<"Q6.Who is founder of boat ?"<<endl;
        cout<<"(a) rakesh singh  (b) anurag  (c) amar  (d) aman gupta "<<endl;
        cin>>option;
        if(option=='d' || option=='D'){
            score=score+4;
        }
        else{
            score=score-1;
        }
         cout<<"Q7.What is National Animal of India ?"<<endl;
        cout<<"(a) tiger (b) penguin  (c) lion (d) kolkata"<<endl;
        cin>>option;
        if(option=='a' || option=='A'){
            score=score+4;
        }
        else{
            score=score-1;
        }
         cout<<"Q8.do you have hands ?"<<endl;
        cout<<"(a) no moye moye (b) yes (c) only one (d) have both hands"<<endl;
        cin>>option;
        if(option=='a' || option=='A'){
            score=score+4;
        }
        else{
            score=score-1;
        }
         cout<<"Q9.What is the national language of India?"<<endl;
        cout<<"(a) Bhojpuri (b) Hindi (c) India dosent have national language (d) English"<<endl;
        cin>>option;
        if(option=='c' || option=='C'){
            score=score+4;
        }
        else{
            score=score-1;
        }
         cout<<"Q10.Who is C.M of up?"<<endl;
        cout<<"(a) yogi (b) modi (c) lalu (d) kamlesh"<<endl;
        cin>>option;
        if(option=='a' || option=='A'){
            score=score+4;
        }
        else{
            score=score-1;
        }

    }
    else{
        cout<<"you entered wrong character please enter s to start"<<endl;
    }
    return score;
}
