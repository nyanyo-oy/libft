/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kenakamu <kenakamu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 18:57:07 by kenakamu          #+#    #+#             */
/*   Updated: 2024/11/02 23:18:54 by kenakamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
size_t ft_strlen(const char *str)
{
	const char *s1;
	while(*s1)
		s1++;
	return(s1 - str);
}
size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	char *d = dst;
	const char *s = src;
	size_t n;
	size_t dlen;
	
	while(*dst != '\0' && --n != 0)	
		d++;
	dlen = d - dst;
	n = size - dlen;
	if(n == 0)
		return(dlen + strlen(s));
	while(*s)
	{
		if(n != 1) //////////
		{
			*d = *s;
			d++;
			n--;
		}
		s++;
	}
	*d = '\0';

	return(dlen + (s - src));
}
int main()
{
    char dst[20];

    // テストケース1: 通常のケース
    strcpy(dst, "Hello ");
    ft_strlcat(dst, "World!", 20, "Normal case");

    // テストケース2: dstがいっぱいの場合
    strcpy(dst, "1234567890123456789");
    ft_strlcat(dst, "overflow", 20, "Full dst");

    // テストケース3: sizeが小さい場合
    strcpy(dst, "Hello");
    ft_strlcat(dst, " World!", 8, "Small size");

    // テストケース4: 空の文字列を追加
    strcpy(dst, "Hello");
    ft_strlcat(dst, "", 20, "Empty src");

    // テストケース5: 空のdstに追加
    dst[0] = '\0';
    ft_strlcat(dst, "Hello", 20, "Empty dst");

    // テストケース6: sizeが0の場合
    strcpy(dst, "Hello");
    ft_strlcat(dst, "World", 0, "Zero size");

    return 0;
}