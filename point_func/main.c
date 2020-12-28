#include <stdio.h>

int main() {
    int Max(int x,int y);
    int *Min(int x,int y);
    printf("%d ",Max(1,2));
    int (*p)(int ,int );
    p = Max;
    int a=10,b=18;
    printf("%d\n",p(a,b));
    printf("%d\n",(*p)(a,b));
    return 0;
}
int Max(int x,int y){
    if(x>y) {
        return x;
    }
    else{
        return y;
    }
}
//int *Min(int x,int y){
//    if(x>y) {
//        return y;
//    }
//    else{
//        return x;
//    }
//}