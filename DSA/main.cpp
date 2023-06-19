#include <iostream>
#include <vector>

#include "headers/SingleLinkList.hpp"
#include "headers/DoubleLinkList.hpp"
#include "headers/Sorting.hpp"
#include "headers/Tree.hpp"
#include "headers/Dijkstra.hpp"

int main(){ 

    Dijkstra* dijkstraObject = new Dijkstra();

    dijkstraObject->doDijkstra();

    return 0;
}


