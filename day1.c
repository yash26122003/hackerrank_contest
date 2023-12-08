/*
You are given a string and your task is to print the sum of upper case characters and lower case characters individually.

Input Format

String consisting of only upper case and lower case characters.

Constraints

1<=length of string<=1000

Output Format

Sum of upper characters and sum of lower characters seperated by a space.

Sample Input 0

aAcbdDF
Sample Output 0

3 4
Explanation 0

upper case character in this test case is A,D,F. so count is 3.

lower case character in this test case is a,c,b,d.so count is 4.
*/


#include <stdio.h>
#include <string.h>
char str[1001];
int main() {
    
    int upperSum = 0;
    int lowerSum = 0;
    int i = 0;


    fgets(str, sizeof(str), stdin);
 

    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            upperSum += 1;
        } else if (str[i] >= 'a' && str[i] <= 'z') {
            lowerSum += 1;
        }
        i++;
    }

    printf("%d %d\n", upperSum, lowerSum);

    return 0;
}
