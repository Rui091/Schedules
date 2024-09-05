#include "proceso.cpp"
#include <vector>
#include <iostream>
#include <string>
#include <queue>
using namespace std;


class FCFS{
    private:
        queue<Proceso> processes;
        int currentTime;
        int totalWaitingTime;
        int totalTurnaroundTime;
        int totalProcesses;
        int processCount;
        vector<Proceso> processList;
    public:
        FCFS() {
            currentTime = 0;
            totalWaitingTime = 0;
            totalTurnaroundTime = 0;
            totalProcesses = 0;
        }
        void addProcess(Proceso p) {
            processes.push(p);
            totalProcesses++;
        }
        queue<Proceso> getProcesses() {
            return processes;
        }
        void run(){
            while(processes.empty()){
                Proceso p = processes.front();
                p.setStartTime(currentTime);
                currentTime += p.getBurstTime();
                p.setEndTime(currentTime);
                processes.pop();
                int time = (currentTime - p.getArrivalTime() - p.getBurstTime());
                p.setWaitingTime(time);
                totalWaitingTime += time;
                int tat = (currentTime - p.getArrivalTime());
                p.setTurnaroundTime(tat);
                totalTurnaroundTime += tat;
                ++processCount;
            }
        }
        void printResults() {
            cout << "Total Waiting Time: " << totalWaitingTime << endl;
            cout << "Total Turnaround Time: " << totalTurnaroundTime << endl;
            cout << "Average Waiting Time: " << totalWaitingTime / totalProcesses << endl;
            cout << "Average Turnaround Time: " << totalTurnaroundTime / totalProcesses << endl;
        }
        


};