#include "headers/NodeTree.hpp"
#include <vector>


NodeTree::NodeTree(int data, NodeTree* parent, std::vector<NodeTree*> children)
{
    this->data = data;
    this->parent = parent;
    this->children = children;
}