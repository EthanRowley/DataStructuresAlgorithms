#pragma once
#include <vector>
#include <iostream>

class Sorting
{

public:
    Sorting();
    ~Sorting();

    void bubbleSort(std::vector<int> data);
    void selectionSort(std::vector<int> data);
    void insertionSort(std::vector<int> data);

};



