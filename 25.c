#include <stdio.h>
int main(){
    int nums[10];
    int i;

    //将1~10放入数组中
    for(i=0; i<10; i++){
        nums[i] = (i+1);
    }

    //依次输出数组元素
    for(i=0; i<10; i++){
        printf("%d ", nums[i]);
    }

    return 0;
}
