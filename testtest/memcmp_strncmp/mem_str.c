#include <string.h>

int memcmp(const void *s1, const void *s2, size_t n);
int strncmp(const char *s1, const char *s2, size_t n);

#include <stdio.h>
#include <string.h>

void test_memcmp_strncmp(void)
{
    // 基本的な文字列比較
    char str1[] = "Hello";
    char str2[] = "Hello";
    char str3[] = "Hello\0world";  // NULL文字の後にデータがある
    char str4[] = "Hello\0nice";   // NULL文字の後にデータがある
    
    // ケース1: 通常の文字列比較
    printf("Case 1: 同じ文字列\n");
    printf("memcmp: %d\n", memcmp(str1, str2, 5));    // 0を期待
    printf("strncmp: %d\n", strncmp(str1, str2, 5));  // 0を期待

    // ケース2: NULL文字後のデータ比較
    printf("\nCase 2: NULL文字後のデータ\n");
    printf("memcmp: %d\n", memcmp(str3, str4, 10));   // 0以外を期待
    printf("strncmp: %d\n", strncmp(str3, str4, 10)); // 0を期待（NULL文字で停止）

    // ケース3: バイナリデータの比較
    unsigned char binary1[] = {0x00, 0x01, 0x02};
    unsigned char binary2[] = {0x00, 0x01, 0x03};
    
    printf("\nCase 3: バイナリデータ\n");
    printf("memcmp: %d\n", memcmp(binary1, binary2, 3));   // 負の値を期待
    // ケース4: 部分比較
    char str5[] = "Hello";
    char str6[] = "Help";
    
    printf("\nCase 4: 部分比較（3文字）\n");
    printf("memcmp: %d\n", memcmp(str5, str6, 3));    // 0を期待
    printf("strncmp: %d\n", strncmp(str5, str6, 3));  // 0を期待

    // ケース5: サイズ0の比較
    printf("\nCase 5: サイズ0の比較\n");
    printf("memcmp: %d\n", memcmp(str1, str2, 0));    // 0を期待
    printf("strncmp: %d\n", strncmp(str1, str2, 0));  // 0を期待
}

int main(void)
{
    test_memcmp_strncmp();
    return 0;
}