# include <iostream>
using namespace std;

double addition(double a, double b) {
    double result ;
    result = a + b ;
    return result ;
}
int main() {
    double nbr_in_1 ;
    double nbr_in_2 ;
    cout << "Welcome to this program! We can add 2 numbers (including those with decimals) together!\n" ;
    cout << "Please enter the first number to add: " ;
    cin >> nbr_in_1 ;
    cout << "Please enter the second number to add: " ;
    cin >> nbr_in_2 ;
    
    cout << "The sum is: " << addition(nbr_in_1, nbr_in_2) << endl;
    return 0;
}
