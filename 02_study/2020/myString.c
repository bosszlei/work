#include <stdio.h>
#include "myString.h" 
#include <string.h>

//strlen()函数
extern int my_strlen(const char* str)
{
    if (!str) return 0;
    int cnt = 0;
    while (*str != '\0') {
        str++;
        cnt++;
    }
    return cnt;
}

//strcpy()函数
extern char *my_strcpy(char* dest, const char* src)
{
    if (!(dest && src))
        return NULL;
    char* ptr = dest;
    while (*dest++ = *src++);
    return ptr;
}

//strcmp()函数
extern int my_strcmp(const char* str1,const char* str2)
{
    if (str1 == NULL || str2 == NULL)
        return 0;
    
    while (*str1 == *str2 && *str1 != '\0' && *str2 != '\0'){
        str1++;
        str2++;
    }
    if (*str1 == *str2) {
        return 0;
    } else if (*str1 > *str2) {
        return 1;
    } else {
        return -1;
    }
}

//strcat()函数
extern char *my_strcat(char* dest, const char* src)
{
    if (!(dest && src))
        return NULL;
    char* p_tmp = dest;
    while (*p_tmp != '\0')
        p_tmp++;
    /*
        *p_tmp++ = *src++  // *(p_tmp++)

          ==>

          *p_tmp;
          *src;
          *p_tmp = *src;
          p_tmp++;
          src++; 
    */
    while (*p_tmp++ = *src++);
    return dest;
}

//strchr()函数
extern char *my_strchar(const char* dest, int c)
{
    if (dest == NULL)
        return NULL;
    char* p_tmp = dest;
    while (*p_tmp != c && *p_tmp != '\0'){
        p_tmp++;
    }
    if (*p_tmp != '\0')
        return p_tmp;
    else
        return NULL;   
}

//memcpy()函数
extern void my_memcpy(void* dest, void* src, unsigned char size)
{
    /*注意边界条件的限定*/
    if (!(dest && src)){
        printf("eror");
        return;
    }
        
    char* p_dest = (char*)dest;
    char* p_src = (char*)src;
    while (size--){
       *p_dest++ = *p_src++; 
    }
}

//memset()函数
extern void my_memset(void* dest, char value, unsigned char size)
{
    if (!dest || size < 0)
        return;
    char* p_dest = (char*)dest;
    while (size){
       *p_dest = value; 
       p_dest++;
       size--;
    }

}



int main(void)
{
	char testArray[] = "I love China that is the best country in the world!";
    char test1[100];
    char test2[100];
    char test3[100];
    char* testStr1 = "And so do I. I would like to go swimming on Saturday.";
    char* testStr2 = "God bless you! God will open a door for you when he closes a window.";

    /*test strlen*/
	printf("my test string length is:  %d\n", my_strlen(testArray));
	printf("official string length is %d\n\n", strlen(testArray));

    /*test strcpy*/
    my_strcpy(test1,testArray);
    strcpy(test2,testArray);
    printf("my test string copy is:%s\n",test1);
    printf("official string copy is:%s\n\n",test2);

    /*test strcmp*/
    printf("my test string compare result is: %d\n",my_strcmp(testStr1, testStr2));
    printf("official string compare result is: %d\n\n",strcmp(testStr1, testStr2));

    /*test strcat*/
    my_strcat(test1, testStr2);
    printf("my test string catch is: %s\n",test1);
    strcat(test2,testStr2);
    printf("official string catch is: %s\n\n",test2);

    /*test strchar*/
    char* p_tmp_1 = my_strchar(test1, 'X');
    if (p_tmp_1){
         printf("my test string char is: %c\n\n", *p_tmp_1);
    } else {
         printf("search error!\n\n");
    }   

    /*test member copy*/
    my_memcpy(test2, testStr1, 30);
    printf("my test member copy is: %s\n", test2);

    /*test member set*/
    my_memset(test1, 'A', 40);
    printf("my test member set is: %s\n", test1);
    
	return 0;
}

