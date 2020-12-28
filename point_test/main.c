#include <stdio.h>

int main() {
//    printf("Hello, World!\n");
    int i = 2000;
//    *声明指针
    int *pointer;
    float *pointer_f;
    char *pointer_c;
//    &取地址
    pointer = &i;
//    *取值操作
    printf("%d \n", *pointer);

//    int a,b;
//    int *pointer_1,*pointer_2;
//    a =100;
//    b=10;
//    pointer_1 = &a;
//    pointer_2 = &b;
//    printf("%d %d\n",a,b);
//    printf("%d %d\n",*pointer_1,pointer_2);

//    int *p1, *p2, *p, a, b;
//    scanf("%d,%d", &a, &b);
//    p1 = &a;
//    p2 = &b;
//    if (a < b) {
//        p = p1;
//        p1 = p2;
//        p2 = p;
//    }
//    printf("%d %d\n", a, b);
//    printf("max=%d min=%d\n", *p1, *p2);
//      int a[3] = {2,3,1};
//      int *p;
//      p = a;
//      p = &a[0];
//      for(int i =0 ;i<3;i++){
//          printf("%d  ",*(p+i));
//      }
//    for(int i =0 ;i<3;i++){
//        printf("%d  ",*(a+i));
//    }
    void reverse(*a,int len);
    int a[5]={1,2,3,4,5};
    reverse(a,5);
    for(int i=0;i<5;i++){
        printf("%d  ",a[i]);
    }
    printf("\n");
    return 0;
}
void reverse(*a,int len){
    int *i,*j;
    i=a;
    j=a+len-1;
    for (int t;t){

    }
}