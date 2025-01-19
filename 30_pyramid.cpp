/*

A B C D E 
A B C D 
A B C 
A B 
A 

*/

# include <iostream>
using namespace std;

int main()
{
    int n = 69;
    for (int i = n; i >= 65; i--)
    {
        for (int j = 65; j <= i; j++)
        {
            cout << (char) j << " ";
        }
        cout << endl;
    }
    return 0;
}