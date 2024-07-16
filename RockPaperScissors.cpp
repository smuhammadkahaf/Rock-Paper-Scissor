#include <iostream>
#include <windows.h>
#include <time.h>
#include <string>

using namespace std;

//Global Variables
char player;
int ai,result;

//prototype
int crand(int);     //random number from 1 to given range
void anime1(void);
int condition();
void display(int);  //display the ai/random choice
//main body
int main()
{
    Start:
    system("cls");
    cout<<"\t\t <ROCK PAPER SCISSOR>"<<endl<<endl;

    ai=crand(3);
    cout<<"Select the given choice"<<endl;
    cout<<"1. Rock"<<endl;
    cout<<"2. Paper"<<endl;
    cout<<"3. scissor"<<endl;

    cin >>player;

    if (player!='1'  &&   player!='2'   &&  player!='3')
    {
        cout<<"Invalid input try again"<<endl;
        Sleep (900);
        goto Start;
    }

    system ("cls");
    anime1();
    system ("cls");

    cout<<"AI : ";
    display(ai);

    cout<<"You : ";
    display(player);
    cout<<endl;

    result=condition();

    if(result==0)
    {
        cout<<"Game Draw"<<endl;
    }
    else if(result==1)
    {
        cout<<"You Won the Match"<<endl;
    }
    else if(result ==2)
    {
        cout<<"OPPS You lost,\nBetter luck next time"<<endl;


    }

    return 0;
}

//function Definations

int crand(int x)
{
    srand(time(0));
    x=rand()%x;

    return x+1;
}
void anime1()
{
    Sleep(100);
    cout<<"Rock";
    Sleep(500);
    cout<<" Paper";
    Sleep(500);
    cout<<" scissor\n\n";
    Sleep (500);
}

int condition()
{

    if(player=='1')
    {
        if (ai==2)
        {
            return 2;        //ai won
        }
        else if (ai==3)
        {
            return 1;       //player won
        }
        else
        {
            return 0;       //draw
        }
    }

    else if (player=='2')
    {
        if (ai==1)
        {
            return 1;       //player won
        }
        else if (ai==3)
        {
            return 2;       //ai won
        }
        else
        {
            return 0;       //draw
        }
    }

    else if (player=='3')
    {
        if (ai==1)
        {
            return 2;       //ai won
        }
        else if (ai==2)
        {
            return 1;       //player won
        }
        else
        {
            return 0;       //draw
        }
    }
    //return 0----> draw
    //return 1---->player won
    //return 2---->AI won
    return 0;
}
void display(int d)
{

    if (d==1    ||  d==49)
    {
        cout<<"Rock"<<endl;
    }
    else if (d==2   ||  d==50)
    {
        cout<<"Paper"<<endl;
    }
    else if (d==3   ||  d==51)
    {
        cout<<"scissor"<<endl;
    }
}



