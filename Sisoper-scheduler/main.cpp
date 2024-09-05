#include "FCFS.cpp"
#include "proceso.cpp"
#include <vector>
#include <iostream>
#include <string>
#include <queue>
using namespace std;


int main(){
    Proceso p1(0, 1, 10, 0, 1);
    Proceso p2(0, 2, 5, 0, 2);
    Proceso p3(0, 3, 8, 0, 3);
    Proceso p4(0, 4, 7, 0, 4);
    Proceso p5(0, 5, 6, 0, 5);
    FCFS fcfs;
    fcfs.addProcess(p1);
    fcfs.addProcess(p2);
    fcfs.addProcess(p3);
    fcfs.addProcess(p4);
    fcfs.addProcess(p5);
    fcfs.run();
    fcfs.printResults();
    return 0;
}