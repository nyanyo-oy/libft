#include <stdlib.h>

void *malloc(size_t size);

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // 整数配列のメモリ確保
    int *numbers = (int *)malloc(sizeof(int) * 5);
    
    // NULLチェック
    if (numbers == NULL)
    {
        printf("メモリの確保に失敗しましたにゃ...\n");
        return (1);
    }

    // データの格納
    for (int i = 0; i < 5; i++)
    {
        numbers[i] = i * 10;
    }

    // 内容の表示
    printf("確保したメモリの内容ですにゃ：\n");
    for (int i = 0; i < 5; i++)
    {
        printf("numbers[%d] = %d にゃ！\n", i, numbers[i]);
    }

    // メモリの解放
    free(numbers);
    numbers = NULL;

    return (0);
}


