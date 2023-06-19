#pragma once

class NodeSingle
{
public:
    NodeSingle(int, NodeSingle*);
    int data;
    NodeSingle* next;

    // Methods
    NodeSingle* getNext(){
        return this->next;
    }

    int getData(){
        return this->data;
    }

    void setData(int data){
        this->data = data;
    }

    void setNext(NodeSingle* next){
        this->next = next;
    }
};