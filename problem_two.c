/*
Problem 2: Book Reading
 Babul Like to read books. He has N books and they take different times to finish each. He has arranged all the books in a order of finishing time to read them. So the first book will need the least time to finish and last book will take the most time. He has T time to read.
He has given how a list of N number in increasing order. The numbers are the times to finish the books.
You have to tell him how many books he can finish reading at most T time.

Input format:
The first line of input will contain two integers N and T, the number of books and the time has in total.
The next line will contain N numbers in increasing order.

Contraints:

•	1<=N<=10^5
•	0<=T<=10^9

Output format :
print a single integer, the maximum number of books babul can finish reading in T time.
Sample Input:
10 33
1 3 4 6 8 10 12 15 23 36

*/

#include <stdio.h>;
int main()
{
    int N;
    long long T;

    scanf("%d %lld", &N, &T);

    // printf("%d %lld", N, T);

    int books[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &books[i]);
    }
    // printf("\n");

   long long new_time=0;
   int book_count=0;

   for (int i = 0; i < N; i++) {
        if (new_time + books[i] <= T) {
            new_time += books[i];
            book_count++;
        } else {
            break;
        }
    }

    printf("%d\n", book_count);
    
    return 0;
}
