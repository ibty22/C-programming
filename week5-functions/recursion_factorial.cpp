#include <iostream>
using namespace std;
int factorialrecursive(int n) {
    if (n<= 1)
    return 1;
return n * factorialrecursive(n-1);
}
int factorialTail(int n,int accumulator = 1) {
    if (n <= 1) {
        return accumulator;
    }
    return factorialTail(n - 1, n * accumulator);
}
int main() {
    int num;
    cout << "Enter a number to calculate its factorial: ";
    cin >> num;
    if (num < 0) {
        cout << "Factorial is not defined for negative numbers " <<endl;
        return 1;
    }
    cout <<"\nusing simple recursion:" <<endl;
    cout <<" "<< num <<"! = " << factorialrecursive(num) << endl;
    cout <<"\nusing tail recursion:" <<endl;
    cout <<" "<< num <<"! = " << factorialTail(num) << endl;

    cout <<"\n -- comparison ---" <<endl;
    cout <<"simple recursion: clear ,matches mathematical definition ." <<endl;
    cout <<"tail recursion: more efficient for large n (compiler optimization) ." <<endl;
    return 0;
}
