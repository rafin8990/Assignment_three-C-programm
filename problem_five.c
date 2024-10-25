/* 
Problem 5: Lexic Min Max
You have already solved a problem where you had to find minimum and maximum value among 3 integer numbers. 
Now you will be given 3 strings you have to find lexicographically minimum and maximum string among them.
Input Format: 
The first Line will contain 3 string S1,S2,S3 containing only lowercase Letters.

Constraints: 
1<=|S1|, |S2|, |S3|<=100
Output format: 
In the first line print the lexicographically minimum string.
In the second  line print the lexicographically meximum string.

Sample Input:
abc def ghi
Sample output:
abc
ghi
 */

#include <stdio.h>
#include <string.h>

int main()
{
    char S1[101];
    char S2[101];
    char S3[101];

    scanf("%s %s %s", S1, S2, S3);

    // printf("%s %s %s \n", S1, S2, S3);

    if (strcmp(S1, S2) <= 0 && strcmp(S1, S3) <= 0)
    {
        printf("%s\n", S1);
    }
    else if (strcmp(S2, S1) <= 0 && strcmp(S2, S3) <= 0)
    {
        printf("%s\n", S2);
    }
    else
    {
        printf("%s\n", S3);
    }

    if (strcmp(S1, S2) >= 0 && strcmp(S1, S3) >= 0)
    {
        printf("%s\n", S1);
    }
    else if (strcmp(S2, S1) >= 0 && strcmp(S2, S3) >= 0)
    {
        printf("%s\n", S2);
    }
    else
    {
        printf("%s\n", S3);
    }

    return 0;
}
