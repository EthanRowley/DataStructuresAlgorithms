#include "headers/NodeSingle.hpp"


NodeSingle::NodeSingle(int data, NodeSingle* next)
{
    this->data = data;
    this->next = next;
}