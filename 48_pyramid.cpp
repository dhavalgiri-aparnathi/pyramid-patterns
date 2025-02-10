/*

        a
      a b
    a b c
  a b c d
a b c d e

*/

# include <iostream>
using namespace std;

int main()
{
    int n = 101;
    for (int i = 97; i <= n; i++)
    {
        for (int space = i; space <= n; space++)
        {
            cout << "  ";
        }
        for (int j = 97; j <= i; j++)
        {
            cout << (char) j << " ";
        }
        cout << endl;
    }
    return 0;
}