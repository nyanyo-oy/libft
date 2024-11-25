#include <stdio.h>
#include <bsd/string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	char		*d;
	char const	*s = src;
	size_t		n;

	d = dst;
	n = size;
	if (n != 0)
	{
		while (n)
		{
			*d = *s;
			d++;
			s++;
			n--;
		}
	}
	if (n == 0)
	{
		*d = '\0';
		while (*s)
			s++;
	}
	return (s - src);
}
int main (void)
{
	char dst[10];
	const char  *src= "abc";
	size_t size = 3;

	size_t result0 = strlcpy(dst, src, size);
	size_t result1 = ft_strlcpy(dst, src, size);
	printf("%zu\n",result0);
	printf("%zu\n",result1);
}
//if(!*str)
//	break; ??

