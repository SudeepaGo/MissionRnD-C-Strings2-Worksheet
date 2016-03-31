/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>

int findStringLen(char *);

int count_word_in_str_way_1(char *str, char *word){
	int count = 0,c,i,j;
	
	int len = findStringLen(word); //Find the length of word

	for (i = 0;str[i] !='\0';) //Loop through the characters of str
	{
		j = 0; c = 0;
		while ((j<len) && (str[i] == word[j])) // Increment c while the count of characters in word is less than len and			                                      
		    {                                   //character in str is equal to character in word
				c++;
				i++;
				j++;
			}
			if (c == len)             //If c is equal to len then increment the count of word
			{
				count++;
				c = 0;
			}
			else                     //Otherwise move to next character in str
				i++;
	}
	return count;
}

int count_word_int_str_way_2_recursion(char *str, char *word){
	return 0;
}

//Function to find length of a string
int findStringLen(char *str)
{
	int length=0;
	while (str[length] != '\0')
		length++;
	return length;
}