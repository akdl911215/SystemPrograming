#include <stdio.h>

int main(void)
{
	char str[] = "ABC한글";
	int size = sizeof(str);
	int len = strlen(str);

	printf("배열의 크기: %d\n", size); // 8
	// ABC  1byte x 3 = 3
	// 한글 2byte x 2 = 4
	// Null           = 1
	// ------------------
	//                  8

	printf("문자열 길이: %d\n", len);  // 7
	// 한글이 2씩 길이로 인식되서 7이 출력된다.

	return 0;
}