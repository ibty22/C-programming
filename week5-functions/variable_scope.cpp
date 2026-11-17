#include <iostream>
using namespace std;

int globalcounter =100;

void displayGlobal() {
    cout << "Inside displayGlobal: globalCounter =" << globalcounter << endl;
}

    void modifyGlobal() {
        globalcounter = 500;
            cout << "Inside modifyGlobal: globalCounter changed to " << globalcounter << endl; 
    }
        void localDemo() {
            int globalcounter = 999;
            cout << "Inside localDemo: globalCounter =" << globalcounter << endl;
        }
            int main(){
                int localcounter = 50;
                cout <<"In main: globalCounter =" << globalcounter << endl;
                cout <<"In main: localCounter =" << localcounter << endl;

            displayGlobal();
            modifyGlobal();
            localDemo();

            cout <<"Back in main: globalcounter =" << globalcounter << endl;

            return 0;
        }
    
