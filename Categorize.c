#include<stdio.h>
int main()
{
    float a;
    scanf("%f",&a);
    if(a<150)
    {
        printf("The person is Dwarf.");
    }
    else if(a>=150 && 165>a)
    {
        printf("The person is average heighted.");
    }
    else if(a>165 && 195>=a)
    {
        printf("The person is taller.");
    }
    else if(a>195)
    {
        printf("Abnormal height.");
    }
}