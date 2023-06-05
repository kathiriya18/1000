#include<stdio.h>

calc()
{
	int n,a,b;
	printf("enter your choice =");
	scanf("%d",&n);
	if(n==6)
	{
		printf("exit...");
	}
	else if(n>6)
	{
		printf("plz enter proper value ");
	}
	else if(n>0 && n<=6)
	{
		switch(n)
		{
			case 1:
				   printf("enter value a =");
				   scanf("%d",&a);
				   printf("enter value b =");
				   scanf("%d",&b);
				   printf("addition of a+b=%d",a+b);
				   break;
			case 2:
				   printf("enter value a =");
				   scanf("%d",&a);
				   printf("enter value b =");
				   scanf("%d",&b);
				   printf("substraction of a-b=%d",a-b);
				   break;
			case 3:
				   printf("enter value a =");
				   scanf("%d",&a);
				   printf("enter value b =");
				   scanf("%d",&b);
				   printf("multiplication of a*b=%d",a*b);
				   break;
			case 4:
				   printf("enter value a =");
				   scanf("%d",&a);
				   printf("enter value b =");
				   scanf("%d",&b);
				   printf("division of a/b=%d",a/b);
				   break;
			case 5:
				   printf("enter value a =");
				   scanf("%d",&a);
				   printf("enter value b =");
				   scanf("%d",&b);
				   printf("moduls of a%b=%d",a%b);
				   break;
		    default:
			       printf("plz enter proper choice");		   
		}
	}
}

main()

{
    	printf("press 1 for addition\n");
		printf("press 2 for substraction\n");
		printf("press 3 for multiplication\n");
		printf("press 4 for division\n");
		printf("press 5 for moduls\n");
		printf("press 6 for exit\n");
		
		calc();
}