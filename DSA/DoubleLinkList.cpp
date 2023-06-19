#include "headers/DoubleLinkList.hpp"
#include "iostream"


DoubleLinkList::DoubleLinkList()
{
    this->head = NULL;
    this->tail = NULL;
    this->size = 0;
}

void DoubleLinkList::insertAtHead(int data)
{
    if (size == 0)
    {
        NodeDouble* newNode = new NodeDouble(data, NULL, NULL);
        this->head = newNode;
        this->tail = newNode;
        size++;
    } else {
        NodeDouble* newNode = new NodeDouble(data, this->head, NULL);
        newNode->next = this->head;
        this->head->prev = newNode;
        this->head = newNode;
        size++;
    }
}

void DoubleLinkList::printout()
{
    std::cout << "Head: " << this->head->data << std::endl;
    std::cout << "Tail: " << this->tail->data << std::endl;
    std::cout << "Size: " << this->size << std::endl;

    NodeDouble* temp = this->head;
    while (temp != NULL)
    {
        std::cout << temp->data << std::endl;
        temp = temp->next;
    }

    std::cout << "------ Memory Addresses --------" << std::endl;

    temp = this->head;
    while (temp != NULL)
    {   
        std::cout << temp->prev << " <- " << temp->data << " -> " << temp->next << std::endl;
        temp = temp->next;
    }

    std::cout << "--------------" << std::endl;
    
}

void DoubleLinkList::insertAtTail(int data)
{
    if (this->size == 0)
    {
        NodeDouble* newItem = new NodeDouble(data, NULL, NULL);
        this->head = newItem;
        this->tail = newItem;
        size++;
    } else
    {
        NodeDouble* newItem = new NodeDouble(data, NULL, this->tail);
        this->tail->next = newItem;
        this->tail = this->tail->next;
        size++;
    }
}

void DoubleLinkList::deleteAtHead()
{
    // Delete head of list
    NodeDouble* tmpHead = this->head;
    this->head = this->head->next;
    delete tmpHead;
    size--;
}

void DoubleLinkList::deleteAtTail()
{
    // Delete tail of list
    NodeDouble* tmpTail = this->tail;
    this->tail = this->tail->prev;
    this->tail->next = NULL;
    delete tmpTail;
    size--;
}

void DoubleLinkList::BubbleSort()
{
    NodeDouble* ptr = this->head;
    for (int i = this->size; i > 0; i--)
    {
        ptr = this->head;
        for (int j = 0; j < i; j ++)
        {
            // stops it trying to access a next on the tail
            if (ptr->next == NULL)
            {
                break;
            }
            if (ptr->data > ptr->next->data)
            {
                int temp = ptr->data;
                ptr->data = ptr->next->data;
                ptr->next->data = temp;
            }
            ptr = ptr->next;
        }
        
    }
}