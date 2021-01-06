#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void)
{
    string str;
    getline(cin, str);
    int size = str.size();
    reverse(str.begin(), str.end());
    for (int i = 0; i < size; i++)
    {
        int j = i;
        while(j < size && str[j] != ' ')
            j++;
        reverse(str.begin() + i, str.begin() + j);
        i = j;
    }

    cout << str << endl;

    return 0;
}