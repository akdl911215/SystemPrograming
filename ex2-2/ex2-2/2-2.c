#include <stdio.h>
int main(void)
{
	char str[] = "�ѱ��Դϴ�";
	int i;

	for (i = 0; i < 5; ++i)
		fputc(str[i], stdout);
	// �ѱ� ��� ������ �ѱ��ڰ� �ι��ڷ� �ν��߱� �����̴�.
	
	fputc("\n", stdout);

	for (i = 0; i < 10; ++i)
		fputc(str[i], stdout);
	// �ѱ��Դϴ� ��� ������ �ѱ��ڰ� �ι��ڷ� �ν��߱� �����̴�.
	
	fputc("\n", stdout);

	// �����ڵ带 ���� �����ڷ��� : wchar_t
	// �����ڵ带 ���� ���ڿ� 
	// "ABC"   > �Ϲ������� �ƽ�Ű�ڵ� ������� ����ϰڴٴ� �ǹ�
	// "L"ABC" > �Ϲ������� �����ڵ� ������� ����ϰڴٴ� �ǹ�

	// WBCS(Wide Byte Character Set) ��� ���ڿ� ���� ��
	// �����ڵ� 
	wchar_t str[] = L"ABC";

	// MBCS(Multi Byte Character Set) ��� ���ڿ� ���� ��
	// �ƽ�Ű�ڵ�
	char str2[] = "ABC";

	return 0;
}