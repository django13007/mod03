
#include <stdio.h>
int	ft_str_is_printable(char *str)
{
    int c = 0;
    
    while(str[c] != '\0')
    {
        if ((str[c] >= ' ' && str[c] <= 126))
        {
           c++;
        } 
        else 
        return(0);
    }
return(1);
    
