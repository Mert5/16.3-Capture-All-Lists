#include <iostream>

// Reference => freeCodeCamp.org

int main(){

    // Capture everything by value
    /*
    int value1 {55};

    auto func1 = [=](){
        std::cout << "Inner value of value1 is : " << value1 << " and the address of it is : " << &value1 << std::endl;
        std::cout << std::endl;
    };

    for(size_t i{0}; i < 5 ; i++){
        std::cout << "Outer value of value1 is : " << value1 << " and the address of it is : " << &value1 << std::endl;
        func1();
        value1++;
    }
    */


    // Capture everything by reference
    /*
    int value2 {55};

    auto func2 = [&](){
        std::cout << "Inner value of value1 is : " << value2 << " and the address of it is : " << &value2 << std::endl;
        std::cout << std::endl;
    };

    for(size_t j{0}; j < 5 ; j++){
        std::cout << "Outer value of value1 is : " << value2 << " and the address of it is : " << &value2 << std::endl;
        func2();
        value2++;
    }
    */


    // Play a little        // so you can reach everything by the reference.
    int value3 {45};
    int value4 {49};

    auto func3 = [&](){
        std::cout << "Inner value3 is : " << value3 << " and value4 is : " << value4 << std::endl;
        std::cout << "Inner total of value3 + value4 is : " << value3 + value4 << std::endl;
        std::cout << std::endl;
    };

    for(size_t i{0}; i < 5 ; i++){
        std::cout << "Outer value3 is : " << value3 << " and the value4 is : "<< value4 << std::endl;
        func3();
        value3++;
        value4++;
    }

    return 0;
}