#pragma once
#include "NodeSingle.hpp"

class SingleLinkList
{
public:
    SingleLinkList();
    ~SingleLinkList();

    NodeSingle* head;
    NodeSingle* tail;
    int size;

    void insertAtHead(int data);
    void deleteAtHead();
    void insertAtTail1(int data); // O(n)
    void insertAtTail2(int data); // O(1)
    void deleteAtTail();

    // Utility Methods
    void printout();
    void freeLinkedList();
};