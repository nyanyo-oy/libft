#include <string.h>
#include <stdio.h>

char *strchr(const char *s, int c);
char *strrchr(const char *s, int c);

int main(void)
{
    // 基本的なテストケース
    const char *str1 = "Hello, World!";
    printf("=== 基本テスト ===\n");
    printf("文字列: %s\n", str1);
    printf("strchr('o'): %s\n", strchr(str1, 'o'));
    printf("strrchr('o'): %s\n", strrchr(str1, 'o'));

    // 複数の同じ文字がある場合
    const char *str2 = "mississippi";
    printf("\n=== 重複文字テスト ===\n");
    printf("文字列: %s\n", str2);
    printf("strchr('i'): %s\n", strchr(str2, 'i'));
    printf("strrchr('i'): %s\n", strrchr(str2, 'i'));

    // 特殊なケース
    const char *str3 = "test\0test";  // NULL文字を含む
    printf("\n=== 特殊ケーステスト ===\n");
    printf("strchr('\\0'): %s\n", strchr(str3, '\0'));
    printf("strrchr('\\0'): %s\n", strrchr(str3, '\0'));

    // 存在しない文字
    printf("\n=== 存在しない文字テスト ===\n");
    printf("strchr('x'): %s\n", strchr(str1, 'x'));
    printf("strrchr('x'): %s\n", strrchr(str1, 'x'));

    // 空文字列
    const char *str4 = "";
    printf("\n=== 空文字列テスト ===\n");
    printf("strchr('a'): %s\n", strchr(str4, 'a'));
    printf("strrchr('a'): %s\n", strrchr(str4, 'a'));

    return (0);
}