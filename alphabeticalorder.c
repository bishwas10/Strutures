
//Wap in C to input the name,roll,marks and address of n students from the user structure and display the entered information students in alphabetical order
#include <stdio.h>
#include <string.h>
struct student
{
    char name[20];
    int roll;
    float marks;
    char address[40];
};
int main ()
{
    struct student s[48],temp;
    int n, i ,j;
    printf ("Enter the number of the students \n");
    scanf ("%d",&n);
    for (i = 0;i <n;i++)
    {
        printf ("Enter the name of student \n");
        scanf ("%s",&s[i].name);
        printf ("Enter the Roll number of student \n");
        scanf ("%d",&s[i].roll);
        printf ("Enter the marks of the student\n");
        scanf ("%f",&s[i].marks);
        printf ("Enter the address of the student \n");
        scanf ("%s",&s[i].address);
    }
    for (i = 0; i <n;i++)
    {
        for (j = j+1;j <n;j++)
        {
            if (strcmp(s[i].name,s[j].name)>0)
            {
                temp = s[i];
                s[i]= s[j];
                s[j] = temp;

            }
        }
    }
    printf ("Name  Roll   Marks   Address\n");
    for ( i = 0; i <n;i++)
    {
        printf ("%s \t %d \t %f \t %s\n", s[i].name, s[i].roll, s[i].marks, s[i].address);

    }
    return 0;
}