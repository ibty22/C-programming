#include <iostream>
using namespace std;
void swapbyvalue(int a, int b) {
cout<< "inside function - before swap :a = "<< a <<" ,b =" <<b << endl;
int temp =a;
a = b;
b= temp;
cout<<"inside function - After swap: a=" <<a<< ",b=" <<b<<endl;
}
int main () {
    int x=10;
    int y=20;
    cout << "Before calling swapByvalue:" <<endl;
    cout <<"x=" <<x<< ",y=" <<y<< endl;
    swapbyvalue(x,y);
    cout <<"After calling swapByvalue:" <<endl;
    cout <<"x=" <<x<<" ,y=" <<y<<endl;
    cout <<"\nexplanation:The function received COPIES of x and y." <<endl;
    cout <<"Changes made inside the function do not affect the originals."<< endl;
    return 0;
}

