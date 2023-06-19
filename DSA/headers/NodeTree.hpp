#pragma once
#include <vector>

class NodeTree
{

public:
    NodeTree(int, NodeTree*, std::vector<NodeTree*>);

    int data;
    NodeTree* parent;
    std::vector<NodeTree*> children;


};