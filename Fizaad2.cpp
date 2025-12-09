#include<iostream>
using namespace std;
int main()
{
int choice;
const double PI = 3.14159;
cout << "Choose a shape (1-Circle, 2-Rectangle, 3-Triangle): ";
cin >> choice;
switch (choice) {
case 1:{
double radius;
cout << "Enter radius: ";  
cin >> radius;
cout << "Area of Circle: " << PI * radius * radius << endl;
break;
}
case 2:{
double length, width;
cout << "Enter length and width: ";
cin >> length >> width;
cout << "Area of Rectangle: "<< length * width << endl;
break;
}
case 3:{
double base, height;
cout << "Enter base and height: ";
cin >> base >> height;
cout << "Area of Triangle: " << 0.5 * base * height << endl;
break;
}
default:
cout << "Error: Invalid shape choice!" << endl;
}
return 0;
}
