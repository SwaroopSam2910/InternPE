#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
#define ROCK 1;
#define PAPER 2;
#define SCISSOR 3;
int main(){
    srand((unsigned int)time(NULL));
    int player_throw;
    int ai_throw;
    bool draw;
    do{
    cout<<"WLC TO ROCK PAPER SCISSORS"<<endl;
    cout<<"PRESS 1 FOR ROCK"<<endl; 
    cout<<"PRESS 2 FOR PAPER"<<endl;
    cout<<"PRESS 3 FOR SCISSORS"<<endl;
    cout<<"ENTER UR CHOICE"<<endl;
    cin>>player_throw;
    draw = false;
    ai_throw=(rand()%3)+1;
    if (ai_throw == 1)
    {
      cout << "AI THROWS ROCK." << endl;
    }
    else if (ai_throw == 2)
    {
      cout << "AI THROWS PAPER." << endl;
    }
    else if (ai_throw == 3)
    {
      cout << "AI THROWS SCISSORS." << endl;
    }
    if (player_throw==ai_throw)
    {
        cout<<" ITS A DRAW"<<endl;
        draw==true;
    }
    else if (player_throw == 1 && ai_throw == 3)
    {
      cout << "ROCK beats SCISSORS! YOU WIN." << endl;
    }
    else if (player_throw == 1 && ai_throw == 2)
    {
      cout << "PAPER beats ROCK! YOU LOSE." << endl;
    }
    else if (player_throw == 2 && ai_throw == 1)
    {
      cout << "PAPER beats ROCK! YOU WIN." << endl;
    }
    else if (player_throw == 2 && ai_throw == 3)
    {
      cout << "SCISSORS beats PAPER! YOU LOSE." << endl;
    }
    else if (player_throw == 3 && ai_throw == 2)
    {
      cout << "SCISSORS beats PAPER! YOU WIN." << endl;
    }
    else if (player_throw == 3 && ai_throw == 1)
    {
      cout << "ROCK beats SCISSORS! YOU LOSE." << endl;
    }
 }while(draw);
 return 0;
}