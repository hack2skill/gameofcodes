# Problem Statement-2

![cover2](https://user-images.githubusercontent.com/72146802/155834307-4a57615a-9a97-473d-92e2-7932c425e9e8.jpg)

***
### Question  

In our virtual land, there's a company named evil corp and a character named Mr Robot.He is planning to take the evil corp down. He planned to do so by hacking their servers and destroying their data. In order to pull off the hack, he needs the key but the key is hidden in a string S. Help him get the key.

You are given a string S of length N  consisting of lowercase letters. The key is made up of 2 parts.
Key= Depth + last string

1.>Depth is the number of times you can successfully divide the string.

You can divide the string S if and only if it is a palindrome of even length.
Also, you can only divide the string into 2 strings of equal length and after dividing, the string S becomes equal to its 1st half.
For eg: 
S= "abba" => after dividing => S="ab"

2.>last string is the smallest possible string formed by dividing the string S repeatedly until the length of the string S becomes odd.

You can take the help of Mr Robot anytime you want including 0.
Mr Robot helps you by replacing the string S with its longest palindromic substring.
For eg S="abcabbacb" => S="bcabbacb".

The longest palindromic substring of a string is the substring which can be read in the same way from both sides(front and back) and is of the longest possible length.
If there is a tie, then he chooses the one which occurs first in the string S.

Input format

There are 2 lines of Input.
In first-line, there's an Integer N denoting the length of the string.
In Second Line you are given the string S.

Output format

Output the Depth in the first line.
In second line print the string D.

Constraint

2≤N≤100000

Sample Input
4
aaaa
Sample Output
2
a
Time Limit: 1
Memory Limit: 256
Source Limit:
Explanation
String S="aaaa".

S is palindrome of even length so divide S. 

S becomes "aa" Depth=1.

S is a palindrome of even length so divide S.

S becomes "a" Depth=2.
***
