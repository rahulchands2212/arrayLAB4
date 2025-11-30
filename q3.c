/*
 Write a program to copy the contents of
a 5-element integer array into
another array in reverse order.
*/

#include<stdio.h>
int main(){
    //define array and take 5 element input from user;
    int arr[5];
    printf("enter 5 element (interger) = ");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }

    // Reverse copy
    for(int i=0; i<5; i++){
        newarr[4 - i] = arr[i];
    }

    //print output ;
    printf("array in reverse order = ");
    for(int i=0;i<5;i++){
        printf("%d ",newarr[i]);
    }

    return 0;
}