#include<stdio.h>
#include <stdlib.h>

#define N 3

struct stu{
    char name[10]; //����
    int num;  //ѧ��
    int age;  //����
    float score;  //�ɼ�
}boys[N], boy, *pboys;

int main(){
    FILE *fp;
    int i;
    pboys = boys;
    if( (fp=fopen("E:\\demo.txt", "wb+")) == NULL ){
        printf("Cannot open file, press any key to exit!\n");
        //getch();
        exit(1);
    }

    printf("Input data:\n");
    for(i=0; i<N; i++,pboys++){
        scanf("%s %d %d %f", pboys->name, &pboys->num, &pboys->age, &pboys->score);
    }
    fwrite(boys, sizeof(struct stu), N, fp);  //д������ѧ����Ϣ
    fseek(fp, sizeof(struct stu), SEEK_SET);  //�ƶ�λ��ָ��
    fread(&boy, sizeof(struct stu), 1, fp);  //��ȡһ��ѧ����Ϣ
    printf("%s  %d  %d %f\n", boy.name, boy.num, boy.age, boy.score);

    fclose(fp);
    return 0;
}
