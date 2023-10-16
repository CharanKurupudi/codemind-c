#include<stdio.h>
int main()
{
    int BS;
    float DA,HRA,GS;
    scanf("%d",&BS);
    if(BS<=10000)
    {
        DA=0.80*BS;
        HRA=0.20*BS;
        GS=BS+DA+HRA;
        printf("%.2f",GS);
    }
    else if(BS<=20000)
    {
        DA=0.90*BS;
        HRA=0.25*BS;
        GS=BS+DA+HRA;
        printf("%.2f",GS);
    }
    if(BS>20000)
    {
        DA=0.95*BS;
        HRA=0.30*BS;
        GS=BS+DA+HRA;
        printf("%.2f",GS);
    }
}