#include <iostream>
using namespace std;
const int MAX_SIZE = 100;
class Queue {
private:
    int arr[MAX_SIZE];
    int front;
    int rear;
public:
    Queue(){ // Empty Queue
        front = -1;
        rear = -1;
    }
    bool isFull(){
        return rear == MAX_SIZE -1;
    }
    bool isEmpty(){
        return (front == -1 && rear == -1);
    }
    void enqueue(int item){
        if ((isFull())){
            cout << "Queue is full." << endl;
        }
        if (isEmpty()){
            front = rear = 0;
        } else{
            rear++;
        }
        arr[rear] = item;
        cout << "Enqueued item: " << item << endl;
    }
    void dequeue(){
        if (isEmpty()){
            cout << "Queue is empty." << endl;
        }
        else if (front == rear){
            front = rear = -1;
        } else{
            front++;
        }
    }
    int frontElement(){
        if (isEmpty()){
            cout << "Queue is empty." << endl;
            return -1;
        }
        return arr[front];
    }
    int backElement(){
        if (isEmpty()){
            cout << "Queue is empty." << endl;
            return -1;
        }
        return arr[rear];
    }
    void display(){
        for (int i = front; i <= rear; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    int size(){
        return rear+1;
    }
};
int main() {
    Queue queue;
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/ sizeof(arr[0]);
    for (int i = 0; i < size; ++i) {
        queue.enqueue(arr[i]);
    }
    queue.display();
    cout << "Size: " << queue.size() << endl;
    queue.dequeue();
    queue.display();
    return 0;
}
