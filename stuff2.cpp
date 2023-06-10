#include <iostream>

int main(){
    
    char op;
    double num01;
    double num02;
    double result;

    std::cout << "*************** CALCULATOR ***************\n";

    std::cout << "Enter either (+ - * /) ";
    std::cin >> op;

    std::cout << "Enter #1: ";
    std::cin >> num01;

    std::cout << "Enter #2: ";
    std::cin >> num02;



    switch(op){
        case '+':
            result = num01 + num02;

            std::cout << "Result: " << result << '\n';
            break;
        
        case '-':
            result = num01 - num02;
            std::cout << "Result: " << result << '\n';
            break;

        case '*':
            result = num01 * num02;
            std::cout << "Result: " << result << '\n';
            break;

        case '/':
            result = num01 / num02;
            std::cout << "Result: " << result << '\n';
            break;
    }

    

 
    std::cout << "******************************************\n";
    
    
    return 0;
}