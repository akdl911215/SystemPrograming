#include <stdio.h>

int main(void)
{
	char str[] = "ABC�ѱ�";
	int size = sizeof(str);
	int len = strlen(str);

	printf("�迭�� ũ��: %d\n", size); // 8
	// ABC  1byte x 3 = 3
	// �ѱ� 2byte x 2 = 4
	// Null           = 1
	// ------------------
	//                  8

	printf("���ڿ� ����: %d\n", len);  // 7
	// �ѱ��� 2�� ���̷� �νĵǼ� 7�� ��µȴ�.

	return 0;
}