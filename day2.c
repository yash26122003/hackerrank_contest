/*
Gaurav and Jai are two friends. One fine day Gaurav asks Jai to solve a problem in which there are N boxes of balls numbered from 1 to N and all the boxes are empty.

Everyday Gaurav gives Jai two indices [L,R] and asks him to add 1 to each box from L to R (both inclusive).

He repeated this for M number of Days.

After M days Jai has a query i.e What is the number of boxes those contains atleast X balls.

He has Q such queries .

Input Format

First line contains N - number of ball boxes.

Second line contains M - number of days.

Each of the next M lines consists of two space separated integers L and R.

Followed by integer Q - number of queries.

Each of next Q lines contain a single integer X.

Constraints

1 ≤ N ≤ 10^6

1 ≤ M ≤ 10^6

1 ≤ L ≤ R ≤ N

1 ≤ Q ≤ 10^6

1 ≤ X ≤ N

Output Format

For each query output the number of boxes in new line.

Sample Input 0

7
4
1 3
2 5
1 2
5 6
4
1
7
4
2
Sample Output 0

6
0
0
4
Explanation 0

Let's have a list of ball boxes.

Initially, as shown in the sample test case below we have 7 ball boxes, so let's have an array of 7 integers initialized to 0 (consider 1-based indexing).

array = [0,0,0,0,0,0,0]

After Day 1, array becomes:

array = [1,1,1,0,0,0,0]

After Day 2, array becomes:

array = [1,2,2,1,1,0,0]

After Day 3, array becomes:

array = [2,3,2,1,1,0,0]

After Day 4, array becomes:

array = [2,3,2,1,2,1,0]

Now we have queries on this list:

Query 1: How many boxes have atleast 1 ball?

Ans: Ball boxes 1,2,3,4,5 and 6 have atleast 1 Ball in them. Hence the output is 6.

Query 2: How many boxes have atleast 7 balls?

Ans: We can see that there are no boxes with atleast 7 balls. Hence the output is 0.

Query 3: Similar to Query 2.

Query 4: How many boxes have atleast 2 balls? Ans: Ball boxes 1,2,3 and 5 have atleast 2 coins in them. Hence the output is 4.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(int k=0;k<n;k++){
        arr[k]=0;
    }
    scanf("%d",&i);
    for (int k=0;k<i;k++){
        int p,q;
        scanf("%d %d",&p,&q);
        for (int y=p-1;y<q;y++){
            arr[y]+=1;
        }
    }
    int m;
    scanf("%d",&m);
    for(int k=0;k<m;k++){
        int x;
        scanf("%d",&x);
        int count=0;
        for(int b=0;b<n;b++){
            if(arr[b]>=x){
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
