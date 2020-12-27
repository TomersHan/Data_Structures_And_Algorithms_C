#include <stdio.h>
#include "time.h"
//#define CLOCKS_PER_SEC	((clock_t)(1000))
//#define CLK_TCK 	CLOCKS_PER_SEC
int main() {
    int a[]={5,6,3,8,1,10,12,0};
    int len = sizeof (a)/sizeof (int);
    int j;
//    时间复杂度o(nlogn)
//    思路：将第一个数归位，即左边数比它小，右边数比它大，然后递归
    int left = 0;
    int right = len-1;
    int temp = a[left];
//    while(left<right){
////        从最右边起往左找比temp小的数
//        while (a[right]>=temp && left<right){
//            right -=1;
//        }
//        a[left] = a[right];
////        从最左边起往右找比temp大的数
//        while (a[left]<=temp && left<right){
//            left +=1;
//        }
//        a[right] = a[left];
//
//    }
//    a[left] = temp;
//    方法2

    for(int i=0;i<len;i++){
        printf("%d ",a[i]);
    }
    printf("\n");


    return 0;
}
