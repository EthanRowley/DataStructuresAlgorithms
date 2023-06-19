#include "headers/SingleLinkList.hpp"
#include "headers/NodeSingle.hpp"
#include <iostream>


SingleLinkList::SingleLinkList()
{
    std::cout << "Single Link List created" << std::endl;
    this->head = NULL;
    this->tail = NULL;
    this->size = 0;
}

SingleLinkList::~SingleLinkList()
{
    std::cout << "Destructor called" << std::endl;
}


void SingleLinkList::insertAtHead(int data)
{
    // first element
    if (this->size == 0)
    {
        NodeSingle* newNode = new NodeSingle(data, NULL);
        newNode->next = this->head;
        this->head = newNode;
        this->tail = this->head;
        this->size++;
    } else {
        NodeSingle* newNode = new NodeSingle(data, NULL);
        newNode->next = this->head;
        this->head = newNode;
        this->size++;
    }
}

void SingleLinkList::deleteAtHead()
{
    NodeSingle* temp = this->head;
    this->head = head->next;
    delete temp;
    this->size--;
}

void SingleLinkList::printout()
{
    NodeSingle* temp = this->head;
    while(temp != NULL)
    {
        std::cout << temp->data << std::endl;
        temp = temp->next;
    }
    std::cout << "------ DATA -----" << std::endl;
    std::cout << "Tail: " << this->tail->data << std::endl;
    std::cout << "Head: " << this->head->data << std::endl;
    std::cout << "Size: " << this->size << std::endl;
    std::cout << "-----------" << std::endl;
}

// Method is O(n) 
void SingleLinkList::insertAtTail1(int data)
{
    NodeSingle* newNode = new NodeSingle(data, NULL);
    NodeSingle* navElement = this->head;

    // Find end of list
    while (navElement->next != NULL)
    {
        navElement = navElement->next; 
    }

    // Last element now points to new node
    navElement->next = newNode;
    this->tail = newNode;
    this->size++;
}

// Method is O(1)
void SingleLinkList::insertAtTail2(int data)
{
    NodeSingle* newNode = new NodeSingle(data, NULL);
    
    // use tail to add new node
    this->tail->next = newNode;
    this->tail = newNode;
    this->size++;
}

void SingleLinkList::deleteAtTail()
{
    NodeSingle* navNode = this->head;
    while(navNode->next->next != NULL)
    {
        navNode = navNode->next;
    }
    this->tail = navNode;
    delete this->tail->next; // remove old tail from memory

}

void SingleLinkList::freeLinkedList()
{
    // delete entire linked list from memory
}