
char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	int c = 0;
	while (src[c] != '\0' && c<n)
	{		
		dest[c] = src[c];
		c++;
	}
	dest[c] = '\0';
	return (dest);
}


