#include "kernel.hpp"
#include<iostream>
using namespace std;

int main(){

    // Graph 1
    // Graph g(3);
    // g.addEdge("Marry","Jane",10);
    // g.addEdge("Marry","Dave",40);
    // g.addEdge("Jane","Dave",20);
    // kernelFunction(g);

    // Graph 2
    Graph g(6);
    g.addEdge("Gabe","Bob",30);
    g.addEdge("Gabe","David",10);
    g.addEdge("Fred","Bob",10);
    g.addEdge("Fred","Charlie",30);
    g.addEdge("Fred","David",10);
    g.addEdge("Fred","Ema",10);
    g.addEdge("Bob","Charlie",40);
    g.addEdge("Charlie","David",20);
    g.addEdge("David","Ema",50);
    kernelFunction(g);

    return 0;
}
