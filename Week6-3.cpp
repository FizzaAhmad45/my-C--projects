#include<iostream>
using namespace std;
int main()
{
	string username, password, role;
	
	cout << "Enter username: ";
	cin >> username;
	cout << "Enter password: ";
	cin >> password;
	
	// Simple hardcoded credentials for demo
	if(username == "admin" && password == "admin123") role = "Admin";
	else{
	cout << "Invalid credentials!\n";
	return 0;
}
	cout << "Login successful! Role: " << role << "\n";
	if(role == "Admin"){
	cout << "Access Level: Full access to the system.\n";
	}else if (role == "Guest") {
	cout << "Access Level: Read-only access.\n";
	}else {
	cout << "Access Level: Custom permissions.\n";
	}
	return 0;
	
}
