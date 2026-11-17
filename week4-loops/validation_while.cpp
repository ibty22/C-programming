#include <iostream>
using namespace std;
int main() {
    int number = 0;
    cout <<"Enter a positive number (N):";
    cin >> number;
    while (number < 0) {
        cout<< "invalid! Please enter a positive number (N):";
        cin >> number;
    }
    cout <<"You entered: " << number << endl;
    return 0;
    
}
