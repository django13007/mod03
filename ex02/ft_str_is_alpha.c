
int ft_str_is_alpha(char *str)
{
int a;
a=0;
    while (str[a]!= '\0')
    {
        if ((str[a] >= 'a'  &&  str[a] <= 'z') || (str[a] >= 'A'  &&  str[a] <= 'Z'))
        {
            a++;
        }   
        else 
        return 0; 
    }
return 1; 
}

