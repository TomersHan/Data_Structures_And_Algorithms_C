#include <stdio.h>
#include "string.h"
struct stud_{
    int num;
    char name[20];
    float score;
};
void main() {
//   struct student{
//       int id_num;
//       int age;
//       char sex;
//       char *name;
//       int score;
//   }boy1,boy2={11,11,'M',"tom",90};
//   boy1 = boy2;
//    printf("%d %d %c %d",boy1.id_num,boy1.age,boy1.sex,boy1.score);
//    printf("\n");
//    printf("%d %d %c %d",boy2.id_num,boy2.age,boy2.sex,boy2.score);
//三种定义结构体类型变量
    struct stdent{
        int num;
        char name[20];
        char *name_;
        char sex;
        int age;
        char addr[30];
    };
    struct stdent stdent1,stdent2;
    stdent1.age =12;
    stdent2.sex='W';
    printf("%d %c\n",stdent1.age,stdent2.sex);
    printf("%d\n",sizeof (stdent1));
//第2种 通用
    struct std{
        int num;
        char name[20];
//        char *name_;
        char sex;
        int age;
        char addr[30];
    }boy1={10,"eww",'M',80,"beijing"};
    printf("%d\n",boy1.age);
//    第3种
    struct {
        int num;
        char name[20];
//        char *name_;
        char sex;
        int age;
        char addr[30];
    } girl={12,"rose",'w',16,"xiamen"};
    printf("%s\n",girl.addr);

    struct date{
        int year;
        int month;
        int day;
    };
    struct emp{
        int num;
        struct date birthday;
        char *name;
    }emp1,emp2;
    emp1.birthday.day=15;
    emp1.birthday.month=10;
    emp1.birthday.year=1921;
    printf("year:%d month:%d",emp1.birthday.year,emp1.birthday.month);
//    scanf("%d",&emp1.birthday.month);
    printf("year:%d month:%d\n",emp1.birthday.year,emp1.birthday.month);
    emp1.num =100;
    printf("%o\n",&emp1);
    printf("%o\n",&emp1.num);

//   结构体数组
    struct stdent_{
        int num;
        char name[20];
        char *name_;
        char sex;
        int age;
        char addr[30];
    }stu1[2] ={
            {333,"aa","nn",'M',12,"tianjin"},
            {21,"aa","nn",'M',112,"tianjin"}
    },*pointer;
//    结构体指针必须要放在定义结构体变量的地方
    printf("%d\n",stu1[0].num);
    pointer = &stu1[0];
//    2种引用方式
    printf("%d\n",(*pointer).num);
    printf("%d\n",pointer->num);


//    int *pointer;
//    pointer = & stu1[0];
//    printf("%d ",(*pointer).)
    void print(struct  stud_ y) ;
    void print_(struct  stud_ *p) ;
    struct stud_ xx;
    xx.num =10;
//    xx.name ="sas";
    strcpy(xx.name,"xxxasasas");
    xx.score = 11.0;
//    结构体变量作为实参
    print(xx);
    print_(&xx);

//    动态存储 ：链表
    struct wxr{
        long num;
        float score;
//        嵌套
        struct wxr *next;
    }a,b,c,*head;
    a.num=20181;
    b.num=20182;
    c.num=20183;
    a.score=90.9;
    b.score=89.7;
    c.score=100.0;

    head = &a;
    a.next = &b;
    b.next =&c;
    c.next=NULL;
    do {
        printf("%ld %7.4f\n",head->num,head->score);
        head =head->next;
    } while (head);



}

void print(struct  stud_ y){
    printf("asasa -----%d   %s\n",y.num,y.name);
}

void print_(struct  stud_ *p){
    printf("asasa -----%d   %s\n",p->num,p->name);
}

