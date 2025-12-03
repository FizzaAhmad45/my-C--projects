#include<iostream>
using namespace std;
int main()
{
	char signal;
	cout << "Enter signal colour (R/G/Y): ";
	cin >> signal;
	if (signal == 'R') cout << "Stop\n";
	if (signal == 'G') cout << "Go\n";
	if (signal == 'S') cout << "Slow Down\n";
	return 0;
}
