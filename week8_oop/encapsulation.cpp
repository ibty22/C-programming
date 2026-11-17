#include<iostream>
#include<string>
using namespace std;
class student{
    private:
    string name;
    int age;
    public:
    student(string studentName, int studentAge) {
        name= studentName;
        setAge(studentAge);
    }
    void setAge(int newAge) {
        if(newAge > 0 && newAge < 120) {
            age =newAge;
        } else {
            cout <<"error : invalid age! Age must between 1 and 119." << endl;
            age=0;
        }
    }
    string getName() {
        return name;
    }
    int getAge() {
        return age;
    }
};
 
int main () {
    student s1("Alice" , 20 );
    cout <<"student name:" <<s1.getName() << endl;
    cout <<"student Age:" <<s1.getAge()<<endl;
    cout << "\n attemptingto change age to 25..." <<endl;
    s1.setAge(25);
    cout <<"New Age:"<<s1.getAge() <<endl;
    cout <<"\nattempting to change age to -5 ..."<< endl;
    s1.setAge(-5);
    cout <<"Age after invalid attempt:" <<s1.getAge() <<endl;
    return 0;
}


    