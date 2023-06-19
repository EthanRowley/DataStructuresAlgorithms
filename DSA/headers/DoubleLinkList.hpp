#pragma once
#include "NodeDouble.hpp"


class DoubleLinkList 
{

public:
    DoubleLinkList();

    NodeDouble* head;
    NodeDouble* tail;
    int size;
    
    void insertAtHead(int);
    void insertAtTail(int);
    void deleteAtHead();
    void deleteAtTail();

    void printout();

    void BubbleSort();

};