#include "Sort.h"
#include "BubbleSort.h"
#include <vector>
#include <iostream>

std::vector<int> sort(std::vector<int> list) {
    int listSize = list.size();
    for (int i=0; i<listSize; i++) {
        for (int j=0; j<listSize; j++) {
            if (list[j] > list[j+1]) {
                std::swap(list[j], list[j+1]);
            }
        }
    }

}