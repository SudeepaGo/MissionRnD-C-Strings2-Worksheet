/*
OVERVIEW: Given a string, Count the number of consonants and vowels and copy them to 'consonants' and 'vowels' respectively
Notes : Neglect Space and Other Symbols .Consider Capital Letters too

E.g.: Input: "aB c" , Output: consonants should contain 2 and vowels 1

INPUTS: A string and two int pointers

OUTPUT: Modify the consonants and vowels pointers accordingly with their counts (*consonants=?? ;*vowels=??)

INPUT2: Dont Forget they are pointers ;consonants and vowels are addresses of two variables .

Output: consonants should be ??,vowels should be ??

??:Count them :)

NOTES: Don't create new string , Dont return anything ,you have been given two pointers ,copy values into those .
*/

#include <stddef.h>

int findLength(char *);
int isVowel(char);

void count_vowels_and_consonants(char *str,int *consonants, int *vowels){

	int i = 0,len,p=0,q=0;

	if (str == NULL)           //Check for null string
	{
		p = 0; q = 0;
	}
	else{
		len = findLength(str); //Find the length of str

		while (i < len)
		{
			if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122)) //Check only for alphabets
			{
				if (isVowel(str[i]))
					p++;       //If character is a vowel, increment p
				else
					q++;       //If character is a consonant, increment q
			}
			i++;
		}
	}
	*vowels = p;       //Update the pointers *vowels and *consonants
	*consonants = q;
}

//Function to find length of string
int findLength(char *str)
{
	int n = 0;
	while (str[n]!='\0')
		n++;
	return n;
}

//Function to check for consonants
int isVowel(char c)
{
	if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
		return 1;
	else
		return 0;
}