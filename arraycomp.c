#include<stdio.h>

int compare(int *a, int *b){
    int flag = 1;
    
    for(int i=0; i<5; i++){
        if(*a != *b){
            flag=0;
            break;
        }
        a++;
        b++;
    }
    return flag;
}

void main(){
    int a[5]={5,6,7,8,9}, b[5]={5,6,7,8,9} ;
    int identical = compare(&a[0], &b[0]);
    identical ? printf("Arrays are identical") : printf("Arrays are not identical");
}