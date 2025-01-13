#include<stdio.h>
struct student
{
    int rollno;
    char name[30];
    float marks;
};
void main()
{
    struct student s1;
    struct student s2;
    printf("enter information for s1 : ");
    scanf("%d %s %f",&s1.rollno,&s1.name,&s1.marks);
    printf("enter information for s2 : ");
    scanf("%d %s %f",&s2.rollno,&s2.name,&s2.marks);
    // struct student s1={29,"pandu",90.75};
    // struct student s2={1,"gowtham",95.53};
     printf("%d %s %f\n",s1.rollno,s1.name,s1.marks);
     printf("%d %s %f",s2.rollno,s2.name,s2.marks);
}