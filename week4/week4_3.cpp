#include<iostream>
#include<string>
using namespace std;
#define max 20

int quene[max];
int front=-1, rear=-1;
void enqueue(int queue[], int val){
    if(rear == max -1 ) cout << "overflow";
    else {
        if(front == -1 && rear == -1) front = rear = 0;
        ++rear; 
        queue[rear] = val;
    }
}
int dequeue(int queue[]){
    if(front == -1 || front > rear){
        cout << "underflow";
        return -1;
    }
    else{
        int val = queue[front];
        ++front;
        if(front > rear) front = rear = -1;
        return val;
    }
}
void display(int queue[]){
    if(front == -1 || front > rear)
        cout << "quene is empty";
    else {
        for(int i = front; i <= rear; i++)
            cout << quene[i];
    }
}

main(){
    int n = 10;
    enqueue(quene,1);
    for (int i = 1; i <= n; ++i){
        string s1 = to_string(dequeue(quene));
        cout << s1 << " ";
        string s2 = s1;
        s1 = s1 + '0';
        s2 = s2 + '1';
        enqueue(quene, atoi(s1.c_str()));
        enqueue(quene, atoi(s2.c_str()));
    }
    display(quene);

}