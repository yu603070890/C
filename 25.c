#include <stdio.h>
int main(){
    int nums[10];
    int i;

    //��1~10����������
    for(i=0; i<10; i++){
        nums[i] = (i+1);
    }

    //�����������Ԫ��
    for(i=0; i<10; i++){
        printf("%d ", nums[i]);
    }

    return 0;
}
