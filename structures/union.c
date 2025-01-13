#include<stdio.h>
union student 
{
    int rollno;
    char name[45];
    float marks;
};
int main()
{
    union student s;
    s.rollno=1;
    s.marks=99;

    printf("rollno is : %d",s.rollno);
}