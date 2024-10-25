/*
Problem 3: Price Range
Abul is planning to buy a smartphone. He has N smartphones available to buy of different prices. But he wants to buy a smartphone in a range between X and Y.
He has given you the price list.
Can you tell him how many smartphones are available in that price range.

Input Format:
The first line of the input will contain 3 integers N, X,Y the number of phones and the range.
The next line will contain N numbers p1, p2, p3 ….. pn the prices of N phones

Constraints:
    • 1<=N<=10^5
    • 1<=Pn, X,Y<=10^9

Output format:
Print an integer. The number of phones available in his preferred range.

Sample input:
10 4 8
8 7 2 3 1 10 25 8 13 5
Sample Output:
4
 */

#include <stdio.h>

int main()
{
    int N, X, Y;
    scanf("%d %d %d", &N, &X, &Y);

    int count = 0;
    for (int i = 0; i < N; i++)
    {
        int price;
        scanf("%d", &price);
        if (price >= X && price <= Y)
        {
            count++;
        }
    }
    printf("%d\n", count);

    return 0;
}
