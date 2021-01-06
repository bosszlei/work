// #include <stdio.h>


// int main(void)
// {
//     /*
//     int a;
//     printf("%x\n",&a);
//     scanf("%d",0x62fe1c);//注意：指针变量的值就是一个地址值，
//     printf("%d\n",a);
//     printf("%d\n",sizeof())
//     return 0;
//     */

// }

using namespace std;

void display(vector<int>vec)
{
    for (int i = 0; i < vec.size; i++)
    {
        cout<<vec[i];
    }
    cout<<endl;
}

int main(void)
{
    int arr[] = {2,3,1,7,5,9,4};
    vector<int> vec =
}









for(;;)
{

}

while (1)
{

}

#define DAM_SIZE_RECEIVE 120

typedef union{//共用体，里面的数据共享一块内存空间
    unsigned char aData[DAM_SIZE_RECEIVE];

    struct{
      unsigned char tp;

      union{
          DAMCBitData_RX_ChipA bitData_RX_ChipA;
          DAMCBitData_RX_ChipB bitData_RX_ChipB;
          DAMCBitData_TX_ChipA bitData_TX_ChipA;
          DAMCBitData_TX_ChipB bitData_RX_ChipB;
      }  bitadta;

      union{
          //数据A 结构体
          //数据B 结构体
          //数据C 结构体
      }  sData;
    } sFormat;


};



#define	P10_10             (((volatile __16bitf_T *)0xFFC10028)->bit10)


 #define   P10_10  ((volatile __16bitf_T *)0xFFC10028)->bit10

int a;
int* p1,p2;
p1 = &a;


bool my_strstr( char *string, char *strCharSet )
{
 int string_length = strlen(string);
 int strCharSet_length = strlen(strCharSet);

 int i , j;
 i = j = 0;
 char *temp;

 for ( ; *string != '\0' ; )
 {
  if ( *string == *strCharSet )
  {
   temp = string;
   return compare( temp, string, strCharSet_length -1 ) ;
  }
  else
   string++;
 }
 
 return false;
}

























































