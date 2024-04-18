
int ft_str_is_uppercase(char *str)
{
    int c = 0;
    
    while(str[c] != '\0')
    {
        if ((str[c] >= 'A' && str[c] <= 'Z'))
        {
           c++;
        } 
        else 
        return(0);
    }
return(1);
    

}

