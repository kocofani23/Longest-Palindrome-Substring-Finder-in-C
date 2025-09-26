#include <stdio.h>
#include <stdlib.h>

/**
@brief: function to find the length of the longest palindrome in a given string
@param1: the string array, dynamically allocated, entered from the user
@param2: start of the string at first, position of first palindrome character after
@param3: end of the string at first, position of last palindrome character after
@param4: count of the length of the longest palindrome present in a string
@returns: int value equal to the length of the longest palindrome in a given string
*/
int longestPal(char *str, int start, int end, int count);

/**
@brief: function to find the biggest of two integers
@param1: first integer value
@param2: second integer value
@returns: the value of the biggest integer
*/
int findMax(int a, int b);

int main()
{
    char *str;
    str = (char*)calloc(100, sizeof(char)); // memory allocation of string of 100 characters
    if(str == NULL){
        printf("Could not allocate memory!"); // if memory allocation failed
        return -1;
    }

    printf("Enter string to check for length of longest palindrome substring: ");
    scanf("%s", str); // user enters the string to be evaluated

    int start = 0; // represents the start of the array
    int end = strlen(str); // represents the end of the array
    int count = 0; // initial count, first equal to 0
    int result; // result variable, will equal to the length of the longest palindrome in the string

    result = longestPal(str, start, end, count); // first call to recursive function
    printf("Length of longest palindrome is: %d", result); // printing the result on the screen

    return 0;
}

int longestPal(char *str, int start, int end, int count)
{
    if(start > end){
        return count; // returns the count when the two pointers cross each other during the two pointer approach
    }

    if(start == end){
        return count + 1; // if the size of the string is 1, returns 1 as the longest palindrome or when no palindrome is present
    }

    if(str[start] == str[end]){ // first case of a palindrome
        count = longestPal(str, (start + 1), (end - 1), count + 2); // recursive call to the function
        return findMax(count, findMax(longestPal(str, (start + 1), end, 0), longestPal(str, start, (end - 1), 0))); //call to
        //function findMax to find the biggest count value
    }

    return findMax(longestPal(str, (start + 1), end, 0), longestPal(str, start, (end - 1), 0));
}

int findMax(int a, int b)
{
    if(a >= b)
        return a; // simple function to determine which of the two integers is bigger
    return b;
}
