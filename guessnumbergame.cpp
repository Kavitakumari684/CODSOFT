
// code for number guessing game
#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"welcome to play guessing game :"<<endl;
    while(true)
    {
        cout<<"1: for medium to give some more number of chance:"<<endl;
        cout<<"2: for hard to give some less number of chance:"<<endl;
        cout<<"0:to ending the game:"<<endl;
        
        int level ;
        cin>>level;
        srand(time(0));                         //generate different random number at every time
        int randomnumber = rand()%100 +1;       //random number between 1 to 100
        if(level == 1)
        {
            int chance =8;
            for(int i =1; i<=8;i++)
            {
                int playerchoice;
                cin>>playerchoice;
                if(randomnumber == playerchoice )
                {
                    cout<<"congratulation: you won the game "<<endl;
                    break;
                }
                else{
                    if(randomnumber>playerchoice)
                    {
                        cout<<"increase the number"<<endl;
                    }
                    else{
                        cout<<"decrease the number"<<endl;
                    }
                }
                chance--;
                cout<<"only your remaining chances:"<<chance<<endl;
                if(chance==0)
                {
                    cout<<"you lose the game try for next time"<<endl;
                }
            }
        }
        else if(level == 2)
        {
            int chance =5;
            for(int i = 1;i<=5;i++)
            {
                int playerchoice;
                cin>>playerchoice;
                if(randomnumber == playerchoice)
                {
                    cout<<"congratulations : you won"<<endl;
                    break;
                }
                else{
                    if(randomnumber > playerchoice)
                    {
                        cout<<"increase the number"<<endl;
                    }
                    else{
                        cout<<"decrease the number"<<endl;
                    }
                }
                chance--;
                if(chance == 0)
                {
                    cout<<"you lose the game please try the next time"<<endl;
                }
            }
        }
        else if(level ==0)
        {
            exit(0);
        }
        else{
            cout<<"you entered wrong level number:"<<endl;
        }
    }
    return 0;
}