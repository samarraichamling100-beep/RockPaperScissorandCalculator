#include <iostream>
#include <vector>
#include <random>
#include <chrono>
#include <thread>
#include <string>
#include <algorithm>
#include <cctype>

int main() {
    std::vector<std::string> items = {"ROCK ", "SCISSOR", "PAPER"};
    std::string PlayerChoice;
    std::string EnemyChoice;

    std::cout << "Choose Bewtween Rock Paper Scissors" << std::endl;
    std::cin >> PlayerChoice;

    std::random_device rd;
    std::mt19937 gen(rd());

    std::uniform_int_distribution<> EnemyIndex(0, items.size() - 1);

    int randomIndex = EnemyIndex(gen);
    EnemyChoice = items[randomIndex];
    for (char &c : PlayerChoice) {
        c = toupper(c);
    }

    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "Rock" << std::endl;

    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "Paper" << std::endl;

    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "Scissors" << std::endl;

    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "Shoot" << std::endl;

    std::cout << "PlayerChoosed " << PlayerChoice << std::endl;
    std::cout << "EnemyChoosed: " << EnemyChoice << std::endl;


    if(PlayerChoice != "ROCK" && PlayerChoice != "PAPER"  && PlayerChoice != "SCISSORS"){
        std::cout << "INVAID CHOICE PLEASE TRY AGAIN";
    }

    else if(PlayerChoice == EnemyChoice){
        std::cout << "DRAW" << std::endl;
    }
    else if(PlayerChoice == "SCISSOR" && EnemyChoice == "PAPER"){
        std::cout << "You Win" << std::endl;
    }
    else if(PlayerChoice == "PAPER" && EnemyChoice == "ROCK"){
        std::cout << "You Win" << std::endl;
    }
    else if(PlayerChoice == "ROCK" && EnemyChoice == "SCISSORS"){
        std::cout << "You Win" << std::endl;
    }
    else if(EnemyChoice == "SCISSOR" && PlayerChoice == "PAPER"){
        std::cout << "You Lose" << std::endl;
    }
    else if(EnemyChoice == "PAPER" && PlayerChoice == "ROCK"){
        std::cout << "You Lose" << std::endl;
    }
    else if(EnemyChoice == "ROCK" && PlayerChoice == "SCISSORS"){
        std::cout << "You Lose" << std::endl;
    }
    else if(PlayerChoice != "SCISSOR" || "PAPER" || "ROCK"){
        std::cout << "CHOOSE CORRECT OPTION BETWEEN ROCK PAPER SCISSORS";
    }


    return 0;
}