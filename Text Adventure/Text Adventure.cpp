/* A text adventure I'm using to practice c++ with*/

#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main(){

    //Variables
    int glory, subtly, effeciency, kills;
    string name;
    glory = 0;
    subtly = 0;
    effeciency = 0;
    kills = 0;

    //Intro
    cout << "You are an Ilthressian; an almost human being born beneath the surface of the known world.\n";
    cout << "Your's is a people of nigh-superhuman strength, but are born without eyes.\n";
    cout << "You and the rest of your people are blessed with the gift your draconic lord; Ilthrain.\n";
    cout << "You feel the subtlest of vibrations that line the caverns of your subterranean domain.\n";
    cout << "As all with all Ilthressians, you were given a name by the warden of your colony.\n";
    cout << "What is your name? ";
    cin >> name;

    cout << name << ", you have finally come of age within your colony as a warrior. You must prove\n";
    cout << "that you are capable of handling a fledging nest of Narthu, your people's greatest enemy, alone.\n";
    cout << "You currently stand before a tunnel that hums the sickening droning of those filthy insects.\n";
    cout << "A soldier spews sickening acid over your being, but your armor is made of a nigh-invulneralbe\n";
    cout << "metal known as Ilthium. You swing your mighty blade, of which dwarfs an average human in size,\n";
    cout << "and split the foul pest in twain. ";
    kills++;
    cout << kills << " Kill\n";
}
