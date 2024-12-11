#include "test.h"

#include <stdio.h>
#include <stdlib.h>
size_t	ft_strlen(const char *str)
{
	const char	*s = str;

	while (*s++)
		;
	return (s - str);
}
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dst;
	char	*result;

	dst = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!dst)
		return (NULL);
	result = dst;
	while (*s1 != '\0')
	{
		*dst = *s1;
		s1++;
		dst++;	
	}
	while (*s2 != '\0')
	{
		*dst = *s2;
		s2++;
		dst++;
	}
	if (*s2 == '\0')
		*dst = '\0';
	return (result);	
}

int	main (void)
{
	
	char	*result;

	char	stc1[] = "Apple";
	char	stc2[] = "grape";
	result = ft_strjoin(stc1, stc2);
	printf ("%s\n",result);

}
