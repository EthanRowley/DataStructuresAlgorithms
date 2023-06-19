#include "headers/Sorting.hpp"
#include <iostream>

void Sorting::bubbleSort(std::vector<int> data)
{
    for (int i = data.size()-1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (data.at(j) > data.at(j+1))
            {
                int temp = data.at(j);
                data.at(j) = data.at(j+1);
                data.at(j+1) = temp;
            }
        }
    }

    // prints out sorted vector
    for (int i = 0; i < data.size(); i++)
    {
        std::cout << data.at(i) << std::endl;
    }
}

void Sorting::selectionSort(std::vector<int> data)
{
    int i, j, greatest;
    for (i = data.size()-1; i > 0; i--)
    {
        greatest = 0;
        for (j = 0; j <= i; j++)
        {
            if (data.at(j) >= data.at(greatest))
            {
                greatest = j;
            }
        }
        if (i != greatest)
        {
            int temp = data.at(i);
            data.at(i) = data.at(greatest);
            data.at(greatest) = temp;
        }
    }
        // prints out sorted vector
    for (int i = 0; i < data.size(); i++)
    {
        std::cout << data.at(i) << std::endl;
    }
}


void Sorting::insertionSort(std::vector<int> data)
{
    for(int j = 1; j < data.size(); j++)
    {
        int temp = data.at(j);
        int i = j;
        while (i > 0 && data.at(i-1) > temp)
        {
            data.at(i) = data.at(i-1);
            i--;
        }
        data.at(i) = temp;
    }
    
    // prints out sorted vector
    for (int i = 0; i < data.size(); i++)
    {
        std::cout << data.at(i) << std::endl;
    }
}


Sorting::Sorting()
{
}

Sorting::~Sorting()
{
}

