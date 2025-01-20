/*

0 1 0 1 0
1 0 1 0 
0 1 0
1 0 
0

*/

# include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            cout << ((j + 1) % 2) << " ";
        }
        cout << endl;
    }
    return 0;
}