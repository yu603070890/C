#include <stdio.h>
int main(){
    char c='k';
    int i=1, j=2, k=3;
    float x=3e+5, y=0.85;
    int result_1 = 'a'+5<c, result_2 = x-5.25<=x+y;
    printf( "%d, %d\n", result_1, -i-2*j>=k+1 );
    printf( "%d, %d\n", 1<j<5, result_2 );
    printf( "%d, %d\n", i+j+k==-2*j, k==j==i+5 );
    return 0;
}
