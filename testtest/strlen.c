
#include "test.h"

size_t	ft_strlen(const char *str)
{
	const char	*s = str;

	while (*s)
		s++;
	return (s - str);
}