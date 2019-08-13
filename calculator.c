#include<stdio.h>
main()
{
    int a,b,c,i;
    for(i=1;i>0;i++)
    {
    printf("enter two numbers=");
    scanf("%d%d",&a,&b);
    printf("\n1.Addition\n2.Substruction\n3.Division\n4.Product\n5.EXIT");
    printf("\nenter your choice=");

    scanf("%d",&c);
    if(c==1)
    {
        printf("Summation=%d\n\n",a+b);
    }
    else if (c==2)
    {
        printf("Substruction=%d\n\n",a-b);
    }
    else if(c==3)
    {
        printf("Division=%d\n\n",a/b);
    }
    else if(c==4)
    {
    printf("product=%d\n\n",a*b);
    }
    else if(c==5)
        {
            break;
        }

    }
     printf("\n\n\nEXIT");
}

