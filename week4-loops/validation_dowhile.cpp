#include <iostream>
using namespace std;
int main() {
    int number =0;
    do {
        cout <<"Enter a positive number (N):";
        cin >> number;
    } while (number < 0);
    cout <<"You entered: " << number << endl;
    return 0;
   
}