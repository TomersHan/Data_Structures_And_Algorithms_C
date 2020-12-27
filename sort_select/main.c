#include <stdio.h>

int main() {
//    printf("Hello, World!\n");
    int a[] = {2, 1, 5, 12, 0, 4};
    int len = sizeof(a) / sizeof(int);
    int temp;
    for (int i = 0; i < len-1; i++) {
        for (int j = i+1; j < len; j++) {
            if (a[j] > a[i]) {
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
    for(int i=0;i<len;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
