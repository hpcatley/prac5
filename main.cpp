#include "RecursiveBinarySearch.h"
#include "Sort.h"
#include "BubbleSort.h"
#include "QuickSort.h"

#include <string>
#include <iostream>
#include <vector>


int main() {
    // Take a string as input, and convert it to a vector of characters, back into the List vector.
    std::string stringList;
    std::cout << "Please enter a vector, with the elements separated by a space. ";
    std::cout << "Click enter when complete." << std::endl;
    // Take the whole line as input
    std::getline(std::cin, stringList);
    
    // Convert to character array (this bit helped from https://www.geeksforgeeks.org/cpp-convert-string-to-integer-vector/)
    const char* charList = stringList.c_str();

    // Initialise vector and add converted characters
    std::vector<int> List;
    for (int i=0; i<sizeof(charList); i++) {
        List.push_back(atoi(charList));
    }
    
    
    for (int i=0; i<sizeof(List); i++) {
        std::cout << List[i] << " ";
    }
    


    return 0;

}