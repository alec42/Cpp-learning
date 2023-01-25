#include <iostream>
#include <ostream>

int main ()
{
    int input_m;
    int input_n;
    int remainder_nb;
    
    std::cout << "Please enter an integer: ";
    std::cin >> input_m;
    std::cout << "Please enter another integer: ";
    std::cin >> input_n;

    while (input_n > 0) {
        remainder_nb = input_m % input_n ;
        input_m = input_n ;
        input_n = remainder_nb ;
    }
    std::cout << input_m << std::endl;
    return 0;
}
