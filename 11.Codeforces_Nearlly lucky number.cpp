#include <iostream>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    int Count = 0;
    while (n != 0)
    {
        if (n % 10 == 4 || n % 10 == 7)
        {
            Count ++;
        }
        n /= 10;
    }
    if (Count == 4 || Count == 7)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
