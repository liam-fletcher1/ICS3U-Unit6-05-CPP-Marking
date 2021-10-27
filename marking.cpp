// Copyright (c) 2021 Liam Fletcher All rights reserved.

// Created by: Liam Fletcher
// Created on: Oct 2021
// This program uses a list to find the average mark

#include <iostream>
#include <list>


float Average(std::list<int> listNumbers) {
    // This program uses a list to find the average mark

    // process
    int total = 0;
    float average = 0;
    int numbs = 0;

    for (int numb : listNumbers) {
        total = total + numb;
        numbs = numbs + 1;
    }

    average = total / numbs;

    return average;
}


int main() {
    // This program uses a list to find the average mark
    std::list<int> listNumbers;
    int mark = 0;
    int average;
    int count = 0;

    std::cout << "Please enter 1 mark at a time. Enter -1 to end."<< std::endl;
    std::cout << ""<< std::endl;

    while (mark != -1) {
    // input
        std::cout << "What is your mark (as %): " << std::endl;
        std::cin >> mark;
        listNumbers.push_back(mark);
    }
    listNumbers.pop_back();

    average = Average(listNumbers);
    std::cout << "\nThe average is " << average << "%" << std::endl;
    std::cout << "\nDone."<< std::endl;
}
