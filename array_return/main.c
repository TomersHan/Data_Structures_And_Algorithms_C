#include <stdio.h>

int main() {
//    printf("Hello, World!\n");
    int arr[100];
    int* ptr = fun(arr);
    printf("%d %d", ptr[0], ptr[1]);
    return 0;
}
int* fun(int *arr){
    arr[0]=12;
    arr[1]=0;
    return arr;
}
