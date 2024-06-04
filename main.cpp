#include <iostream>
#include <cstdlib>
#include "functions.h"
using namespace std;

int main()
{
    cout << "Welcome To guessing game with mike myers." << endl;
    cout << "Im going to giv you a nunber between 1 and 10" << endl;
    cout << "and you have to guess the right number in 10 guesses or less." << endl;
    cout << "Every time you get it right ill increase the high end of the range by x10" << endl;

    // set up variables
    int start = 0;
    int end = 10;
    int guesses = 10;
    int user_guess;
    int random_num = create_random_num(end);

    while (guesses > 0)
    {

        cout << "guess your number between 1 and " << end << ": ";
        cin >> user_guess;

        switch (check_guess(user_guess, random_num))
        {
        case 0:
            guesses = 10;
            end *= 10;
            random_num = create_random_num(end);
            cout << "ive increated the max range of random number to: " << end << endl;
            cout << "you have " << guesses << " left" << endl;
        case 1:
            guesses -= 1;
            cout << "you have " << guesses << " left" << endl;
        case 2:
            guesses -= 1;
            cout << "you have " << guesses << " left" << endl;
        }
    }
    // create case after while for if player loses

    return 0;
}
