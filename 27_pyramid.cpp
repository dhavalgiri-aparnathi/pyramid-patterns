/*

1 1 1 1 1 
2 2 2 2 
3 3 3 
4 4 
5 

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
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}