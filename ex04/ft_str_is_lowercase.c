#include <stdio.h>
int ft_str_is_lowercase(char *str)
{
    int c = 0;
    
    while(str[c] != '\0')
    {
        if ((str[c] >= 'a' && str[c] <= 'z'))
        {
           c++;
        } 
        else 
        return(0);
    }
return(1);
    

}
