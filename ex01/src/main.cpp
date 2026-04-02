/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaeda <kmaeda@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 13:46:59 by kmaeda            #+#    #+#             */
/*   Updated: 2026/04/02 14:52:47 by kmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../include/iter.hpp"

// Functions to use with iter
void printInt(int &n) {
    std::cout << n << " ";
}

void printDouble(double &d) {
    std::cout << d << " ";
}

void printString(std::string &s) {
    std::cout << s << " ";
}

void increment(int &n) {
    n += 1;
}

int main() {
    std::cout << "=== Test 1: Integer array (print) ===" << std::endl;
    int arrInt[5] = {1, 2, 3, 4, 5};
    ::iter(arrInt, 5, printInt);
    std::cout << std::endl << std::endl;

    std::cout << "=== Test 2: Double array (print) ===" << std::endl;
    double arrDouble[4] = {3.14, 2.71, 1.41, 0.577};
    ::iter(arrDouble, 4, printDouble);
    std::cout << std::endl << std::endl;

    std::cout << "=== Test 3: String array (print) ===" << std::endl;
    std::string arrString[3] = {"apple", "banana", "cherry"};
    ::iter(arrString, 3, printString);
    std::cout << std::endl << std::endl;

    std::cout << "=== Test 4: Modify array elements (increment) ===" << std::endl;
    int arrMod[5] = {10, 20, 30, 40, 50};
    std::cout << "Before: ";
    ::iter(arrMod, 5, printInt);
    std::cout << std::endl;

    iter(arrMod, 5, increment);

    std::cout << "After:  ";
    iter(arrMod, 5, printInt);
    std::cout << std::endl;
    
    return 0;
}
