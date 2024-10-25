/*
Problem 1 : DO IT
You will be given two positive integer N & K. You need to print from 1 to K, and You need to do this N times. Please Look at the sample input and output.

Input format:
Input will contain N and K .
Constraints:
1.	1<=N,K<=100
Output Format:
You need to print from 1 to K, N times. Don’t forget to print new line after printing from 1 to K.

Sample input:
3  5
Sample outut:
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
 */

#include <stdio.h>;
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