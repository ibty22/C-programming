#include<iostream>
using namespace std;
int main(){
    int originalvalue =100;
    int& refValue =originalvalue;
    int* ptrValue = &originalvalue;

    cout<<"---initial value--- "<< endl;
    cout<<"original value:"<<originalvalue <<endl;
    cout<<"reference value:"    <<refValue <<endl;
    cout <<"ptrvalue points to:" <<*ptrValue<< endl;
    refValue=200;
    cout<<"\n---After setting refValue = 200---" <<endl;
    cout <<"originalValue:" <<originalvalue<< endl;
    cout <<"ptrValue points to:" <<*ptrValue <<endl;

    *ptrValue=300;
    cout<< "\n--- After setting *ptrValue =300---"<< endl;
cout<<"originalValue:"<< originalvalue<<endl;
cout << "refValue:" << refValue << endl;

int anothervalue=500;
ptrValue= &anothervalue;
cout <<"\n --- After pointing ptrValue to anotherValue ---"<< endl;
cout <<"originalValue:"<< originalvalue << endl;
cout <<" ptrValue points to:" << *ptrValue << endl;
return 0;
}


