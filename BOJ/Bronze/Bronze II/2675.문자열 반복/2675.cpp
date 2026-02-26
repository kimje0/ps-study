#include <iostream>
#include <string>
using namespace std;

int main()
{
    int T;
    cin >> T;

    int R;
    string S;
    while (T--)
    {
        string P;
        cin >> R >> S;
        for (int i = 0; i < S.size(); i++)
            for (int j = 0; j < R; j++)
                P += S[i];
        
        cout << P << '\n';
    }
    
    return 0;
}