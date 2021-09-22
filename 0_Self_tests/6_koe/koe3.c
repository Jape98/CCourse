int occurrences(char s[],char c)
{

	int i=0, letters=0;

	while (s[i] != '\0')
	{
		if (s[i]== c)
		{	
			letters++;
			i++;
		}
		else
		{
			i++;
			continue;
		}
	}
	return letters;
}