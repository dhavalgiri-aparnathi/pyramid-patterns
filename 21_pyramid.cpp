/*

1
1 2
2 3 4
4 5 6 7
7 8 9 10 11

*/

# include <iostream>
using namespace std;

int main()
{
    int n = 5, count = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << count << " ";
            count++;
        }
        count--;
        cout << endl;
    }
    return 0;
}