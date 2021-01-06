#include <stdio.h>
#include <stdlib.h>

#define N 3

typedef struct{
	char name[20];
	int num;
	unsigned char age;
	float score;
}st_STU_INFO;

st_STU_INFO boys[N],boy,*pboys;

int main(void){
	FILE* fp;
	int i;
	pboys = boys;
	
	if ((fp = fopen("E:\\05_c program\test\demo.txt","wb+")) == NULL) {
		printf("Error!");
		//getch();
		exit(1);
	}
	
	printf("Input data:\n");
	for (i = 0; i < N; i++,pboys++) {
		scanf("%s %d %d %f", pboys->name, &pboys->num, &pboys->age, &pboys->score);
	}
	
	fwrite(boys,sizeof(st_STU_INFO),N,fp);
	fseek(fp,sizeof(st_STU_INFO),SEEK_SET);
	fread(&boy,sizeof(st_STU_INFO),1,fp);
	printf("%s %d %d %f\n",boy.name,boy.num,boy.age,boy.score);
	
	fclose(fp);
	return 0;
}
