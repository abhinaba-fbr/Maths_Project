#include "kernel.hpp"
#include<iostream>
using namespace std;

int main(){

    // // Graph 1
    // Graph g(3);
    // g.addEdge("Marry","Jane",10);
    // g.addEdge("Marry","Dave",40);
    // g.addEdge("Jane","Dave",20);
    // kernelFunction(g);

    // // Graph 2
    // Graph g(6);
    // g.addEdge("Gabe","Bob",30);
    // g.addEdge("Gabe","David",10);
    // g.addEdge("Fred","Bob",10);
    // g.addEdge("Fred","Charlie",30);
    // g.addEdge("Fred","David",10);
    // g.addEdge("Fred","Ema",10);
    // g.addEdge("Bob","Charlie",40);
    // g.addEdge("Charlie","David",20);
    // g.addEdge("David","Ema",50);
    // kernelFunction(g);

    // Graph 3
    Graph g(5);
    g.addEdge("Abhinaba","Rahul",20);
    g.addEdge("Abhinaba","Priyasa",20);
    g.addEdge("Abhinaba","Rohit",50);
    g.addEdge("Swati","Abhinaba",10);
    g.addEdge("Priyasa","Rahul",10);
    g.addEdge("Rahul","Rohit",10);
    g.addEdge("Swati","Rohit",40);
    g.addEdge("Swati","Rahul",30);
    kernelFunction(g);
    cout<<endl;
    kernelFunction(g);
    cout<<endl;
    kernelFunction(g);

    return 0;
}
