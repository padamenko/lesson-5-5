#include <stdio.h>

main()
{
	int mas[100][100];
	int n,m;
	
	printf("Enter the number of rows: ");
	scanf("%i",&n);
	printf("Enter the number of columns: ");
	scanf("%i",&m);
	
	for(int j=0; j<n; j++)
	{
		for(int i=0; i<m; i++)
		{
			printf("\nEnter item number %i-%i: ", j+1, i+1);
			scanf("%i",&mas[j][i]);
		}
	}
	
	for(int j=0; j<n; j++)
	{
		for(int i=0; i<m; i++)
		{
			printf("%7i",mas[j][i]);
		}
		printf("\n");
	}
	
	printf("\n\n\n\n");
	
	
	for (int i=0; i<n; ++i)
	{
		for (int j=i+1; j<m; ++j)
		{
			int q=mas[i][j];
			mas[i][j]=mas[j][i];
			mas[j][i]=q;
		}
	}
	
	for(int j=0; j<m; j++)
	{
		for(int i=0; i<n; i++)
		{
			printf("%7i",mas[j][i]);
		}
		printf("\n");
	}
}
