//Wap to demonstrate passing array of structure to function
#include <stdio.h>
struct student 
{
    char name[20];
    int roll;
    float marks;
    char address[20];
    long int ph;
};
void display (struct student s[], int n)
{
    int i;
    printf ("Name   Roll Number     Marks     Address    Phone Number :\n");
    for (i = 0;i <n;i++)
    {
        printf ("%s     %d   %f   %s   %ld\n",s[i].name, s[i].roll, s[i].marks, s[i].address, s[i].ph);

    }

}
int main ()
{
    int n ,i;
    struct student s[40];
    printf ("Enter the number of Students:\n");
    scanf ("%d",&n);
    for (i =0;i <n;i++)
    {
        printf ("Enter the name of student \n");
        scanf ("%s",s[i].name);
        printf ("Enter the Roll number \n");
        scanf ("%d",&s[i].roll);
        printf ("Enter the marks\n");
        scanf ("%f",&s[i].marks);
        printf ("Enter the address \n");
        scanf ("%s",s[i].address);
        printf ("Enter the phone number \n");
        scanf ("%ld",&s[i].ph);
    }
    display (s,n);
    return 0;
}