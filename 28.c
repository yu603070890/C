#include <stdio.h>
int main(){
    char str[30];
    char c;
    int i;
    for(c=65,i=0; c<=90; c++,i++){
        str[i] = c;
    }
    str[i] = 0;  //�˴�Ϊ��ӵĴ��룬Ҳ����д�� str[i] = '\0';
    printf("%s\n", str);

    return 0;
}
