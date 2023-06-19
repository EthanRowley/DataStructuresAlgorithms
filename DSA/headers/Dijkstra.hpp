#pragma once
#include <vector>

class Dijkstra{
public:
    Dijkstra();

    void doDijkstra();


    int adjMatrix[4][4] = {{0,0,0,0},
                           {0,0,0,0},
                           {0,0,0,0},
                           {0,0,0,0}};    

};