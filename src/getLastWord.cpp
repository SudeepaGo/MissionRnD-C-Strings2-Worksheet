/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

int findLen(char *);
int lastWordLength(char *, int);

char * get_last_word(char * str){
	int len,k,count=0; 

	len = findLen(str); // Find length of str

	for (int i = 0; i < len; i++) //Check if there is only one word or character in str
	{                              
		if (str[i] != 32)
			count++;
	}
	if (count == len) return str; //If there is only one word or character, return str itself

	int last_len = lastWordLength(str, len); //Find the length of last word in str

	if (last_len == 0 || str=="") return ""; //if last_len is 0 or str is empty, return empty string
	else
	{
		char *last_word = (char *)malloc(sizeof(char)*last_len); //Otherwise create a new string last_word
		int k = last_len - 1;
		for (int i = len-1;i>=0;i--)
		{
			if (str[i] != 32)               //Copy the last word of str into last_word
			{
				last_word[k] = str[i];
				k--;
			}
			if (k < 0)
			{
				last_word[last_len] = '\0';  //Place null character at the last position 
				return last_word;            //Return last_word
			}
		}	
	}
}

//Funtion to find the length of a string
int findLen(char *str)
{
	int n = 0;
	while (str[n] != '\0')
		n++;
	return n;
}

//Function to find the length of last word
int lastWordLength(char *str, int n)
{
	int count = 0,c=0;
	for (int i = n - 1; i >= 0; i--) {//Traversing the string str from end

	if (str[i]!=32) {           //If character is not a space,increment count
	count++;
	}

	else if (str[i] == 32) { //If character is a space but no other character is encountered yet,
	if (count == 0) {        //then increment c 
		c++;
		if (c == n) return 0; //If all characters are spaces then return 0
	}
	else {
	// have already gone through a word
		return count;
	  }
	 }
	}
}