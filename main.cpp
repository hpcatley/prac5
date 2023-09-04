#include "RecursiveBinarySearch.h"
#include "Sort.h"
#include "BubbleSort.h"
#include "QuickSort.h"

#include <string>
#include <iostream>
#include <vector>
#include <sstream>


int main() {
    std::string stringList;
    std::getline(std::cin, stringList);
    std::istringstream iss(stringList); // asked someone in class to get help with the vector input, 
                                        // but I forgot to get their name. This is the only thing I asked help
                                        // from someone with.
    int n;
    std::vector<int> intList;
    while (iss >> n) {
        intList.push_back(n);
    }

    // Use quick sort to sort array, then use binary
    // search to determine if 1 is in the array.

    // Using quick sort.
    QuickSort sorting;
    std::vector<int> sortedList = sorting.sort(intList);
    
    // Using binary search
    RecursiveBinarySearch searching;
    bool inList = searching.search(sortedList,1);

    if(inList == true) {
        std::cout << "true" << std::endl;
    }
    else {
        std::cout << "false" << std::endl;
    }

    for (int i=0; i<sizeof(sortedList); i++) {
        std::cout << " " << sortedList[i];
    }


    return 0;

}