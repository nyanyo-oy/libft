
#include <string.h>
#include <stdio.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (haystack == NULL || needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' &&  i < len)
	{
		if (haystack[i] == needle[0])
		{
			while (haystack[i + j] == needle[j] && needle[j] != '\0')
			{
				if (needle[j + 1] == '\0')
					return ((char *)haystack + i);
				j++;
			}
		}
		i++;
	}
	return (NULL);
}

//memcmpで最適化できる余地あり

int main (void)
{
	char big[] = "abc abcd";
	char little[] = "abcd";
	size_t len = 5;
	printf("%s\n",ft_strnstr(big, little, len));
}
