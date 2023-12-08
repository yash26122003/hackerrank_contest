/*
Write a code to rotate an array circullarly with given value to apply left shift.

Input Format

First line of the input contains t, the number of test cases. Each test case contains R rotate value (left shift). Each test case contains N value (size of array elements). Enter all N space seprated elements.

Constraints

    0<T<1000
    0<R<1000
    0<N<1000
Output Format

N space seprated elements after R rotations.

Sample Input 0

2
3
7
12 43 5 6 7 8 15
2
9
21 43 5 23 87 6 45 90 9
Sample Output 0

6 7 8 15 12 43 5 
5 23 87 6 45 90 9 21 43 
Explanation 0

In first testcase , rotation value is 3. so given array will be shifted 3 position in left side. 6 7 8 15 12 43 5

Submissions: 39
Max Score: 100
Difficulty: Medium
Rate This Challenge:

    
More
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int a;
    scanf("%d",&a);
    for (int b=0;b<a;b++){
        int c,d;
        
        scanf("%d",&c);
        scanf("%d",&d);
        int arr[d];
        for(int z=0;z<d;z++){
            scanf("%d",&arr[z]);
        }
        if(c%d==0){
            for(int m=0;m<d;m++){
                printf("%d ",arr[m]);
            }
            
        }
        else{
            for(int x=(c)%d;x<d;x++){
                printf("%d ",arr[x]);
                
            }
            for(int x=0;x<c%d;x++){
                printf("%d ",arr[x]);
            }
        }
        
       printf("\n"); 
        
    }
    return 0;
}
