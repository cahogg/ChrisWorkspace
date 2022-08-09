#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;


int main()
{
    int d4, d6, d8, d10, d12, d20, d100, option;

    srand(time(NULL));

    d4 = rand() % 4 + 1;
    d6 = rand() % 6 + 1;
    d8 = rand() % 8 + 1;
    d10 = rand() % 10 + 1;
    d12 = rand() % 12 + 1;
    d20 = rand() % 20 + 1;
    d100 = rand() % 100 + 1;
    option = 0;
    while(option < 8){
        cout << "Select a die to roll: \n";
        cout << "1) d4 2) d6 3) d8) 4) d10 \n";
        cout << "5) d12 6) d20 7) d100; or any input to End \n";
        cin >> option;

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

