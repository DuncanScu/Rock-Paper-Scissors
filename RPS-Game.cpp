#include <iostream>
#include <string>
#include <stdio.h>
#include <time.h> 
#include <stdlib.h>



using namespace std;


int main(){

//Introduction to the game and menu
    cout<<"\n------------------------"<<endl;;
    cout<<"\nRock, Paper, Scisor Game"<<endl;
    cout<<"\n------------------------"<<endl;
    char user{};
    char upper_user{};
//Choice Menu
    do{
     cout<<"----------MENU----------";
     cout<<"\nR-Rock";
     cout<<"\nP-Paper";
     cout<<"\nS-Scoisor";
     cout<<"\nEnter your choice: ";
     cin>>user;
     upper_user = toupper(user);
     cout<<endl;
        

    }while (upper_user != 'P' and upper_user != 'R' and upper_user != 'S');
//Outputing Choice
string choice {};
switch (upper_user)
{
case 'R':
    choice = "Rock";
    break;
case 'P':
    choice = "Paper";
    break;
case 'S':
    choice = "Scisors";
    break;

default:
    break;
}

    cout << "You chose to play "<<choice<<"!"<<endl;

//Getting the compter to chose a random number
int randomNum{};
srand (time(NULL));
randomNum = rand() % 3 +1;

//Comouting the number to a result
char comp_res{};
switch (randomNum)
{
case 1:
    cout<<"Computer Played Rock!"<<endl;
    comp_res = 'R';
    break;
case 2:
    cout<<"Computer Played Paper!"<<endl;
    comp_res = 'P';
    break;
case 3:
    cout<<"Computer Played Scissors!"<<endl;
    comp_res = 'S';
    break;

default:
    break;
}
//Win or Loss Logic
if (upper_user == 'R' and comp_res == 'S'){
    cout<<"YOU WIN!"<<endl;
}
else if (upper_user == 'S' and comp_res == 'P'){
    cout<<"YOU WIN!"<<endl;
}
else if (upper_user == 'P' and comp_res == 'R'){
    cout<<"YOU WIN!"<<endl;
}
else if (upper_user == comp_res){
    cout<<"Its a draw!"<<endl;
}
else {
    cout<<"Sorry, you lost :(";
}

    return 0;
}