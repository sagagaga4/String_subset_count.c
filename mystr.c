#include<stdio.h>
#include<string.h>

int mystrstr(char *s, char *t)
{
	char temp[256] = "";
	int index = 0;

	if(s == NULL || t == NULL )
	{
		return -1;
	}

	int count = 0;

	if(strlen(t) == 1)
	{
		for(int i = 0; i <strlen(s);i++)
		{
			if(t[i] == s[i])
			{
				count++;
			}
		}
	}

	for(int i = 0; i < strlen(t); i++)
	{
		for(int j = 0; j < strlen(s); j++)

		{
			if(s[j] == t[i] && s[j+1] == t[i+1])
			{
				temp[index] = s[j];
				index++;
			}
		}
	}

	temp[index] = '\0';

	for(int i = 0; i < strlen(temp); i++)
	{
		if(t[0] == temp[i])
		{
			count++;
		}
	}

	if(count >= 1)
	{
		printf("Amount of times str t repeats itself inside of str s is : %d\n",count);

	}
	return 0;
}



int main()
{
	char s[] = "ddabcd";
	char t[] = "abc";
	mystrstr(s,t);
	return 0;
}
