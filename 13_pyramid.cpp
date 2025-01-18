/*

e
d d
c c c
b b b b
a a a a a

*/

# include <iostream>
using namespace std;

int main() 
{
    int n = 101;
    for (int i = n; i >= 97; i--)
    {
        for (int j = i; j <= n; j++)
        {
            cout << (char) i << " ";
        }
        cout << endl;
    }
    return 0;
}