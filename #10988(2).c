#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdbool.h> // bool 타입을 사용하기 위해 추가

#define MAX_LEGNTH 100

int main() {
	char str[MAX_LEGNTH];
	bool result = true; // bool을 사용하고 true를 1 대신 사용

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
/*result 변수는 불리언(bool) 타입으로 선언되어 있으며, 
초기값으로 true를 가지고 시작. 이후에 코드에서 문자열을 검사하면서, 
만약 문자열이 팰린드롬이 아니라면 result 변수를 false로 변경.
*/
