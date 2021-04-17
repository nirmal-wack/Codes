#include<stdio.h>
#include<string.h>
int main(){
    FILE *ptr;
    char num[10];
    ptr=fopen("text.txt","r");
    fscanf(ptr,"%s",num);
    printf("value is %s.\n",num);

    return 0;
}