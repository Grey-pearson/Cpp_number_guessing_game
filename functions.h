#include <iostream>
#include <cstdlib>
using namespace std;

class Game
{
public:
    int guesses_left = 10;
    int max_random_int;
    int random_int;
    int user_guess;

    void generate_randon_int()
    {
        random_int = (rand() % max_random_int) + 1;
        cout << "debug " << random_int << endl;
    };

    void ask_for_guess()
    {
        cout << 'guess a random number between 1 and ' << max_random_int << ": ";
        cin >> user_guess;
        cout << "debug " << user_guess << endl;
        cout << endl;
    }

    void check_guess()
    {
        switch (user_guess - random_int)
        {
            case 
        };
    }
};