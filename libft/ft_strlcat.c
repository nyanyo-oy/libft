/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kensei <kensei@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 18:57:07 by kenakamu          #+#    #+#             */
/*   Updated: 2024/12/14 04:42:11 by kensei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char	*dst, const char *src, size_t size)
{
	size_t	dlen;
	size_t	slen;
	
	slen = ft_strlen(src);
	if (size == 0)
		return (slen);
	dlen = ft_strlen(dst);
	if (dlen >= size)
		return (size + slen);
	size_t	cpy_len = size - dlen - 1;
	if (cpy_len > 0)
		ft_strlcpy (dst + dlen, src, cpy_len + 1);
	return (dlen + slen);
}
//int main(void)
//{
//    char dst[20];

//    // テストケース1: 通常のケース
//    ft_strlcat(dst, "World!", 20);

//    // テストケース2: dstがいっぱいの場合
//    ft_strlcat(dst, "overflow", 20);

//    // テストケース3: sizeが小さい場合
//    ft_strlcat(dst, " World!", 8);

//    // テストケース4: 空の文字列を追加
//    ft_strlcat(dst, "", 20);

//    // テストケース5: 空のdstに追加
//    dst[0] = '\0';
//    ft_strlcat(dst, "Hello", 20);

//    // テストケース6: sizeが0の場合
//    ft_strlcat(dst, "World", 0);

//    return 0;
//}