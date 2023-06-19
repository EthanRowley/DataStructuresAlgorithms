#include "headers/NodeDouble.hpp"

NodeDouble::NodeDouble(int data, NodeDouble* next, NodeDouble* prev)
{
    this->data = data;
    this->next = next;
    this->prev = prev;
}