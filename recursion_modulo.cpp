#include <algorithm>
#include <iostream>
#include <cmath>

int mod_( int x, int y) {
    if (y == 0) 
        return x ;
    else
        return mod_(y, (int) (x/y)) ;
}

int main() {
    int x_in;
    int y_in;
    std::cout << "Welcome to a recursive modulo function! Please enter a number: ";
    std::cin >> x_in;
    std::cout << "Thank you! Now, please enter a second number by which to divide the first one: ";
    std::cin >> y_in;
    std::cout << mod_(x_in, y_in) << std::endl;
}
