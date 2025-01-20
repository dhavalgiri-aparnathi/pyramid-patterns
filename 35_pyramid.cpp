/*

E E E E E
D D D D
C C C
B B
A

*/

# include <iostream>
using namespace std;

int main()
{
    int n = 69;
    for (int i = n; i >= 1; i--)
    {
        for (int j = 65; j <= i; j++)
        {
            cout << (char) i << " ";
        }
        cout << endl;
    }
    return 0;
}