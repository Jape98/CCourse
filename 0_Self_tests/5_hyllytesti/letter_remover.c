int strip_letters_numbers(char s[])
{
    int i=0, i2=0;
    
    char destination[20]={0};
    char letter;

    while(s[i] != '\0')
    {
    
    letter=s[i];
      
      
        if (letter>='0' && letter<='9')
            {
                i++;
                continue;
            }
        else if(letter>='A' && letter<='Z')
            {
                i++;
                continue;
            }
        else if(letter>='a' && letter<='z')
            {
                i++;
                continue;
            }
            
        destination[i2] = s[i];
        
        i2++;
        i++;
    }
    

i=0;

    while (destination[i] != '\0')
        {
            s[i] = destination[i];
            i++;
        }
    s[i]='\0';
    
	
return i2;
}