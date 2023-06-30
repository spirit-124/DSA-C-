
#include <iostream>
using namespace std;
/*
1234
1234
1234
1234

int main()
{

    int i = 1, n;
    cin >> n;


    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout<<j;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}
*/
/*
123
456
789

#include <iostream>
using namespace std;

int main()
{

    int i = 1, n;
    cin >> n;

    int count = 0;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            count++;
            cout << count;
            j++;
        }
        cout << endl;
        i++;
    }

return 0;
}
*/
// ==============================================================================

/*

*
**
***
****

#include <iostream>
using namespace std;

int main()
{

    int row = 1, n;
    cin >> n;

    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {

            cout << "*";
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}
*/

/*
A
BB
CCC
DDDD
int main()
{

    int row = 1, n;
    cin >> n;

    while (row <= n)
    {
        int col = 1;
        while (col <= n)
        {
            char ch = ('A' + row - 1);
            cout << ch;
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}
*/

/*

D
CD
BCD
ABCD

int main()
{

    int row = 1, n;
    cin >> n;

    while (row <= n)
    {
        int col = 1;

        char ch = ('A' + n - row);
        while (col <= row)
        {

            cout << ch;
            ch++;
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}
*/

int main()
{

    int row = 1, n;
    cin >> n;

    while (row <= n)
    {
        int col = 1;
        char value = 'A' + row - 1;
        while (col <= n)
        {
            // value = value + row - 1;

            cout << value;
            col++;
            value++;
        }
        cout << endl;
        row++;
        value = value - row;
    }

    return 0;
}