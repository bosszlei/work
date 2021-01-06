#include <iostream>
#include <vector>
using namespace std;

template <typename type>

const type* find(const vector<type> &vec, const type& value)
{
    for (int index = 0; index < vec.size(); index++){
        if (value == vec[index]){
            return &vec[index];
        }
    }
    return NULL;
}

template <typename elemType>
inline elemType* begin(const vector<elemType>& vec){return vec.empty() ? 0 : &vec[0]}  //内联函数
inline elemType* end(const vector<elemType>& vec){return }

template <typename elemType>
void display(const vector<elemType>& vec, ostream& os)
{
    vector<elemType>::const_iterator iter = vec.begiin();
    vector<elemType>::const_iterator end_it = vec.end();

    for (;iter != end_it; iter++){
        os << *iter << ' ';
    os <<nedl;
    }
}

int main(void)
{
    vector<int> vec(10,1);
    if (!find(vec,1)){
        cout << "value is not in this vector!";
    } else {
        cout<< find(vec,3)<<endl;
    }
    return 0;
}