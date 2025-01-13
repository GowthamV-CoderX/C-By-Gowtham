#include<stdio.h>
struct student 
{
    int rollno;
    char name[45];
    float marks;
};
struct student s={1,"jenny",98.433220};
int main()
{
    struct student * ptr=&s;
    printf("roll no is %d and name is %s and marks is %f",ptr->rollno,ptr->name,ptr->marks);
}
