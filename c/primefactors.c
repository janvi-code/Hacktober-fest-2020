#include<stdio.h>
int fun(int);
int main()
{
    int num,fa;
    scanf("%d",&num);
    fa=fun(num);
    printf("%d\n",fa);
}
int fun(int n)
{
    if(n==1)
        return 0;
    else
    {
        int i=2;
        if(n%i==0)
        {
            printf("%d\n",i);
            n=n/i;
            fun(n);
        }
        else
        {
            i++;
            if(n%i==0)
                printf("%d\n",i);

                n=n/i;
                fun(n);
        }
    }
}
