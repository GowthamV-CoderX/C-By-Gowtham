#include<stdio.h>
struct student 
{
    int rollno;
    char name[45];
    float marks;
};
int main()
{
    struct student s[3];
    for(int i=0;i<3;i++)
    {
        printf("enter the information for student : %d\n",i);
        printf("enter rollnumber : ");
        scanf("%d",&s[i].rollno);
        printf("enter name : ");
        scanf("%s",s[i].name);
        printf("enter marks : ");
        scanf("%f",&s[i].marks);
    }
    for(int i=0;i<3;i++)
    {
        printf("student : %d\n",i);
        printf("roll number : %d\n",s[i].rollno);
        printf("name is : %s\n",s[i].name);
        printf("marks are : %d\n",s[i].marks);
    }
}