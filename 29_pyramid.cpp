/*

a b c d e
b c d e
c d e
d e 
e

*/

# include <iostream>
using namespace std;

int main()
{
    int n = 101;
    for (int i = 97; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            cout << (char) j << " ";
        }
        cout << endl;
    }
    return 0;
}