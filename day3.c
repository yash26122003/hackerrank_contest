/*
Thor is out on an expedition with the Avengers. He finds a trail of asteroids with numbers on them. He starts following the trail and notices that two consecutive asteroids have a difference of either a or b. Legend has it that there is an infinity stone at the end of the trail and if Thor can guess the value of the last asteroid, the infinity stone would be his. Given that the number on the first asteroid was 0, find all the possible values for the number on the last asteroid. Note: The numbers on the asteroids are in increasing order.

Input Format

The first line contains an integer T, i.e. the number of test cases. T test cases follow; each has 3 lines. The first line contains n(the number of asteroids). The second line contains a, and the third line contains b.

Constraints

1 <= T <= 10 and

1 <= n,a,b <= 1000

Output Format

Space-separated list of numbers which are the possible values of the last asteroid in increasing order.

Sample Input 0

2
3
1
2
4
10
100
Sample Output 0

2 3 4
30 120 210 300
Explanation 0

Possible values of asteroids for the first test case are the following:

0,1,2

0,1,3

0,2,3

0,2,4

Hence the last asteroid can be at 2 3 4.

Possible values of asteroids for the second test case are given below:

0, 10, 20, 30

0, 10, 20, 120

0, 10, 110, 120

0, 10, 110, 210

0, 100, 110, 120

0, 100, 110, 210

0, 100, 200, 210

0, 100, 200, 300

Hence the last asteroid can be at 30 120 210 300.

Sample Input 1

2
11
3
5
6
5
9
Sample Output 1

30 32 34 36 38 40 42 44 46 48 50
25 29 33 37 41 45
*/

#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int t = 0; t < T; t++) {
        int n, a, b;
        scanf("%d %d %d", &n, &a, &b);

        int lastAsteroid = (n - 1) * (a > b ? b : a);
        printf("%d ", lastAsteroid);
        int count =1;
        if (a != b) {
            for (int i = 0; i < n - 1; i++) {
                lastAsteroid += (b > a ? b : a);
                printf("%d ", lastAsteroid-count*(b < a ? b : a));
                count++;
            }
        }

        printf("\n");
    }

    return 0;
}
