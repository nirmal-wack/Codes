#include<stdio.h>
int main(){
    char Grade;
    int v;
    scanf("%c",&Grade);
    switch (Grade){
        case 'a':
            v=1;
            break;
        case 'b':
            v=2;
            break;
        default:
            printf("Invalid grade\n");  


        
    }
    printf("%d",v);
    return 0;
}