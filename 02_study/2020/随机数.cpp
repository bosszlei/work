#include <stdio.h>
#include <ctime>
#include <stdlib.h>
#include <iostream>
using namespace std;

void knuth(int n, int m)
{
	int cnt = 1; 
    srand((unsigned int)time(0)); 
    for (int i = 0; i < n; i++) { 
        if (rand() % (n-i) < m) { 
            cout <<"��"<< cnt <<"������:\t"<< i << endl; 
            cnt++;
            m--; 
        } 
     } 
}

int main(void)
{
	knuth(100,100);
	return 0;
}
