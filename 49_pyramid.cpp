/*

        A
      B B
    C C C
  D D D D 
E E E E E

*/

# include <iostream>
using namespace std;

int main()
{
    int n = 69;
    for (int i = 65; i <= n; i++)
    {
        for (int space = i; space <= n; space++)
        {
            cout << "  ";
        }
        for (int j = 65; j <= i; j++)
        {
            cout << (char) i << " ";
        }
        cout << endl;
    }
    return 0;
}