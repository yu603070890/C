#include <stdio.h>
int main(){
    int a,b;
    printf("输入两个整数:");
    scanf("%d %d",&a,&b);
    if(a!=b){  //!=表示不等于
        if(a>b) printf("%d>%d\n",a,b);
        else printf("%d<%d\n",a,b);
    }else{
        printf("%d=%d\n",a,b);
    }
    return 0;
}
