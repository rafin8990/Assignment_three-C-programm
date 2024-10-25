/* 
Problem 4: Job Application
In your company you have been given a task to sort out the job application according to the candidates experiences.
1.	If experience is less than 1, its “ Entry-level candidate”.
2.	If experience is between 1 and 3 (inclusive), its “ Junior candidate”.
3.	If experience is between 4 and 7 ( inclusive) , it’s a “ Mid-level candidate”
4.	If experience is greater than 7 , its “ Senior Candidate”
You will be given list of N candidates experience. For each of them print what kind of candidate he/she is according the experience.

Input format:
•	The first line will contain an integer N the number of candidates.
•	The next line will contain N numbers, the experience of the candidates.

Constraints: 

•	1<=N<=10^5 
•	you can assume no candidate has experience more than 20. 
Output format:
For each experience, print on of these strings (without quotes) “Entry-level candidate”, “junior candidate”, “Mid-level candidate” and  “Senior candidate” according to the category.
Sample input:
4
4
0
3
2
Sample Output:
Mid-level candidate
Entry-level candidate
junior candidate
Senior candidate
 */

#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int experience;

    for (int i = 0; i < N; i++) {
        scanf("%d", &experience);
        if (experience < 1) {
            printf("Entry-level candidate\n");
        } else if (experience >= 1 && experience <= 3) {
            printf("junior candidate\n");
        } else if (experience >= 4 && experience <= 7) {
            printf("Mid-level candidate\n");
        } else {
            printf("Senior candidate\n");
        }
    }
    
    return 0;
}
