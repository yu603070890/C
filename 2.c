#include <stdio.h>
int main(){
    int nums[10] = {4, 5, 2, 10, 7, 1, 8, 3, 6, 9};
    int i, j, temp;

    //ð�������㷨������ n-1 �ֱȽ�
    for(i=0; i<10-1; i++){
        //ÿһ�ֱȽ�ǰ n-1-i ����Ҳ����˵���Ѿ�����õ���� i �����ñȽ�
        for(j=0; j<10-1-i; j++){
            if(nums[j] > nums[j+1]){
                temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
            }
        }
    }

    //�������������
    for(i=0; i<10; i++){
        printf("%d ", nums[i]);
    }
    printf("\n");

    return 0;
}
