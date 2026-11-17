#include <iostream>
using namespace std;

class DynamicArray {
    int* data;
    int size;
    int capacity;

public:
    DynamicArray(int initialCapacity) {
        if (initialCapacity <= 0) {
            initialCapacity = 1;
        }
        capacity = initialCapacity;
        size = 0;
        data = new int[capacity];
    }

    ~DynamicArray() {
        delete[] data;
    }

    void push_back(int value) {
        if (size == capacity) {
            int newCapacity = capacity * 2;
            int* newData = new int[newCapacity];
            for (int i = 0; i < size; i++) {
                newData[i] = data[i];
            }
            delete[] data;
            data = newData;
            capacity = newCapacity;
        }
        data[size] = value;
        size++;
    }

    void display() const {
        cout << "array (size: " << size << ", capacity: " << capacity << "): ";
        for (int i = 0; i < size; i++) {
            cout << data[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    DynamicArray arr(2);
    cout << "created dynamic array with capacity 2." << endl;

    arr.push_back(10);
    arr.push_back(20);
    arr.display();

    cout <<"\nadding third element ..." <<endl;
    arr.push_back(30);
    arr.display();
    cout <<"\nadding fourth and fifth element ..." <<endl;
    arr.push_back(40);
    arr.push_back(50);
    arr.display();

    return 0;
}
