// labStringVer2.cpp: определяет точку входа для консольного приложения.
//


#include <stdio.h>
#include <string.h>
#include <conio.h>
#include "stdafx.h"
#include <iostream> 

void main(int argc, char *argv[])
{
	char str[256];
	int count[26];
	int num = 0; // Номер буквы в алфавите

	printf("Input string: ");
	gets_s(str);
	for (int i = 0; i < 26; i++)
		count[i] = 0;
	for (int i = 0; i < strlen(str); i++)
	{
		num = -1;
		if (str[i] >= 'a' && str[i] <= 'z')
			num = str[i] - 'a';
		if (str[i] >= 'A' && str[i] <= 'Z')
			num = str[i] - 'A';
		if (num >= 0)
			count[num] ++;
	}

	for (int i = 0; i < 26; i++)
	{
		if (count[i] > 0)
			printf("%c - %d\n", 'A' + i, count[i]);
	}

	system("pause");
}