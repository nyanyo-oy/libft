#include <stdlib.h>
#include <stdio.h>	

int atoi(const char *nptr);

int ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

int main (void)
{
	const char *test_cases[] = {
        "42",           // 通常の正の数
        "-42",         // 負の数
        "+42",         // プラス記号付き
        "   -42",       // 空白を含む
        "0",           // ゼロ
        "abc",         // 無効な入力
        "123abc",      // 数字+文字
        "2147483647",  // INT_MAXの値
        "-2147483648"  // INT_MINの値
    };
	
	for (int i = 0; i < 9; i++)
	{
		int result = atoi(test_cases[i]);
		printf("%d\n",result);	
	}
	for (int i = 0; i < 9; i++)
	{
		int result = ft_atoi(test_cases[i]);
		printf("%d\n",result);	
	}
}

