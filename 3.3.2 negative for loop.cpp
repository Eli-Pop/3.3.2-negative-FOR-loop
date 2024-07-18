// A negatively running for loop

#include <iostream>
using namespace std;

int main()
{
	int i;

	for (i = 50; i >= -50; i = i - 10) cout << i << ' ';
	// a negatively running for loop

	cout << "\n";
	system("pause");
	return 0;
}