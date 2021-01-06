#ifndef _MY_STRING_H_
#define _MY_STRING_H_


/*-------------------declaration of functions---------------------*/
//strlen()函数
extern int my_strlen(const char* str);

//strcpy()函数
extern char *my_strcpy(char* dest, const char* src);

//strcmp()函数
extern int my_strcmp(const char* str1,const char* str2);

//strcat()函数
extern char *my_strcat(char* dest, const char* src);

//strchr()函数
extern char *my_strchar(const char* dest, int c);

//memcpy()函数
extern void my_memcpy(void* dest, void* src, unsigned char size);

//memset()函数
extern void my_memset(void* dest, char value, unsigned char size);








#endif

