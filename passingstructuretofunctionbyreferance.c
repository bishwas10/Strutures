//Wap to demonstrate passing structure to function by referance
#include <stdio.h>
struct student 
{
    char name [20];
    int roll;
    float marks;
    char address[50];
    long int ph;
};
void display (struct student *s)
{
  printf ("Name    Roll Number         Marks        Address        Phone Number:\n");
  printf ("%s      %d        %.2f         %s         %ld\n", s->name,s->roll,s->marks, s->address,s->ph);


}
int main ()
{
    struct student s;
    printf ("Enter the name of Student \n");
    scanf ("%s",s.name);
    printf ("Enter the Roll Number of Students \n");
    scanf ("%d",&s.roll);
    printf ("Enter the marks of the students\n");
    scanf ("%f",&s.marks);
    printf ("Enter the address of the student\n");
    scanf ("%s",s.address);
    printf ("Enter the phone \n");
    scanf ("%ld",&s.ph);
    display (&s);
    return 0;

} 