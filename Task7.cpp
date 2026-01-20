#include<iostream>
using namespace std;
int main()
{
	// Predefined test scores
	double score1 = 85.5, score2 = 99.75, score3 = 88.25;
	// calculate average
	double average  = (score1 + score2 + score3) / 3;
	// Show result (2 decimal places)
	cout << "Average Score: " << average << endl;
	return 0;
}
