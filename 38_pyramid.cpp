/*

0 0 0 0 0 
1 1 1 1 
0 0 0 
1 1 
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
            if ((i % 2) == 0) cout << "1 ";
            else cout << "0 ";
        }
        cout << endl;
    }
    return 0;
}