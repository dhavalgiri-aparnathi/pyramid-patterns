/*

A
A B
A B C
A B C D
A B C D E

*/

# include <iostream>
using namespace std;

int main() 
{
    int n = 69;
    for (int i = 65; i <= n; i++)
    {
        for (int j = 65; j <= i; j++)
        {
            cout << (char) j << " ";
        }
        cout << endl;
    }
    return 0;
}