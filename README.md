

# ModernCpp (programming)

This project is a simple project to count number of 'a' letters in a repeated string , more in the problem description. 

# Motivation
You most probably NEVER want to write a raw (for loop) in modern programming. When we all first started learning programming, for loops ( and while loops ) were a main learning topic in these programming languages but now, you almost never want to write a raw for loop again. Normally you write a for loop to accomplish some goal , that was the reason we used to write these loops and its good to learn the concept. 

For example if you want to sum the elements of the array, you write a for loop for that. But quite honestly you don't want to do that because there are some out of the shelf functions that can do that for you and there is no point being NOT DRY ( Don't Repeat Yourself). you can simply use a sum function in the Java Stream API or accumulate function in C++ Standard library.

I am not talking only about the sum, but most the things you wanna do, there is some library or API that can do that for you. That will make your code more easier to read and it will reduce any errors or bugs might be caused from wrongly implementing them, and also performance optimized.

So next time you want to write a loop, for some business reason, ask yourself and search, is there an existing function ( performance optimized ) that can achieve this goal for me?

This example can clearly show you the difference.

in the functions:
repeatedStringElegant
repeatedStringOldSchool

you can see how cleaner the repeatedStringElegant looks like compared to repeatedStringOldSchool!
# Problem:
### a simple problem from HackerRank:

Lilah has a string, **s** , of lowercase English letters that she repeated infinitely many times.

Given an integer, **n** , find and print the number of letter  `a`'s in the first  letters of Lilah's infinite string.

For example, if the string s= 'abcac' and  n=10, the substring we consider is  **abcacabcac** , the first 10  characters of her infinite string. There are 4 occurrences of  `a`  in the substring.

Complete the  _repeatedString_  function. It should return an integer representing the number of occurrences of  `a`  in the prefix of length  in the infinitely repeating string.

repeatedString has the following parameter(s):

-   _s_: a string to repeat
-   _n_: the number of characters to consider

**Input Format**
The first line contains a single string,**s** .  
The second line contains an integer, **n**.

Print a single integer denoting the number of letter `a`'s in the first **n** letters of the infinite string created by repeating **s** infinitely many times.


https://www.hackerrank.com/challenges/repeated-string/problem


##  Tech/framework used

This project is built in:
- Visual Studio 
- C++


## Sample input and outputs:

**Sample Input 0**

    aba
	10
**Sample Output 0**

    7

**Explanation 0**  
The first n= 10 letters of the infinite string are `abaabaabaa`. Because there are 7 `a`'s, we print 7 on a new line.
   
   **Sample Input 1**
   

    a
    1000000000000

**Sample Output 1**

    1000000000000

Because all of the first n = 1000000000000 letters of the infinite string are `a`, we print 1000000000000 on a new line.
