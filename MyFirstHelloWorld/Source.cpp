#include <iostream> // 화면 출력 기능 

/*
std::cout 콘솔 출력 담당, 출력 스트림
<< 연산자 값을 출력 스트림에 삽입하는데 사용
위의 코드에서 << 연산자를 사용하여 "Hello, World!" 문자열을 std::cout에 전달하고, 
다음으로 << 연산자를 사용하여 std::endl을 std::cout에 전달하여 줄바꿈을 수행합니다.
*/

int main() {
	std::cout << "Hello, World!" << std::endl;
	return 0;
}