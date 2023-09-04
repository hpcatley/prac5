#include "Sort.h"
#include "QuickSort.h"
#include <vector>
#include <iostream>

std::vector<int> sort(std::vector<int> list) {
    int size = sizeof(list);
    int low = list[0];
    int high = list[size-1];

    int j = low;

    int pivot = high;

    for(int i=0; i<pivot; i++) {
        if (list[i]>list[pivot]) {
            std::swap(list[i],list[pivot]);
        }
    }


}
