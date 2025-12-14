#include <stdio.h>
#include <stdbool.h>
int main(){
    int a = 1 ;
    float b = 1.2 ;
    char c = 96 ;
    double d = 2.3 ;
    _Bool e = 0 ;
    bool f = false ;
    printf("size of int a = %zu\n",sizeof(a));
    printf("size of float b = %zu\n",sizeof(b));
    printf("size of char c = %zu\n",sizeof(c));
    printf("size of double d = %zu\n",sizeof(d));
    printf("size of _Bool e = %zu\n",sizeof(e));
    printf("size of bool f = %zu\n",sizeof(f));
    return 0;
}