// Url: https://lightoj.com/problem/dimik-even-odd-2



#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int cases, length;
    char item[100];
    cin >> cases;

    for (int i = 0; i < cases; i++)
    {
        cin >> item;
        length = strlen(item);

        if (item[length - 1] % 2 == 0)
        {
            cout << "even" << endl;
        }
        else
        {
            cout << "odd" << endl;
        }
    }

    return 0;
}
