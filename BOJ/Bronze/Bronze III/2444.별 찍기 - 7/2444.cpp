#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int N, d;
    cin >> N;

    for (int i = 0; i < 2 * N - 1; i++)
    {
        d = abs(N - 1 - i);

        for (int j = 0; j < d; j++)
        {
            cout << " ";
        }
        
        for (int j = 0; j < (2 * N - 1) - d * 2; j++)
        {
            cout << "*";
        }

        cout << '\n';
    }

    return 0;
}