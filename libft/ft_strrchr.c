/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kenakamu <kenakamu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 23:08:10 by kenakamu          #+#    #+#             */
/*   Updated: 2024/11/26 21:47:23 by kenakamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*r = NULL;

	while (*s)
	{
		if (*s == (char)c)
			r = s;
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return ((char *)r);
}

//int main(void)
//{
//    // 基本的なテストケース
//    const char *str1 = "Hello, World!";
//    printf("=== 基本テスト ===\n");
//    printf("文字列: %s\n", str1);
//    printf("strrchr('o'): %s\n", ft_strrchr(str1, 'o'));

//    // 複数の同じ文字がある場合
//    const char *str2 = "mississippi";
//    printf("\n=== 重複文字テスト ===\n");
//    printf("文字列: %s\n", str2);
//	printf("strrchr('i'): %s\n", ft_strrchr(str2, 'i'));

//    // 特殊なケース
//    const char *str3 = "test\0test";  // NULL文字を含む
//    printf("\n=== 特殊ケーステスト ===\n");
//	printf("strrchr('\\0'): %s\n", ft_strrchr(str3, '\0'));

//    // 存在しない文字
//    printf("\n=== 存在しない文字テスト ===\n");
//    printf("strrchr('x'): %s\n", ft_strrchr(str1, 'x'));

//    // 空文字列
//    const char *str4 = "";
//    printf("\n=== 空文字列テスト ===\n");
//    printf("strrchr('a'): %s\n", ft_strrchr(str4, 'a'));

//    return (0);
//}