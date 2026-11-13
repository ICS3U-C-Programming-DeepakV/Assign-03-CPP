// Copyright (c) 2026 Deepak V rights reserved
// Created by: Deepak V
// Date: Nov. 12, 2026
// This program is about converting letters

#include <iostream>
#include <string>

const char UPPERCASE[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
const char LOWERCASE[] = "abcdefghijklmnopqrstuvwxyz";

int main() {
    std::string user_letter;

    std::cout << "Enter a single letter: ";
    std::cin >> user_letter;

    int counter = 0;
    bool found_letter = false;

    if (user_letter.length() != 1) {
        std::cout << "Please enter only one letter." << std::endl;
    } else {
        while (counter < 26) {
            if (user_letter[0] == UPPERCASE[counter]) {
                std::cout << user_letter << " is uppercase." << std::endl;
                std::cout << "Converted to lowercase: \n"
                          << LOWERCASE[counter] << std::endl;
                found_letter = true;
            } else if (user_letter[0] == LOWERCASE[counter]) {
                std::cout << user_letter << " is lowercase." << std::endl;
                std::cout << "Converted to uppercase: \n"
                          << UPPERCASE[counter] << std::endl;
                found_letter = true;
            }

            counter++;
        }

        if (found_letter == false) {
            std::cout << "Invalid character." << std::endl;
        }
    }

    return 0;
}
