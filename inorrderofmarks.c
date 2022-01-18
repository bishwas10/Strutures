//Wap in C to input the name,roll, marks and address of n students from the user using structure and display the entered information of students in the order of their marks
#include <stdio.h>
struct student
{
 
    char name[20];
    int roll;
    float marks;
    char address[50];
};
int main ()
{
    struct student s[40],temp;
    int n ,i ,j;
    printf ("Enter the number of students\n");
    scanf ("%d",&n);
    for (i =0;i <n;i++)
    {
        printf ("Enter the name, roll, marks and address\n");
        scanf ("%s%d%f%s",&s[i].name,&s[i].roll,&s[i].marks,&s[i].address);

    }
    for (i =0;i<n;i++)
    {
        for (j = j+1;j<n;j++)
        {
            if (s[i].marks < s[j].marks)
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    printf ("Name\t Roll \t Marks \t Address\n");
    for (i = 0;i <n;i++)
    {
        printf ("%s\t %d\t %f\t %s\n", s[i].name, s[i].roll,s[i].marks,s[i].address);

    }
    return 0;
}