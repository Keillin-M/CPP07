/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaeda <kmaeda@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 13:46:59 by kmaeda            #+#    #+#             */
/*   Updated: 2026/04/02 15:49:59 by kmaeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

/*int main() { // Output: Value of *a: 0
    int* a = new int();  

    std::cout << "Value of *a: " << *a << std:: endl;
    delete a; 

    return 0;
}*/

int main() {
    std::cout << "=== Test 1: Integer array ===" << std::endl;
    Array<int> intArr(5);
    for (unsigned int i = 0; i < intArr.size(); i++)
        intArr[i] = (i + 1) * 10;

    std::cout << "Values: ";
    for (unsigned int i = 0; i < intArr.size(); i++)
        std::cout << intArr[i] << " ";
    std::cout << std::endl;

    std::cout << std::endl << "=== Test 2: Double array ===" << std::endl;
    Array<double> doubleArr(4);
    doubleArr[0] = 3.14;
    doubleArr[1] = 2.71;
    doubleArr[2] = 1.41;
    doubleArr[3] = 0.577;

    std::cout << "Values: ";
    for (unsigned int i = 0; i < doubleArr.size(); i++)
        std::cout << doubleArr[i] << " ";
    std::cout << std::endl;

    std::cout << std::endl << "=== Test 3: String array ===" << std::endl;
    Array<std::string> strArr(3);
    strArr[0] = "apple";
    strArr[1] = "banana";
    strArr[2] = "cherry";

    std::cout << "Values: ";
    for (unsigned int i = 0; i < strArr.size(); i++)
        std::cout << strArr[i] << " ";
    std::cout << std::endl;

    std::cout << std::endl << "=== Test 4: Modify array elements (increment integers) ===" << std::endl;
    std::cout << "Before: ";
    for (unsigned int i = 0; i < intArr.size(); i++)
        std::cout << intArr[i] << " ";
    std::cout << std::endl;

    for (unsigned int i = 0; i < intArr.size(); i++)
        intArr[i] += 1;

    std::cout << "After:  ";
    for (unsigned int i = 0; i < intArr.size(); i++)
        std::cout << intArr[i] << " ";
    std::cout << std::endl;

    std::cout << std::endl << "=== Test 5: Bounds checking ===" << std::endl;
    try {
        int x = intArr[10]; // Out-of-bounds access
        (void)x;
    } catch (std::exception &e) { 
        std::cout << "Exception: " << e.what() << std::endl;
    }

    return 0;
}