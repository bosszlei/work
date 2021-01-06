#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string str;
    getline(cin,str);
    int length = str.size();
    int count = 0;
    for (int i = length -1; i >= 0 && str[i] != ' ';i--){
        count++;
    }
    cout<<count<<endl;
    return 0;
}
