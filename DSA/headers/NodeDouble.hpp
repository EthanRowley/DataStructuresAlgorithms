#pragma once

class NodeDouble
{

public:
    NodeDouble(int, NodeDouble*, NodeDouble*);

    NodeDouble* next;
    NodeDouble* prev;
    int data;

};