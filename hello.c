#include <stdio.h>
#include <stdlib.h>
int main(){
    int a;
    scanf("%i",&a);
    printf("%i\n",a);

    char name[30];
    scanf("%s",name);
    printf("Hello %s!\n",name);
    int c;
    while((c = getchar())!='\n' && c!=EOF){

    }
    char fullName[30];
    fgets(fullName,sizeof(fullName),stdin);
    printf("My name is: %s",fullName);
    printf("%zu\n",sizeof(fullName));


    char c0;
    printf("Enter a character: ");
    c0=getchar();
    printf("%c\n",c0);

    puts("Hello");
    putchar(c0);
while((c = getchar())!='\n' && c!=EOF){

    }
    char temp[30];
    printf("Enter your name: ");
    fgets(temp,sizeof(temp),stdin);
    puts(temp);
    return 0;
}