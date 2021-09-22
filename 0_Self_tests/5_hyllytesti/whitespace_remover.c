char * trimRight(char *str)
{
    char *end;
    
    while (isspace(*str)) {
        str = str + 1;
    }

    end = str + strlen(str) - 1;
    while (end > str && isspace(*end)) {
        end = end - 1;
    }

    *(end+1) = '\0';
    return str;
}