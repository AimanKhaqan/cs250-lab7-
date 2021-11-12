#include<iostream>
#include<time.h>
using namespace std;

int main() {
	int no_on_dice;
	int throws;
	cout << "Enter the number of times you want to throw the dice: " << endl;
	cin >> throws;
	cout << "The numbers on dice: " << endl;
	srand(time(NULL));
	for (int i = 0; i < throws; i++)
	{
		no_on_dice = (rand() % 6 + 1);
		cout << no_on_dice << " ";
	}
	getchar();
	return 0;
}
