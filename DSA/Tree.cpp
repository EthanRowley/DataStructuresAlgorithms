#include "headers/Tree.hpp"
#include <iostream>

Tree::Tree()
{

    this->root = NULL;
    this->size = 0;
    std::cout << "Empty Tree Created" << std::endl;

}

void Tree::AddNodeAsRoot(int data, std::vector<NodeTree*> children)
{
    if (this->root != NULL)
    {
        std::cout << "Error: Root already set" << std::endl;
    } else 
    {
        NodeTree* newNode = new NodeTree(data, NULL, children);
        this->root = newNode;
    }

}

void Tree::AddNodeAtPosition(NodeTree* node, int data)
{
    std::vector<NodeTree*> children;
    NodeTree* newNode = new NodeTree(data, node, children);
    node->children.push_back(newNode);
}

void Tree::traversePreorder(NodeTree* node)
{
    std::cout << node->data << std::endl;
    for (int i = 0; i < node->children.size(); i++)
    {
        traversePreorder(node->children.at(i));
    }
}

void Tree::traversePostorder(NodeTree* node)
{
    for (int i = 0; i < node->children.size(); i++)
    {
        traversePostorder(node->children.at(i));
    }
    std::cout << node->data << std::endl;
}