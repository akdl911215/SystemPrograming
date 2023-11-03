#include <stdio.h>
int main(void)
{
	char str[] = "한글입니다";
	int i;

	for (i = 0; i < 5; ++i)
		fputc(str[i], stdout);
	// 한글 출력 이유는 한글자가 두문자로 인식했기 때문이다.
	
	fputc("\n", stdout);

	for (i = 0; i < 10; ++i)
		fputc(str[i], stdout);
	// 한글입니다 출력 이유는 한글자가 두문자로 인식했기 때문이다.
	
	fputc("\n", stdout);

	// 유니코드를 위한 문자자료형 : wchar_t
	// 유니코드를 위한 문자열 
	// "ABC"   > 암묵적으로 아스키코드 기반으로 사용하겠다는 의미
	// "L"ABC" > 암묵적으로 유니코드 기반으로 사용하겠다는 의미

	// WBCS(Wide Byte Character Set) 기반 문자열 선언 예
	// 유니코드 
	wchar_t str[] = L"ABC";

	// MBCS(Multi Byte Character Set) 기반 문자열 선언 예
	// 아스키코드
	char str2[] = "ABC";

	return 0;
}