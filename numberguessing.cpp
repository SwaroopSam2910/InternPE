#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    srand((unsigned int)time(NULL));
    int number = (rand() % 100) + 1;
    int guess;
    cout << "Guess a number between 1 to 100" << endl;
    do
    {
        cin >> guess;
        if (guess > number)
        {
            cout << "Guess lower" << endl;
        }
        else if (guess < number)
        {
            cout << "Guess high" << endl;
        }
        else
        {
            cout << "You guessed the right number" << endl;
        }

    } while (guess != number);

    return 0;
}