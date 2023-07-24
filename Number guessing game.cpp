#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    string name;
    char input;
    int inputuser;
    cout<<"Enter your name";
    getline(cin,name);
    do
    {
        srand(0);
        int variable=rand()%5+1;
        cout<<"enter any number between range 1 to 5";
        cin>>inputuser;
        cout<<endl;
        if(inputuser==variable)
        {
            cout<<"congratulation!you guessed the correct number"<<endl;
        }
        else
        {
            cout<<"sorry,you guessed wrong number try again"<<endl;

        }
        cout<<"would you like to try again Y/N";
        cin>>input;
        cout<<endl;
    }while(input!='N');
    cout<<"game end"<<endl;
}
