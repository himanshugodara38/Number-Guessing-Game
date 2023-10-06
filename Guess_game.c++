#include<iostream>
#include<time.h>

using namespace std;
int main(){
    srand(time(0));
    int num = rand()%100+1;
    int guessNum , guessesNo=1;
    cout << "Guess a number between 1 to 100" << endl;
    do
    {
        
        cin >> guessNum;

        if(guessNum>num){
            cout << "Please Provide a Lower Number!"<<endl;
        }
        else if (guessNum < num)
        {
            cout << "Please Provide a Higher Number!"<<endl;
        }else{
            cout << "Congratulations! You Guessed the number after " << guessesNo << " attempts"<<endl;
        }
        guessesNo++;
    } while (guessNum!=num);
    
    return 0;
}