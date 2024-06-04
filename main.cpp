#include <iostream>
#include <cstdlib>
#include "functions.h"
using namespace std;

Game game;

int main()
{
    cout << "Welcome To guessing game with mike myers." << endl;
    cout << "Im going to giv you a nunber between 1 and 10" << endl;
    cout << "and you have to guess the right number in 10 guesses or less." << endl;
    cout << "Every time you get it right ill increase the high end of the range by x10" << endl;

    while (game.check_guesses_left() == true)
    {
        game.ask_for_guess();
        game.check_guess();
    }

    return 0;
}
