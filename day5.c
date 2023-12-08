/*
You are at the best toffee shop in the town. You see that there are different varieties of toffees in the shop. Each type of toffee costs P rupees and contains C calories. You being a student have a fixed budget B rupees to spend on these toffees. You want to maximize the total calories you gain by eating them. Note : Any toffee can be eaten only once. Your task is to write a program to output the maximum calories you gain with your budget (B rupees).
Input Format

The first line has an integer T denoting the number of test cases.Then T test cases follow. The first line of each test case has an integer N denoting the number of toffees available. The next line consists of B rupees. Third and fourth lines of T test cases having space separated N elements denoting Cost and calories in respective lines.

Constraints

1<=T<=100 1<=N<=1000
Output Format

For each test case print maximized calories earned in separated lines.
Sample Input 0

2
5
30
10 7 9 13 4
12 14 21 15 9
5
25
10 17 9 13 4
12 14 21 15 9
Sample Output 0

56
42
Explanation 0

In the 1st test case, B rupees that is 30, and we have 5 diffrent toffees avaiable. we need to keep the point in mind that calories must be maximized and cost of these purchased toffees shouldn't exceed the max limit of B rupees.*
*/
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int maximize_calories(int N, int B, int costs[], int calories[]) {
    int dp[N+1][B+1];

    for (int i = 0; i <= N; i++) {
        for (int j = 0; j <= B; j++) {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
            else if (costs[i-1] <= j)
                dp[i][j] = (calories[i-1] + dp[i-1][j-costs[i-1]]) > dp[i-1][j] ? (calories[i-1] + dp[i-1][j-costs[i-1]]) : dp[i-1][j];
            else
                dp[i][j] = dp[i-1][j];
        }
    }

    return dp[N][B];
}

int main() {
    int T;
    scanf("%d", &T);

    for (int t = 0; t < T; t++) {
        int N, B;
        scanf("%d", &N);
        scanf("%d", &B);

        int costs[N];
        int calories[N];

        for (int i = 0; i < N; i++) {
            scanf("%d", &costs[i]);
        }

        for (int i = 0; i < N; i++) {
            scanf("%d", &calories[i]);
        }

        int max_calories = maximize_calories(N, B, costs, calories);
        printf("%d\n", max_calories);
    }

    return 0;
}

