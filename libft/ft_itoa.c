/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kensei <kensei@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 21:52:41 by kensei            #+#    #+#             */
/*   Updated: 2024/12/19 17:32:15 by kensei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(int n)
{
	int	numlen;

	if (n < 0)
		n = -n;
	numlen = 1;
	while (n / 10)
	{
		n /= 10;
		numlen++;
	}
	return (numlen);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		numlen;
	int		minus;
	int		digit;

	if (n < 0)
		minus = 1;
	else
		minus = 0;
	numlen = minus + ft_numlen(n);
	str = (char *)calloc(numlen + 1, sizeof(char));
	if (!str)
		return (NULL);
	str[numlen] = '\0';
	if (n == 0)
		str[0] = '0';
	while (n != 0)
	{
		digit = n % 10;
		if (digit < 0)
			digit = -digit;
		str[--numlen] = digit + '0';
		n /= 10;
	}
	if (minus)
		str[0] = '-';
	return (str);
}
#include <stdio.h>  // printf
#include <stdlib.h> // malloc, calloc

// ft_itoa 関数のプロトタイプ宣言
char *ft_itoa(int n);

// 比較関数（外部関数を使わない）
int strings_are_equal(const char *s1, const char *s2)
{
    while (*s1 && *s2)
    {
        if (*s1 != *s2)
            return 0; // 異なる場合
        s1++;
        s2++;
    }
    return (*s1 == '\0' && *s2 == '\0'); // 両方が終端文字なら一致
}

// テスト関数
//void test_ft_itoa(int n, const char *expected)
//{
//    char *result = ft_itoa(n);

//    // 結果を表示
//    printf("Input: %d\n", n);
//    printf("Expected: %s\n", expected);
//    printf("Result:   %s\n", result);

//    // 結果の検証
//    if (result && strings_are_equal(result, expected))
//        printf("Test passed!\n");
//    else
//        printf("Test failed!\n");

//    printf("-------------------\n");

//    // メモリ解放（ft_itoa 内で動的メモリ確保されている場合）
//    if (result)
//        free(result);
//}

//int main(void)
//{
//    // テストケース
//    test_ft_itoa(0, "0");                 // 0 のテスト
//    test_ft_itoa(123, "123");             // 正の数のテスト
//    test_ft_itoa(-456, "-456");           // 負の数のテスト
//    test_ft_itoa(2147483647, "2147483647"); // INT_MAX のテスト
//    test_ft_itoa(-2147483648, "-2147483648"); // INT_MIN のテスト

//    return 0;
//}
