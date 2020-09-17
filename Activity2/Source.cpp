#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<iostream>
#include <string.h>
void isPalindrome(char str[])
{
	int l = 0;
	int h = strlen(str) - 1;
	char* p;
	p = str;
	while (h > l)
	{
		if (*p != str[h--])
		{
			printf("Not Palindrome");
			return;
		}
		p++;
		l++;
	}
	printf("Palindrome");
}
int main()
{
	char str[80];
	scanf("%s", str);
	isPalindrome(str);
	return 0;
}