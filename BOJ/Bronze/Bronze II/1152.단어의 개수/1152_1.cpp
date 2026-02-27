#include <iostream>
using namespace std;

int main()
{
    // 풀이 1: cin 특성 이용 
    string str;
    int count = 0;

    while (cin >> str)
        count++;

    cout << count;

    return 0;
}