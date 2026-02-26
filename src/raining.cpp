#include "raining.hpp"
#include <algorithm>
#include <iostream>

void addAndSort(std::vector<std::string>& businesses, const std::string& name) {
    businesses.push_back(name);
    std::sort(businesses.begin(), businesses.end());
}

void printBusinesses(const std::vector<std::string>& businesses) {
    if (businesses.size() == 1) {
        std::cout << "Your business is:\n";
    } else {
        std::cout << "Your businesses are:\n";
    }

    for (const std::string& b : businesses) {
        std::cout << "   " << b << "\n";
    }
}