/*

A B C D E 
B C D E 
C D E 
D E 
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
            cout << (char) j << " ";
        }
        cout << endl;
    }
    return 0;
}