#include <iostream>
using namespace std;

int main()
{
    int chessPiece[6] = {1, 1, 2, 2, 2, 8};
    int whitePiece;
    
    int num;
    for (int i = 0; i < 6; i++)
    {
        cin >> whitePiece;
        
        num = chessPiece[i] - whitePiece;
        cout << num << " ";
    }
    
    return 0;
}