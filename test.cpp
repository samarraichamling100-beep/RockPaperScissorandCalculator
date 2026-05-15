#include <iostream>
int main ( ){
    double First_Num;
    double Second_Num;
    char OP;
    
    std::cout << "Enter First Number "<< std::endl;
    std::cin >> First_Num;

    std::cout << "Enter Operation(+,-,,/) "<< std::endl;
    std::cin >> OP;

    std::cout << "Enter Second Number "<< std::endl;
    std::cin >> Second_Num;


    if (OP == '+'){
        std::cout << First_Num + Second_Num << std::endl;
    }
    else if (OP == '-'){
        std::cout << First_Num - Second_Num << std::endl;
    }
    else if (OP == '*'){
        std::cout << First_Num * Second_Num << std::endl;
    }
    else if (OP == '/'){
        std::cout << First_Num / Second_Num << std::endl;
    }

    return 0;
}