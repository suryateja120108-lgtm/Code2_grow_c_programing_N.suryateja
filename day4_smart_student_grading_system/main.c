#include <stdio.h>
int main()
{
float m1, m2, m3, m4, m5;
float  attendance,total, percentage;
char grade,remarks[20];
printf("Enter marks in 5 subjects (out of 100): ");
scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5);
printf("Enter attendance percentage:");
scanf("%f",&attendance);
if ((m1<0 || m1>100) || (m2<0 || m2>100) ||(m3<0 || m3>100) || (m4<0 || m4>100) ||(m5<0 || m5>100) || (attendance<0 || attendance>100))
{
printf("\nError: Invalid input! Marks and attendance must be between 0 and 100.\n");
return 0;
}
total=m1+m2+m3+m4+m5;
percentage=total/5.00;
if (attendance<75)
{
grade='F';
printf(remarks,"Fail");
}
else
