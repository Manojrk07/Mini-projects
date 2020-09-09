#include<stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("details.txt","r");
    char name[]={ };
    char company[]={ };
    fscanf(ptr,"%s",&name);
    printf("%s",name);
    fscanf(ptr,"%s",&company);
    printf("%s",company);
    return 0;
}