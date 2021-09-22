void toggle_case(char s[])
{
	int i=0;
	
	while (s[i] != '\0')
	{
		if(s[i] >= 'a' && s[i] <= 'z')
		{
		s[i]=s[i]-32;
		}
		else if (s[i] >= 'A' && s[i] <= 'Z')
		{
		s[i]=s[i]+32;
		}
		else
		{
		i++;
		continue;
		}
		
		i++;
	}
}