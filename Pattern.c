#include <stdio.h>
main()
{
	int i,j;
	for (i=1;i<=6;i++)
	{
		for(j=1;j<=2*i;j++)
		{
			if(j%2==0)
			{
			    printf("1");
		    }
		    else
		    {
		    	printf("0");
			}
		}
		printf("\n");
	}
}
