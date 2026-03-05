#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cin >> str;

    int left = 0;
    int right = str.length() - 1;

    while (left < right && str[left] == str[right])
    { 
        left++;
        right--;
    }

    cout << (left >= right);

    return 0;
}