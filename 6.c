#include <stdio.h>
int main(){
    int i=1, j;
    while(1){  // ���ѭ��
        j=1;
        while(1){  // �ڲ�ѭ��
            printf("%-4d", i*j);
            j++;
            if(j>256)
            break;  //�����ڲ�ѭ��
            //printf("\n");
        }
        printf("\n");
        i++;
        if(i>256)
            //printf("\n");
        break;  // �������ѭ��
    }
    return 0;
}
