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
	int i, k = 0, l, len, c;

	if (str == NULL)
		return NULL;

	len = findLen(str);
	/*int last_len = lastWordLength(str, len);
	if (last_len == 0) return "";
	else
	{
		char *last_word = (char *)malloc(sizeof(char)*last_len);
		c = len - last_len;
		while (str[c] != 32)
		{
			last_word[k] = str[c];
			k++;
			c++;
		}
		return last_word;
	}*/
}

int findLen(char *str)
{
	int n = 0;
	while (str[n] != '\0')
		n++;
	return n;
}

/*int lastWordLength(char *str, int n)
{
	int count = 0,c=0;
	for (int i = n - 1; i >= 0; i--) {

	if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
	count++;
	}

	if (str[i] == ' ') {
	if (count == 0) {
		c++;
		if (c == n) return 0;
	continue;
	}
	else {
	// have already go through a word
		return count;
	  }
	 }
	}
}*/

/*int last_len = lastWordLength(str, len);
int l = len - last_len;

while (i < len)
{
if (str[i] != 32)
i++;
if (str[i] == 32)
c++;

}
if (i == len) return str;
if (c == len) return "";


for (i = l + 1; i < len; i++)
{
	last_word[k] = str[i];
	k++;
}*/