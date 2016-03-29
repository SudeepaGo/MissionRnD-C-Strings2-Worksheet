/*
OVERVIEW: Given a string, Return the substring of the main string from i index to j index
Indexes start from 0,ith letter and jth letter are included
E.g.: Input: "get_sub_string("abcdefgh",2,5) , Output: "cdef"

INPUTS: A string.

OUTPUT: return substring from [i,j]

INPUT2: I will Code for Mission RnD , 2,10
OUTPUT2:will Code

NOTES: Check Null Strings ,Include stddef for NULL if needed.Create a New string and return it ,dont modfiy
original String
*/

#include <stddef.h>
#include <stdlib.h>

char * get_sub_string(char *str, int i, int j){

	int k, l;

	if (str==NULL)  //Check for null string
        return NULL;

	if (i <= j) //Proceed if i less than or equal to j
	{
		l = j - i + 1;
		char *sub_string = (char *)malloc(sizeof(char)* l); //Dynamic memory allocation to the new string

		l = 0;
		for (k = i; k <= j; k++) //Copy the characters of str within given indices to the new string
		{
			sub_string[l] = str[k];
			l++;
		}
		return sub_string;
	}
	else 
		return NULL;
}
