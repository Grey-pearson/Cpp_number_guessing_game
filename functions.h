#include <iostream>
#include <cstdlib>
using namespace std;

class Game
{
public:
    int guesses_left = 10;
    int max_random_int = 10;
    int random_int;
    int user_guess;

    void generate_randon_int()
    {
        random_int = (rand() % max_random_int) + 1;
        // cout << "debug " << random_int << endl;
    };

    void ask_for_guess()
    {
        cout << "guess a random number between 1 and " << max_random_int << ": ";
        cin >> user_guess;
        // cout << "debug " << user_guess << endl;
        cout << endl;
    }

    void check_guess()
    {
        if (user_guess == random_int)
        {
            cout << "correct guess!!! ive reset your guesses left and multiplied the max range by 10" << endl;
            guesses_left = 10;
            max_random_int *= 10;
            generate_randon_int();
        }
        else if (user_guess > random_int)
        {
            guesses_left -= 1;
            cout << "too hight! you have " << guesses_left << " left";
        }
        else
        {
            guesses_left -= 1;
            cout << "too low! you have " << guesses_left << " left" << endl;
        }
    }

    bool check_guesses_left()
    {
        if (guesses_left > 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};