/*

E
D D
C C C
B B B B
A A A A A

*/

# include <iostream>
using namespace std;

int main() 
{
    int n = 69;
    for (int i = n; i >= 65; i--)
    {
        for (int j = i; j <= n; j++)
        {
            cout << (char) i << " ";
        }
        cout << endl;
    }
    return 0;
}