#include <stdio.h>
int main(){
    int nums[10] = {0, 1, 2,3,4,5,6,7,8,9};
    int i, num, thisindex = -1;

    printf("Input an integer: ");
    scanf("%d", &num);
    for(i=0; i<10; i++){
        if(nums[i] == num){
            thisindex = i;
            break;
        }else if(nums[i] > num){
            break;
        }
    }
    if(thisindex < 0){
        printf("%d不在数组中.\n", num);
    }else{
        printf("%d在数组中, 序号是%d.\n", num, (thisindex+1));
    }

    return 0;
}
