'''
///

You are given T attempts, and for every attempt,the participant is required to find the factorial for the given number N entered by the user.

Formula for factiorial :-

n! = n × (n−1)!

Input Format

1>T<3

Positive integer/float value for N. if N<0 return message "Wrong"

Constraints

0>N<=10

Output Format

Output will be in Int value in case of propre input value.

Sample Input 0

2
5
2
Sample Output 0

120
2
Explanation 0

For the input 5 the factorial is 120. For the input 2 the value of factorial is 2.You are given T attempts, and for every attempt,the participant is required to find the factorial for the given number N entered by the user.

Formula for factiorial :-

n! = n × (n−1)!

Input Format

1>T<3

Positive integer/float value for N. if N<0 return message "Wrong"

Constraints

0>N<=10

Output Format

Output will be in Int value in case of propre input value.

Sample Input 0

2
5
2
Sample Output 0

120
2
Explanation 0

For the input 5 the factorial is 120. For the input 2 the value of factorial is 2.

///
'''

def factorial(n):
    if n == 0 or n == 1:
        return 1
    else:
        return n * factorial(n-1)

# Number of attempts
T = int(input())

for _ in range(T):
    N = int(input())

    if N < 0:
        print("Wrong")
    else:
        result = factorial(N)
        print(result)
