#include <iostream>
#include <string>
using namespace std;

int main()
{
    // 풀이 2: 단어 시작 조건으로 풀이
    string str;
    getline(cin, str);

    int count = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
            count++;
    }
    
    cout << count;

    return 0;
}