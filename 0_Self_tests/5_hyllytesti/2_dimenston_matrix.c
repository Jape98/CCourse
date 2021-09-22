void print_matrix(int a[2][2])
{
    int i, j;
    
    for(i=0; i<2; i++)
	{
      for(j=0;j<2;j++)
	  {
         printf("%d", a[i][j]);
		 
         if(j==1)
		 {
            printf("\n");
         }
      }
   }
}