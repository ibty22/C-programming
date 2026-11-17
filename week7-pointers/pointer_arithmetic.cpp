#include <iostream>
using namespace std;
int main( ){
    int numbers[5]={10,20,30,40,50};
    int*ptr =numbers;
    cout<<"array elements accessed via pointer arithmetic:" <<endl;
    for (int i=0 ; i<5 ; i++){
        cout<<"value:"<<*ptr <<endl;
        ptr++;
    }
        ptr=numbers;
        cout<<"\naccessing using offset arithmetic :" <<endl;
        for (int i= 0; i<5 ;i++) {
            cout <<"index" <<i<<"has value:" <<*(ptr + i) <<endl;
        }
        return 0;
    }
