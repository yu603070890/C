#include <stdio.h>
int main(){
    int a[10]={0};
    int c,i;
    for(c=65,i=0; c<=90; c++,i++){
        a[i] = c;
        printf("%d\t", a[i]);
    }
    a[i] = 0;  //此处为添加的代码，也可以写作 str[i] = '\0';
    return 0;
}
