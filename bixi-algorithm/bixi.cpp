#include <iostream>
#include <cctype>
using namespace std;

bool membership_question() {
    cout << "Welcome to the Bixi Bike Sharing App!" << endl;

    cout << "Do you have a membership to Bixi? (Y/N)" << endl;
    while(true){
        //string input_membership;
        //getline(cin, input_membership);
        char input_membership;
        cin >> input_membership;
        if (isblank(input_membership)) continue;
        switch (toupper(input_membership)) {
            case 'Y': return true;
            case 'N': return false;
        }
        cout << "That's nice however I'm just asking you if you have a Bixi membership. So, yes or no?" << endl;
    }
}

bool bike_choice() {
    cout << "Now, would you like an electric (25 cents/minute) or regular (10 cents/minute) bike? (E/R)" << endl;

    while(true){
        //string input_bike_choice;
        //getline(cin, input_bike_choice);
        char input_bike_choice;
        cin >> input_bike_choice;
        if (isblank(input_bike_choice)) continue;
        switch (toupper(input_bike_choice)) {
            case 'E': return true;
            case 'R': return false;
        }
        cout << "Come on man, just answer E or R :(" << endl;
    }
}

int main() {
    int deposit_fee;
    double base_rate;
    if (membership_question()) {
        cout << "Given you're a member there isn't any base rate fee! Thanks for subscribing :)" << endl;
        deposit_fee = 0;
        base_rate = 0.00;
    }
    else {
        cout << "Given you aren't a member, there is a base rate of 50cents for the rental" << endl;
        cout << "There is also a deposit of 100$ (per bike) that will be returned within 10 business days" << endl;
        deposit_fee = 100;
        base_rate = 0.50;
    }

    double cost_per_minute;
    if (bike_choice()) {
        cost_per_minute = 0.25;
    }
    else {
        cost_per_minute = 0.10;
    }

    cout << "Now, how long (in minutes) would you like to ride for?" << endl;
    int duration_ride;
    cin >> duration_ride;
    while(cin.fail()) {
        cout << "Please enter a number bro";
        cin.clear();
        cin.ignore(256, '\n');
        cin >> duration_ride;
    }
    cout << "Great! You'll be riding for " << duration_ride << " minutes" << endl;

    const double rental_cost = deposit_fee + base_rate + duration_ride * cost_per_minute;
    cout << "Your cost of rental is " << rental_cost << endl;

    return 0;
}
