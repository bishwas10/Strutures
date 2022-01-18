//Wap to input and display the details of n number of students entered by the user
#include <stdio.h>
struct student
{
    int roll;
    char name[20];
    float marks;
    char address[40];
};
 int main ()
 {
     struct student s[48];
     int n ,i;
     printf ("Enter the number of students:\n");
     scanf ("%d",&n);
     for (i =0;i<n;i++)
     {
         printf ("Enter the details of the students \n");
         printf ("Enter the name of student \n");
         scanf ("%s",s[i].name);
         printf ("Enter the Roll Number \n");
         scanf ("%d",&s[i].roll);
         printf ("Enter the marks of student \n");
         scanf ("%f",&s[i].marks);
         printf ("Enter the address of student \n");
         scanf ("%s",s[i].address);
     }
     printf ("The entered details of the student is \n");
     printf ("Name      Roll      Marks    Address\n");
     for (i =0;i <n;i++)
     printf ("%s     %d      %.2f      %s\n",s[i].name,s[i].roll,s[i].marks,s[i].address);
     return 0;
 }