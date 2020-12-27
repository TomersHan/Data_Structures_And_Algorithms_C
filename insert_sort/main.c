#include <stdio.h>
#include "time.h"
#define CLOCKS_PER_SEC	((clock_t)(1000))
#define CLK_TCK 	CLOCKS_PER_SEC
int main() {
    int a[]={23,6,3,8,0,1,10,12,0};
    int len = sizeof (a)/sizeof (int);
    int j;
//    时间复杂度o(n^2)
//    i是插入数字下标；j是左侧原有序数字下标
//    思路：插入数字和原有数字挨个对比，其实第一轮后就是邻居对比
    clock_t start, end;
    start = clock();
    for(int i=1;i<len;i++){
        int insert_num = a[i];
//        j可以从大到小 也可以从小到大，挨个比较
        for(j=i-1;j>=0;j--){
            if(a[j]>insert_num){
                a[j+1] = a[j];
                a[j] = insert_num;
            }
        }
        for(int i_ = 0;i_<len;i_++){
            printf("%d ",a[i_]);
        }
        printf("\n");
    }
    end = clock();
    printf("time: %f s\n", ((double)(end - start)) / CLOCKS_PER_SEC);
    return 0;
}
