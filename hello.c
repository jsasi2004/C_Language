#include <stdio.h>
#include <stdbool.h>
int main(){
    int a = 1 ;
    float b = 1.2 ;
    char c = 'c' ;
    double d = 2.3 ;
    _Bool e = 0 ;
    bool f = false ;
    printf("int a = %i\n",a);
    printf("float b = %.1f\n",b);
    printf("char c = %c\n",c);
    printf("double d = %lf\n",d);
    printf("_Bool e = %d\n",e);
    printf("bool f = %d\n",f);
    return 0;
}