/*

a
b a
c b a
d c b a
e d c b a

*/

# include <iostream>
using namespace std;

int main()
{
	int n = 101;
	for (int i = 97; i <= n; i++)
	{
		for (int j = i; j >= 97; j--)
		{
			cout << (char) j << " ";
		}
		cout << endl;
	}
	return 0;
}