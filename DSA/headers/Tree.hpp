#pragma once
#include "NodeTree.hpp"

class Tree
{
public:

    NodeTree* root;
    int size;

    Tree();
    ~Tree();

    void AddNodeAsRoot(int data, std::vector<NodeTree*> children);
    void AddNodeAtPosition(NodeTree* node, int data);

    void traversePreorder(NodeTree* node);
    void traversePostorder(NodeTree* node);

};