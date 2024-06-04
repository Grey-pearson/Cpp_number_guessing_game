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

    while (check_guesses_left() == true)
    {
        cout << "testing" << endl;
    }

    return 0;
}
