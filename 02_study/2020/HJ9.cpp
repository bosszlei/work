#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(void)
{
    int num;
    int i = 0;
    cin >> num;
    map<int, int>mp;
    while (num){
        int res = num % 10;
        num /= 10;
        mp.insert(pair<int, int>(i++, res));
    }

    map<int, int>::iterator iter;
    for(iter = mp.begin(); iter != mp.end(); iter++)
    {
        cout << iter->second; 
    }
    cout << endl;
    return 0;
}
