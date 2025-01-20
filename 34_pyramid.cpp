/*

A A A A A
B B B B
C C C
D D
E

*/

# include <iostream>
using namespace std;

int main()
{
    int n = 69;
    for (int i = 65; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            cout << (char) i << " ";
        }
        cout << endl;
    }
    return 0;
}