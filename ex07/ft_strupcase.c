
char *ft_strupcase(char *str)
{
    int c = 0;
    
    while (str[c] != '\0')
    {
          str[c]=str[c] - 32;
        c++;
    }
return (str);
}
