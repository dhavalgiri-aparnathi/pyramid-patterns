/*

        1
      1 0
    1 0 1
  1 0 1 0
1 0 1 0 1

*/

# include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int i = n; i >= 1; i--)
    {
        for (int space = 1; space <= i; space++)
        {
            cout << "  ";
        }
        for (int j = n; j >= i; j--)
        {
            cout << j % 2 << " ";
        }
        cout << endl;
    }
    return 0;
}