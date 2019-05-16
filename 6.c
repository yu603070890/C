#include <stdio.h>
int main(){
    int i=1, j;
    while(1){  // 外层循环
        j=1;
        while(1){  // 内层循环
            printf("%-4d", i*j);
            j++;
            if(j>256)
            break;  //跳出内层循环
            //printf("\n");
        }
        printf("\n");
        i++;
        if(i>256)
            //printf("\n");
        break;  // 跳出外层循环
    }
    return 0;
}
