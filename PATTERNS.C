PATTERNS USING C


1) Number patterns.

#include<stdio.h>
main()
{
	int row,col;
	int n=1;
	for(row=0;row<=4;row++)
	{
		
		for(col=0;col<=row;col++)
		{
			printf("%d",n);
			n++;
		}
		printf("\n");
	}
}

2) Alphabet snake pattern.

-->#include<stdio.h>
main()
{
	int row,col;
	int n='A';
	for(row=1;row<=5;row++)
	{
		
		for(col=1;col<=row;col++)
		{
			printf("%c",n);
			n++;
		}
		printf("\n");
	}
}

3) Alphabet triangle pattern.

-->#include<stdio.h>
main()
{
		
	char row;
	char col;
	
	for(row='A';row<='E';row++)
	{
		for(col='A';col<=row;col++)
		{
			
		printf("%c",col);
			
		}
		printf("\n");
	}

}

4) Right side triangle.

-->#include<stdio.h>
main()
{
	int row;
	int col;

	for (row = 1;row <= 6; row++)
	{
		for(col = 1;col <= row;col++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (row = 5;row >= 1;row--)
	{
		for(col = 1;col <= row;col++)
		{
			printf("*");
		}
		printf("\n");
	}
}


5) Simple triangle pattern.

-->#include<stdio.h>
main()
{
	int row;
	int col;
	int k;
	int n=9;
	for(row=1;row<=n;row++)
	{
		for(col=n;col>=row;col--)
		{
			printf(" ");
		}
		for(k=1;k<=row;k++)
		if(row%2!=0)
		{
			printf("* ");
		}
		printf("\n");
	}
}

6) Number triangle pattern.

-->#include<stdio.h>
main()
{
	int n;
	printf("Enter the Number :");
	scanf("%d",&n);
	int row;
	int col;
	
	for(row=1;row<=n;row++)
	{
		for(col=1;col<=row;col++)
		{
			if(col%2==0)
			{
				printf("0");
			}
			else
			{
				printf("1");
			}
		}
		printf("\n");
	}
}