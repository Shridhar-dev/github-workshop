#include<stdio.h>


void main(){
    int a[5]={5,6,7,8,9};
    int* b[5];
    int sum = 10;
    for(int i=0; i<5; i++){
        b[i] = &a[i];
    }

    printf("Pointers are: ");
    for(int i=0; i<5; i++){
        printf("%u ", b[i]);
    }
    printf("\nValues are: ");
    for(int i=0; i<5; i++){
        printf("%d ", *b[i]);
        sum+=*b[i];
    }
    printf("\nSum of all the values are: %d", sum);
}

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