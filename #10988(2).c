#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_LEGNTH 100

int main() {
	char str[MAX_LEGNTH];
	bool result = true;

	scanf("%s", str);

	for (int i = 0; i < strlen(str) / 2; i++) {
		if (str[i] != str[strlen(str) - 1 - i])
			result = false;
	}

	if (result)
		printf("1");
	else
		printf("0");

	return 0;
}