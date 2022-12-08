#include <iostream>

//  Test creation of custom function
float add(float a, float b) {
    return a + b;
}

int main()
{
	std::cout << "Hello, world! Woohoo got it!\n" << "C++ could be pretty alright" <<std::endl;

    // Testing defining variable simple
    int number_single = 25;
    std::cout << number_single << std::endl;

    // Testing defining an array
    int numbers_array[] = { 1, 2, 3, 4, 5 };
    std::cout << numbers_array[0] << numbers_array[4] << std::endl;

    // Testing defining a character
    char name[] = "Alec";
    std::cout << "My name is" << name << std::endl;
    
    // Testing a loop
    for (int i = 0; i < 5; i++) {
        if (numbers_array[i] == 3) {
            std::cout << numbers_array[i] << std::endl;
            break;
        }
    }

    // TEsting w/ C++11 standards
    // need to add `-std=c++11` flag to compile with newer stds which includes auto function
    for (auto number : numbers_array) {
        if (number == 3) {
            std::cout << number << std::endl;
            break;
        }
    }
    
    //  Test created function
    std::cout << "The sum of nbrs is" << add(34.94, 2.245) << std::endl;

	return 0;
}
