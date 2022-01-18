//Wap to input name,roll,marks and address of a student and display the entered information using the concept of structure
#include <stdio.h>
struct student 
{
    int roll;
    char name [20];
    float marks;
    char address[40];
};
int main ()
{
    struct student s;
    printf ("Enter the details of student \n");
    printf ("Enter the name of the student\n");
    scanf ("%s",s.name);
    printf ("Enter the roll number \n");
    scanf ("%d",&s.roll);
    printf ("Enter the marks of students \n");
    scanf ("%f",&s.marks);
    printf ("Enter the adress \n");
    scanf ("%s",s.address);
    printf ("The entered details of the student is : \n");
    printf ("Name        Roll      Marks        Address\n ");
    printf ("%s     %d     %.2f      %s  ",s.name,s.roll,s.marks,s.address);
    return 0;
}
