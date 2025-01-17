/*

A
B A
C B A
D C B A
E D C B A

*/

# include <iostream>
using namespace std;

int main()
{
	int n = 69;
	for (int i = 65; i <= n; i++)
	{
		for (int j = i; j >= 65; j--)
		{
			cout << (char) j << " ";
		}
		cout << endl;
	}
	return 0;
}