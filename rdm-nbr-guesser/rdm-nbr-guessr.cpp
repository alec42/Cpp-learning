#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    //  Providing Seed Value for Random Number Generation
    srand((unsigned) time(NULL));

    //  Simulate a Random Number
    int random_nbr = 1 + (rand() % 100);

    //  Take user input
    int input_nbr; 

    while (random_nbr != input_nbr) {
        cout << "Guess a number between 1 and 100!: ";
        cin >> input_nbr;
        if (input_nbr == random_nbr) {
            cout << "You've guess the right number! The number is " << input_nbr << endl;
            break;
        }
        if (input_nbr > random_nbr) {
            cout << input_nbr << " is too high, try lower." << endl;
            continue;
        }
        if (input_nbr < random_nbr) {
            cout << input_nbr << " is too low, try higher." << endl;
            continue;
        }
    }

    return 1;
}
