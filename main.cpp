#include <iostream>
#include <string>
#include <vector>
#include "src/raining.hpp"

int main() {
    std::vector<std::string> businesses;
    std::string name;
    std::string answer;

    std::cout << "Welcome to the Business Sorting Program!\n";

    while (true) {
        std::cout << "\nPlease enter the name of a business: ";
        std::getline(std::cin, name);

        addAndSort(businesses, name);
        printBusinesses(businesses);

        std::cout << "\nAnother business? ";
        std::getline(std::cin, answer);

        if (answer != "y" && answer != "Y" && answer != "yes" && answer != "Yes") {
            break;
        }
    }

    std::cout << "\nThank you for using the Business Sorting Program!\n";

    return 0;
}