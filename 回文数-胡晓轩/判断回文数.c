#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int n=0,i=0,k=0,m=0;
    int count=0;
    int flag=0;
    int a[100];
    scanf("%d",&n);
    m=n;
    while(m>9)
    {
        a[i]=m%10;
        m=m/10;
        i++;
    }
    a[i]=m;
    k=i;
    count=i+1;
    for(i=0;i<count/2;i++)
    {
        if(a[i]!=a[k])
        {
            flag=1;
            break;
        }
        k--;
    }
        if(flag==1)
        {
            printf("此数不是回文数\n");
        }
        else
        {
            printf("此数是回文数");
        }
        system("pause");

    return 0;
}
