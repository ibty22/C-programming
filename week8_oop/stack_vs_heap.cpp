#include<iostream>
#include<string>
using namespace std;
class Car{
    public:
    string brand;
    string model;
    Car(string m){
        model = m;
        cout <<"Car created:" <<model<<endl;
    }
    ~Car(){
        cout <<"Car destroyed:" <<model<<endl;
    }
};

int main() {
    cout<<"--- creating stack object---"<< endl;
    Car stackCar("Toyota");
    Car* heapCar=new Car("Honda");
    cout <<"Heap car model:" <<heapCar->model <<endl;
    cout << "\n--- end of main function ---" << endl;
    delete heapCar;
    return 0;
}
