🔤 Longest Palindromic Substring Finder (C)

This C program finds the length of the longest palindromic substring in a given input string using recursion and a two-pointer approach.

📌 Features

Uses recursion to check palindromic substrings.

Implements a two-pointer technique (start, end).

Custom helper function findMax() to return the maximum length between different cases.

Dynamically allocates memory for input string.

Provides clean separation of logic into functions.

🛠️ Functions
int longestPal(char *str, int start, int end, int count)

Purpose: Recursively checks substrings to find the longest palindrome.

Parameters:

str: The string entered by the user.

start: Starting index for comparison.

end: Ending index for comparison.

count: Current count of palindrome length.

Returns: Length of the longest palindromic substring.

int findMax(int a, int b)

Purpose: Utility function to return the larger of two integers.
