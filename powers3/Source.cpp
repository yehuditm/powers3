#include <iostream>
#include <iomanip>

#define MAX_NUM 10000000
#define SIZE_OF_WORD 10
using namespace std;

/*
A program that prints a table of all powers of 3 between 1 and 10,000,000. 
In each row the respective number in base 10 and 16
*/
int main()
{
	int num = 1;
	cout << setw(SIZE_OF_WORD) << left << "dec" << setw(SIZE_OF_WORD) << left << "hex" << endl;
	while (num < MAX_NUM)
	{
		num *= 3;
		cout << setw(SIZE_OF_WORD) << left << dec << num;
		cout << setw(SIZE_OF_WORD) << left << hex << num << endl;
	}
	return 0;
}