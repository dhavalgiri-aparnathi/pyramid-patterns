/*

a a a a a 
b b b b 
c c c 
d d 
e 

*/

# include <iostream>
using namespace std;

int main()
{
    int n = 101;
    for (int i = 97; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            cout << (char) i << " ";
        }
        cout << endl;
    }
    return 0;
}