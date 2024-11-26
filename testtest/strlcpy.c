#include <stdio.h>
#include <bsd/string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	char		*d;
	char const	*s = src;
	size_t		n;

	d = dst;
	n = size;
	if (n != 0 && --n != 0)
	{
		
		while (1)
		{
				*d = *s;
				d++;
				s++;
			if (*(s-1) == '\0')
				break;
			if (--n != 0)
				break;
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

size_t freeBSD53_strlcpy(char *dst,const char *src, size_t size)
{
	char *d = dst;
	const char *s = src;
	size_t n = size;

	/* Copy as many bytes as will fit */
	if (n != 0 && --n != 0) {
		do {
			if ((*d++ = *s++) == 0)
				break;
		} while (--n != 0);
	}

	/* Not enough room in dst, add NUL and traverse rest of src */
	if (n == 0) {
		if (size != 0)
			*d = '\0';		/* NUL-terminate dst */
		while (*s++)
			;
	}
	return(s - src - 1);	/* count does not include NUL */
}
int main (void)
{
	char dst0[10];
		char dst1[10];
			char dst2[10];
	const char  *src= "6";
	size_t size = 3;

	size_t result0 = strlcpy(dst0, src, size);
	printf("%s ",dst0);
	printf("%zu\n",result0);

	size_t result1 = ft_strlcpy(dst1, src, size);
	printf("%s ",dst1);
	printf("%zu\n",result1);

	size_t result2 = freeBSD53_strlcpy(dst2, src, size);
	printf("%s ",dst2);
	printf("%zu\n",result2);
}
//if(!*str)
//	break; ??

