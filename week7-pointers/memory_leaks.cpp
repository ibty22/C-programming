#include <iostream>
using namespace std;
void createLeak(){
    int* ptr=new int(42);
    cout <<"inside function. the value is: "<< *ptr <<endl;
cout <<" memory allocated at address:" <<ptr <<endl;
delete ptr;
}
int main() {
    cout <<"Calling function that leaks memory..." << endl;
    createLeak();
    cout <<"function finished . the memory is now leaked." <<endl;
    return 0;

}
