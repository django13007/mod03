
int ft_str_is_numeric(char *str)
{
    int c = 0;
    while(str[c] != '\0')
    {
        if ((str[c] >= '0' && str[c] <= '9') ) 
        {
           c++;
        } 
        else 
        return(0);  
    }
return(1);
}

