/*

a b c d e
a b c d
a b c
a b 
a

*/

# include <iostream>
using namespace std;

int main()
{
    int n = 101;
    for (int i = n; i >= 97; i--)
    {
        for (int j = 97; j <= i; j++)
        {
            cout << (char) j << " ";
        }
        cout << endl;
    }
    return 0;
}