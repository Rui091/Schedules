#include <iostream>
#include <string>
#include <queue>

using namespace std;

class Proceso {
    private:
        int state;
        int priority;
        int burstTime;
        int arrivalTime;
        int id;
        int waitingTime;
        int turnaroundTime;
        int startTime;
        int endTime;
    public:
        void setState(int s) {
            state = s;
        }
        void setPriority(int p) {
            priority = p;
        }
        void setBurstTime(int b) {
            burstTime = b;
        }
        void setArrivalTime(int a) {
            arrivalTime = a;
        }
        void setId(int i) {
            id = i;
        }
        void setWaitingTime(int w) {
            waitingTime += w;
        }
        void setTurnaroundTime(int t) {
            turnaroundTime += t;
        }
        void setStartTime(int s) {
            startTime = s;
        }
        void setEndTime(int e) {
            endTime = e;
        }
        int getPriority() {
            return priority;
        }
        int getBurstTime() {
            return burstTime;
        }
        int getArrivalTime() {
            return arrivalTime;
        }
        int getId() {
            return id;
        }
        int getWaitingTime() {
            return waitingTime;
        }
        int getTurnaroundTime() {
            return turnaroundTime;
        }
        int getStartTime() {
            return startTime;
        }
        int getEndTime() {
            return endTime;
        }
        int getState() {
            return state;
        }
        Proceso() {
            state = 0;
            priority = 0;
            burstTime = 0;
            arrivalTime = 0;
            id = 0;
            waitingTime = 0;
            turnaroundTime = 0;
            startTime = 0;
            endTime = 0;
        }
        Proceso(int s, int p, int b, int a, int i) {
            state = s;
            priority = p;
            burstTime = b;
            arrivalTime = a;
            id = i;
            waitingTime = 0;
            turnaroundTime = 0;
            startTime = 0;
            endTime = 0;
        }

        





};
