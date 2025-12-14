#include<iostream>
using namespace std;
int main ()
{
string username, password;
cout << "Enter username: ";
cin >> username;
cout << "Enter your password: ";
cin >> password;

string correctUsername = "admin";
string correctPassword = "12345";

if (username == correctUsername && password == correctPassword) {
cout << "Access Granted." << endl;
} else if (username == correctUsername && password == correctPassword) {
cout << "Wrong Password." << endl;
} else {
cout << "User Not Found." << endl;	
}
return 0;
}
