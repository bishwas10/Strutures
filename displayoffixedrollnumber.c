//Wap in C to input the name,roll,marks and address of n students from the user using structure and display only that record whose roll number is entered by the user
#include <stdio.h>
struct student
{
    char name [20];
    int roll;
    float marks;
    char address[20];
};
 int main ()
 {
 struct student s[40];
 int n ,i,r;
 printf ("Enter the number of students \n");
 scanf ("%d",&n);
 for (i = 0;i<n;i++)
 {
     printf ("Enter the name of student \n");
     scanf ("%s",s[i].name);
     printf ("Enter the Roll number of Student\n");
     scanf ("%d",&s[i].roll);
    printf ("Enter the marks of student\n");
    scanf ("%f",&s[i].marks);
    printf ("Enter the address of the student\n");
    scanf ("%s",s[i].address);
}
printf ("Enter the Roll number to be searched \n");
scanf ("%d",&r);
printf ("Name \t Roll \t Marks \t Address \n");
for (i = 0;i <n;i++)
{
    if (s[i].roll == r)
    printf ("%s\t %d\t %f\t %s\n",s[i].name,s[i].roll,s[i].marks,s[i].address);

}

 return 0;
 }
