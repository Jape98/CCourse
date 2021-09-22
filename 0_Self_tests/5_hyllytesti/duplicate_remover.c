int remove_duplicate_array(char a[],char n)
{
    int i=0, j=0, k=0;
    

  for (i = 0; i < n; i++)
	{
		for(j = i + 1; j < n; j++)
		{
    		if(arr[i] == arr[j])
    		{
    			for(k = j; k < n; k++)
    			{
    				arr[k] = arr[k + 1];
				}
				n--;
				j--;
			}
		}
	}
   
return j;
}
