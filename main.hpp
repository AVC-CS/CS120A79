#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

void makeVector(vector<int> &);
void insertVector(vector<int> &, int);
int deleteVector(vector<int> &, int);

int getInput(void);
void printVector(vector<int>);

void makeVector(vector<int> &number)
{
	srand(time(0));
	for (int i = 0; i < number.size(); i++)
		number[i] = random() % 20;
	sort(number.begin(), number.end());
}
void insertVector(vector<int> &number, int usernum)
{
}
int deleteVector(vector<int> &number, int usernum)
{
}
int getInput(void)
{
	int num;
	cout << "Enter your input\n";
	cin >> num;
	return num;
}
void printVector(vector<int> number)
{
	for (auto iter = number.begin(); iter != number.end(); iter++)
		cout << setw(5) << *iter;
	cout << endl;
}
