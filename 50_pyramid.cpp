/*

        e
      d d
    c c c
  b b b b
a a a a a

*/

# include <iostream>
using namespace std;

int main()
{
    int n = 101;
    for (int i = n; i >= 97; i--)
    {
        for (int space = 97; space <= i; space++)
        {
            cout << "  ";
        }
        for (int j = i; j <= 101; j++)
        {
            cout << (char) i << " ";
        }
        cout << endl;
    }
    return 0;
}