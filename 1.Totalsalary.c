#include<stdio.h>

int main()

{
    double basic, hra, da, allow,pf;
    int totalsalary;
    char grade;
    printf("Enter the basic");
    scanf("%d" , & basic);
    printf("Enter the grade");
    scanf("%s" , &grade);
    if (grade == 'A')
    {
        allow = 1700;
    }
    else if  (grade == 'B')
    {
        allow = 1500;
    }
    else
    {
    allow = 1300;
    }
    
    totalsalary = (basic * 0.20) + (basic * 0.50)+ (basic * 0.11)+basic+allow;
    printf("the total salary will be %d", totalsalary);
    return 0;
}
