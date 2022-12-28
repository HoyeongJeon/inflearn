// 윈도우 API, 윈도우 개발을 위한 매크로들, 다양한 함수들 etc 모아놓은 헤더파일
#include <windows.h> 

int main()
{
	/*
	* Beep()함수의 인자
	 1번째 인자 = 주파수(소리), 2번째 인자 = 얼마나 길게
	*/
	Beep(0x200, 0x300); 
	/*
	* MessageBoxA()함수의 인자
	* 1번째 인자 = 
	* 2번째 인자 = 메세지 박스의 내용
	* 3번째 인자 = 메세지 박스의 이름
	* 4번째 인자 =
	*/
	MessageBoxA(0, "Hi, Have a nice day!", "Ho0_Ho0_", 0);
	return 1;
}