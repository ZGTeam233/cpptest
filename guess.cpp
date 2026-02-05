#include <iostream>

int main() {
    int guess = 0;
    int attempts = 0; // 猜测次数
    int password[5] = { 42, 15, 7, 93, 28 }; // 猜数字游戏答案
    int round = 0; // 当前轮数
    int choice;
    std::cout << "Welcome to the Guessing Game!\n";
    std::cout << "I have selected a number between 1 and 100.\n";
    std::cout << "Can you guess what it is ?\n";
    std::cout << "You have seven attempts to guess the correct number.\n";
    while (guess != password[round]) {
        if (attempts < 7) {
            // 允许猜测
            std::cout << "Enter your guess: ";
        }
    }
	return 0;
}