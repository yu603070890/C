#include <stdio.h>
#include <stdlib.h>

int main(){
    int line;  // ����������
    int column;  // ����������
    int i;  // ��ǰ��
    int j;  // ��ǰ��

    printf("���������ε�����(����)��");
    scanf("%d", &line);
    if(line%2==0){  // �ж��Ƿ�������
        printf("��������������\n");
        exit(1);
    }
    column = line;  // ����������������ͬ

    for(i=1; i<=line; i++){  // ����������
        if(i<(line+1)/2+1){  // �ϰ벿�֣������м�һ�У�
            for(j=1; j<=column; j++){  // �����ϰ벿�ֵ�������
                if( (column+1)/2-(i-1)<=j && j<=(column+1)/2+(i-1) ){
                    printf("*");
                }else{
                    printf(" ");
                }
            }
        }else{  // �°벿��
            for(j=1; j<=column; j++){  // �����°벿�ֵ�������
                if( (column+1)/2-(line-i)<=j && j<=(column+1)/2+(line-i) ){
                    printf("*");
                }else{
                    printf(" ");
                }
            }
        }
        printf("\n");
    }

    return 0;
}
