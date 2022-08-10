//This is a dice roller program I made to help develop my C++ knowledge.
/*I may decide to update it later with
the ability to roll multiple dice at once.*/
#include <iostream>
#include <cstdlib>
#include <time.h>

/*This allows for the code to not require me to put
"std::" in front of commands that otherwise would*/
using namespace std;


int main()
{
    //int variables used for each "die"
    int d4, d6, d8, d10, d12, d20, d100, option;
    //option variable set to zero to be changed by user input later in the while loop
    option = 0;
    //the command used to generate random numbers with the generators in the loop.
    srand(time(NULL));

    while(option < 8){
        //Random generators in loop to keep randomizing "die" rolls
        d4 = rand() % 4 + 1;
        d6 = rand() % 6 + 1;
        d8 = rand() % 8 + 1;
        d10 = rand() % 10 + 1;
        d12 = rand() % 12 + 1;
        d20 = rand() % 20 + 1;
        d100 = rand() % 100 + 1;

        //option used as user input for die choice.
        cout << "Select a die to roll: \n";
        cout << "1) d4 2) d6 3) d8) 4) d10 \n";
        cout << "5) d12 6) d20 7) d100; or any input to End \n";
        cin >> option;

        //switch used for user's input, with the ability to terminate the program.
        switch(option){

        case 1:
        cout << "d4 result: " << d4 << "\n";
        break;

        case 2:
        cout << "d6 result: " << d6 << "\n";
        break;

        case 3:
        cout << "d8 result: " << d8 << "\n";
        break;

        case 4:
        cout << "d10 result: " << d10 << "\n";
        break;

        case 5:
        cout << "d12 result: " << d12 << "\n";
        break;

        case 6:
        cout << "d20 result: " << d20 << "\n";
        break;

        case 7:
        cout << "d100 result: " << d100 << "\n";
        break;

        default:
        cout << "Good Bye!";
        return 0;
    }
    }
};

