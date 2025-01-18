/*

a
b b
c c c
d d d d
e e e e e

*/

# include <iostream>
using namespace std;

int main() 
{
    int n = 101;
    for (int i = 97; i <= n; i++)
    {
        for (int j = 97; j <= i; j++)
        {
            cout << (char) i << " ";
        }
        cout << endl;
    }
    return 0;
}