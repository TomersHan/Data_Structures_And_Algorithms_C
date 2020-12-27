#include <stdio.h>

int main() {
//    printf("Hello, World!\n");
    int binary_search(int li[], int len, int a);
    int li[] = {1, 18, 6, 3, 12,1};
//    int mid;
//    int test(int array[], int len);
//    int sum = test(li, sizeof(li) / sizeof(int));
//    printf("The sum of array is:%d\n", sum);
    int len = sizeof(li) / sizeof(int);
//    binary_search(li, len, 9);
//    printf("%d", mid);
    int bubble_rank(int li[],int len);
//    int x[5] ;
//    bubble_rank(li,len);
//      int select_sort(int li[],int len);
//      select_sort(li,len);
     int del_one_array(int li[],int index,int len);
     int new_li[len-1];
     del_one_array(li,3,len,new_li);
     for(int i=0;i<len-1;i++){
         printf("%d ",li[i]);
     }

    return 0;
}

int test(int array[], int len) {
    int sum = 0;
    for (int i = 0; i < len; i++) {
        sum += array[i];
    }
    return sum;
}

int binary_search(int li[], int len, int a) {
    int left = 0;
    int right = len - 1;
    int mid,mid_num;
    while (right >= left) {
        mid = (left + right) / 2;
        mid_num = li[mid];
        if (a == mid_num) {
            printf("%d\n", mid);
            return mid;
        } else if (mid_num > a) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    printf("The number not exists");
//    return -1;


}
int bubble_rank(int li[],int len){
    int temp;
    for(int i=0;i<len;i++){
        for(int j=0;j<len-i-1;j++){
            if(li[j]<li[j+1]){
                temp = li[j+1];
                li[j+1] = li[j];
                li[j] =temp;
            }

        }
    }
    for(int i=0;i<len;i++){
        printf("%d  ",li[i]);
    };
//    return li;
}

int select_sort(int li[],int len){
    int s_li[len];
    int min_num=li[0] ;
    int del_one_array(int li[],int index,int len);
    for(int i=0;i<len;i++){
        int flag;
        for( int j=0;j<len;j++){
            if(li[j]<min_num){
                min_num = li[j];
                flag = j;
            }
        }
        li = del_one_array(li,flag,len);
        s_li[i]=min_num;
    }
    for(int k=0;k<len;k++){
        printf("%d ",s_li[k]);

    }
}
//返回数组报错 C语言不能返回一个完整的数组
int del_one_array(int li[6],int index,int len,int new_li[5]){
    for(int i;i<len;i++){
        if(i==index){
            new_li[i]=li[i+1];
        } else{
            new_li[i] = li[i];
        }
    }
    return new_li;

}