#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
const double PI = 3.14159265358979323846;
double areaofcircle(double radius) {
    if (radius <0) {

        cout <<"error: radius cannot be negative." << endl;
        return 0.0;
        
    }
    return PI * radius * radius;
}
double areaofrectangle(double length, double width) {
    if (length <0 || width <0) {
        cout <<"error: length and width cannot be negative." << endl;
        return 0.0;
    }

    return length * width;
}
double areaoftriangle(double base, double height) {
    if (base <0 || height <0) {
        cout <<"error: base and height cannot be negative." << endl;
        return 0.5 * base * height;
    
    }

    return 0.5 * base * height;
}
void  displayMenu() {
    cout <<"\n===== GEOMETRY CALCULATOR =====" << endl;
    cout <<"1. Calculate the Area of a Circle" << endl;
    cout <<"2. Calculate the Area of a Rectangle" << endl;
    cout <<"3. Calculate the Area of a Triangle" << endl;
    cout <<"4. Exit" << endl;
    cout <<"Enter your choice: ";
}
int main(){

    int choice ;
    double radius, length, width, base, height;
    do {
        displayMenu();
        cin >> choice;
        switch (choice) {
            case 1:
                cout <<"Enter the radius of the circle: ";
                cin >> radius;
                cout << fixed << setprecision(2);
                cout <<"Area of Circle: " << areaofcircle(radius) << endl;
                break;
            case 2:
                cout <<"Enter the length and width of the rectangle: ";
                cin >> length >> width;
                cout << fixed << setprecision(2);
                cout <<"Area of Rectangle: " << areaofrectangle(length, width) << endl;
                break;
            case 3:
                cout <<"Enter the base and height of the triangle: ";
                cin >> base >> height;
                cout << fixed << setprecision(2);
                cout <<"Area of Triangle: " << areaoftriangle(base, height) << endl;
                break;
            case 4:
                cout <<"Goodbye!" << endl;
                break;
            default:
                cout <<"Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);
return 0;
}

