/*

e e e e e 
d d d d 
c c c 
b b 
a 

*/

# include <iostream>
using namespace std;

int main()
{
    int n = 101;
    for (int i = n; i >= 1; i--)
    {
        for (int j = 97; j <= i; j++)
        {
            cout << (char) i << " ";
        }
        cout << endl;
    }
    return 0;
}