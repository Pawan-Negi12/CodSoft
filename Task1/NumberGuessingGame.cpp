#include<bits/stdc++.h>
using namespace std;

int main(){
    
    srand(time(0));

    // Generate random number between 1 to 100.
    int randomNumber = (rand() % 100) + 1; ;

    int guessNumber;
    int chances = 0;

    cout<<"Welcome to the Number Guessing Game"<<endl;
    do{

        // User input for the number.
        cout<<"Guess any Number(1-100)"<<endl;
        cin>>guessNumber;
        // Increase the chance by 1 everytime the user guess a number.
        chances++;

        // Check the conditions.
        if(guessNumber == randomNumber){
            cout<<"Congratulations! You guessed the number in " << chances <<" chances"<<endl;
            break;
        }
        else if(guessNumber > randomNumber){
            cout<<"The correct number is less than the number guessed! Try Again "<<endl;
        }
        else if(guessNumber < randomNumber){
            cout<<"The correct number is greater than the number guessed! Try Again "<<endl;
        }

    }while(guessNumber != randomNumber);

    cout<<"Thank You for playing the game!"<<endl;
    return 0;
}