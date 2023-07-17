//문자형 character

// ascii code 

#include <iostream>
#include <limits>

int main() {
	using namespace std;

	//char c1(65);  //c1 = 65, c1{65}
	//char c2('A'); // 문자 한개일 경우 '', 문자 열일 경우 ""

	//cout << c1 << " " << c2 << " " << int(c1) << " " << int(c2) << endl;
	//

	//// 강제변환
	//// C-style casting
	//cout << (char)65 << endl;
	//cout << (int)'A' << endl;
	//// C++-style casting
	//cout << char(65) << endl;
	//cout << int('A') << endl;

	//// 컴파일러한테 문제 없나 미리 체크 개념
	//cout << static_cast<char>(65) << endl;
	//cout << static_cast<int>('A') << endl;


	//// satic_cast에 변수도 넣을 수 있음
	//char ch(97);
	//cout << static_cast<int>(ch) << endl;
	//cout << ch << endl;

	//char c1(65);  //char는 한글자만 입력 받을 수 있음

	//cin >> c1;
	//cout << c1 << " " << static_cast<int>(c1) << endl;

	//cin >> c1;
	//cout << c1 << " " << static_cast<int>(c1) << endl;

	//cin >> c1;
	//cout << c1 << " " << static_cast<int>(c1) << endl;
	//
	//cin >> c1;
	//cout << c1 << " " << static_cast<int>(c1) << endl;

	//// 127 ~ -128
	//cout << sizeof(char) << endl;
	//cout << (int)std::numeric_limits<char>::max() << endl;
	//cout << (int)std::numeric_limits<char>::lowest() << endl;

	//// 0 ~ 255
	//cout << sizeof(unsigned char) << endl;
	//cout << (int)std::numeric_limits<unsigned char>::max() << endl;
	//cout << (int)std::numeric_limits<unsigned char>::lowest() << endl;


	// \n 줄바꿈 : 버퍼에만 담기고 콘솔에 출력이 안될 수도 있음
	// endl : 버퍼에 있는것을 화면에 출력하라는 의미
	cout << "This is first line \nsecond line\n";
	cout << "This is first line"<< endl << "second line\n";
	
	cout << "std::flush no second line" << std::flush; // 줄바꿈 X
	cout << int('\n') << endl;

	// tab
	cout << int('\t') << endl;
	// \" 한개의 글자로 인식
	cout << "This is first line \tsecond line\"";

	wchar_t c;
	char32_t c3;

	std::cout << "Hello, ф or \u0444!\n";
	
	return 0;
}