/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kensei <kensei@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 18:57:07 by kenakamu          #+#    #+#             */
/*   Updated: 2024/11/08 02:15:29 by kensei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "libft.a"
#include <string.h>

size_t	ft_strlen(const char *str)
{
	const char	*s1 = str;
	while (*s1)
		s1++;
	return (s1 - str);
}

size_t	ft_strlcat(char	*dst, const char *src, size_t size)
{
	char	*d;
	const char	*s = src;
	size_t	n;
	size_t	dlen;
	d = dst;
	n = size;
	
	while (*dst != '\0' && --n != 0)	
		d++;
	dlen = d - dst;
	n = size - dlen;
	if (n == 0)
		return (dlen + strlen(s));
	while (*s)
	{
		if (n != 1)
		{
			*d = *s;
			d++;
			n--;
		}
		s++;
	}
	*d = '\0';
	return (dlen + (s - src));
}
int main()
{
    char dst[20];

    // テストケース1: 通常のケース
    ft_strlcat(dst, "World!", 20);

    // テストケース2: dstがいっぱいの場合
    ft_strlcat(dst, "overflow", 20);

    // テストケース3: sizeが小さい場合
    ft_strlcat(dst, " World!", 8);

    // テストケース4: 空の文字列を追加
    ft_strlcat(dst, "", 20);

    // テストケース5: 空のdstに追加
    dst[0] = '\0';
    ft_strlcat(dst, "Hello", 20);

    // テストケース6: sizeが0の場合
    ft_strlcat(dst, "World", 0);

    return 0;
}