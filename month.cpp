// Copyright (c) 2021 Michael Zagon All rights reserved

// Created by: Michael Zagon
// Created on: September 2021
// This program tells a user what month is represented by their number

#include <iostream>

int main() {
    // This function determines what month is represented by the user's number
    std::string month_number;
    int month_as_int;

    // Input
    std::cout << "Enter the number of a month 1-12: ";
    std::cin >> month_number;

    month_as_int = atoi(month_number.c_str());

    // Process and Output
    switch (month_as_int) {
        case 1 :
        std::cout << "January" << std::endl;
            break;
        case 2 :
        std::cout << "February" << std::endl;
            break;
        case 3 :
        std::cout << "March" << std::endl;
            break;
        case 4 :
        std::cout << "April" << std::endl;
            break;
        case 5 :
        std::cout << "May" << std::endl;
            break;
        case 6 :
        std::cout << "June" << std::endl;
            break;
        case 7 :
        std::cout << "July" << std::endl;
            break;
        case 8 :
        std::cout << "August" << std::endl;
            break;
        case 9 :
        std::cout << "September" << std::endl;
            break;
        case 10 :
        std::cout << "October" << std::endl;
            break;
        case 11 :
        std::cout << "November" << std::endl;
            break;
        case 12 :
        std::cout << "December" << std::endl;

        std::cout << "\nDone. " << std::endl;
    }
}
