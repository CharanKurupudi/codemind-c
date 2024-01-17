#include<stdio.h>
 int main()
 {
     char str[50];
     int i,j,l=0,temp;
     scanf("%[^
]s",str);
     for(i=0;str[i]!=NULL;i++)
     {
         l++;
     }
     for(i=0,j=l-1;i<=j;i++,j--)
     {
         temp=str[i];
         str[i]=str[j];
         str[j]=temp;
     }
     printf("%s",str);
 }