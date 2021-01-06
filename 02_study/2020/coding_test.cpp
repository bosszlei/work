#include <stdio.h>

#define MAXSIZE   8
#define DATALEN   8

typedef void(*TxResultCallBack)(insigned char);
typedef char VertexType;
typedef int EdgeType;


typedef enum{
    FIFO_EMPTY = 0,
    FIFO_NORMAL,
    FIFO_FULL,
}FIFOSTATUS;

typedef struct{
    FIFOSTATUS status;
    unsigned char p_write;
    unsigned char p_read;
    unsigned char data[MAXSIZE];
}FIFO;


typedef struct{
	unsigned long ID;
	unsigned long EID
	unsigned char DLC;;
	unsigned char Data[DATALEN]
	//void(*Func)(void);  //callback function
	TxResultCallBack TxCallBack; //callback function pointer
}BCANFrameFmt;

//定义一个边表节点
typedef struct EdgeNode{
	int adjex;        //顶点
	EdgeType weight; //权值
	struct EdgeNode* next;//节点指针，指向邻接节点
}EDGENODE;

//定义一个顶点表节点

int main(void)
{
	printf("In our world, there are so many beautiful views!");
	

	return 0;
}
 



class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.size();
        for (int i = 1; i * 2 <= n; ++i) {
            if (n % i == 0) {
                bool match = true;
                for (int j = i; j < n; ++j) {
                    if (s[j] != s[j - i]) {
                        match = false;
                        break;
                    }
                }
                if (match) {
                    return true;
                }
            }
        }
        return false;
    }
};




class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        //int row[m] = {0};
        //int col[n] = {0};
        vector<int> row(m, 0);
        vector<int> col(n, 0);
        int res = 0;

        int tmp_row = 0, tmp_col = 0;

        for (int i = 0; i < m; i++){
            for (int j = 0; j < n; j++){
                tmp_row += mat[i][j];
            }
            if (tmp_row == 1){
                row[i] = 1;
            }
            tmp_row = 0;
        }

        for (int j = 0; j < n; j++){
            for (int i = 0; i < m; i++){
                tmp_col += mat[i][j];
            }
            if (tmp_col == 1){
                col[j] = 1;
            }
            tmp_col = 0;
        }

        for (int i = 0; i < m; i++){
            if (row[i] == 1){
                for (int j = 0; j < n; j++){
                    if (mat[i][j] == 1 && col[j] == 1){
                        res += 1;
                    }
                }
            }
        }

        return res;
    }
};

1 0 0
0 0 1
1 0 0


1 0 0
0 1 0
0 0 1


//双指针法
//abcdef
/*bbbxxxyyyy*/
//bababbabaa
class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        vector<vector<int>> vec;
        int i = 0, j = 1;
        while (i < s.size()){
            if (j < s.size() && s[i] == s[j]){
                j++;
            } else {
                if (j - i >= 3){
                    vec.push_back({i, j - 1});
                }
                i = j;
                j++;
            }
        }
        return vec;
    }
};





























int main(void)
{
	printf("%c%c",122,108);
	return 0;
}
