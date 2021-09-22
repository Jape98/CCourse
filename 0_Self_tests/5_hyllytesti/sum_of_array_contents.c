 #include <stdio.h>


int main()
{
    int a[15]={0},i=0,n=10,sum=0,number=0;


	printf("Give an array:\n");

	for ( i = 0 ; i < 10; i++ ) {
        scanf( "%d", &number );
        a[ i ] = number;
	}

	printf("Values: ");


	for(i=0; i<n; i++)
    {
		if(a[i] == 0)
		{
			continue;
		}
		else if(a[i+1] > 0)
		{
			printf("%d+",a[i]);
		}
		else
		{
			printf("%d",a[i]);
		}

    }
printf("\n");

/*SUM-------------------------*/
    for(i=0; i<n; i++)
    {

        sum+=a[i];
    }
	printf("%d\n",sum);


    return 0;
}
