void trimRight(char a[])
{
    int i=0, i2=0;
    
    char destination[20]={0};
    char letter;

    while(a[i] != '\0')
    {
    
    letter=a[i];
      
      
        if(letter=='\n')
         {
            i++;
            continue;
         }
         else if(letter=='\r')
         {
            i++;
            continue;
         }
         else if(letter==' ')
         {
            i++;
            continue;
         }
            
        destination[i2] = a[i];
        
        i2++;
        i++;
    }
    

i=0;

    while (destination[i] != '\0')
        {
            a[i] = destination[i];
            i++;
        }
    a[i]='\0';
    
}