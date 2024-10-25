#include <stdio.h>;
#include <string.h>;

int main()
{
    int N;
    int K;
    // printf("hello this is for check");
    scanf("%d %d", &N, &K);

    for (int i = 1; i <= N; i++)
    {
        for (int i = 1; i <= K; i++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}