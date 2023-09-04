#include "RecursiveBinarySearch.h"
#include "Sort.h"
#include "BubbleSort.h"
#include "QuickSort.h"

#include <string>
#include <iostream>
#include <vector>


int main() {
    std::vector<int> List;
    // Need to take in growing vector, thus size cannot be defined.
    // Take a string as input, and convert it to a vector of characters, back into the List vector.
    std::string stringList;
    std::cout << "Please enter a vector, with the elements separated by a space. ";
    std::cout << "Click enter when complete." << std::endl;
    // Take the whole line as input
    std::getline(std::cin, stringList);
    std::cout << stringList;

    // Convert to vector
    

    // Create a sorting class to sort the list
    Sort sorting;
    std::vector<int> sortedList = sorting.sort(List);

    // Output the list
    for (int i=0; i<sizeof(sortedList); i++)
        std::cout << sortedList[i];
    return 0;

}