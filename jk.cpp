#include<stdio.h>
void action1(int dArray[],int n)
{
         int i;
    for(i=0;i<n;i++)
         {
                   scanf("%d",&dArray[i]);
         }
}
void action2(int*p,int n)
{
    int    min=*p,max=*p,mark1,mark2;
    int i,t;
    for(i=0;i<n;i++) //�� 
    {
             
             if(*(p+i)<=min) 
                   {
                      min=*(p+i);
                      mark1=i;
                   }
                   if(*(p+i)>=max) 
                   {
                      max=*(p+i);
                      mark2=i;
                   }
             
         }
         printf("%d %d %d %d",mark1,mark2,min,max);
         t=*p;
         *p=min;//����С 
         *(p+mark1)=t;
         //min=t;  //�� 
         
         t=*(p+9);
         *(p+9)=max;//����� 
         *(p+mark2)=t;
         //max=t;   //�� 
}
int main()
{
         int a[10],i;
         printf("������10��������\n");
         action1(a,10);
         action2(a,10);  
         printf("�����\n");
 
         for(i=0;i<10;i++)
         {
           printf("%d ",a[i]);
         }
         return 0;
}


