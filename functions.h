#include <iostream>
#include <cstdlib>
using namespace std;

int create_random_num(int max)
{
    int new_random = rand() % max + 1;
    return new_random;
}

int check_guess(int guess, int random)
{
    if (guess == random)
    {
        cout << "you guessed correcct!" << endl;
        return 0;
    }
    else if (guess < random)
    {
        cout << "you guessed too low" << endl;
        return 1;
    }
    else
    {
        cout << "you guessed too hight" << endl;
        return 2;
    }
}