#include <iostream>

using namespace std;

#define NIM_STIDENT 100000


void study_01()
{
	const int num_students = 20;

	int students_scores[num_students];


	cout << (int)&students_scores << endl; // array 주소              
	cout << (int)&(students_scores[0]) << endl; // array[0] 주소      // index [0]인 경우 array 주소와 같은 주소를 갖고있음  
	cout << (int)&(students_scores[1]) << endl; // array[1] 주소      // [0]에 4를 더한 주소 (int 4byte)
	cout << (int)&(students_scores[2]) << endl; // array[2] 주소		  // [1]에 4를 더한 주소
	cout << (int)&(students_scores[3]) << endl; // array[3] 주소		  // [2]에 4를 더한 주소	


	cout << sizeof(students_scores) << endl;
}

void doSomething(int students_scores[]) //parameter, array x, students_scores은 배열을 받을 때 사용한다, 실제 컴파일러는 포인터로 처리함
{
	cout << (int)&students_scores << endl; // array x, pointer 변수임, 
										   // doSomething(students_scores);에 넘겨받은 students_scores의 첫번재 
										   // 주소값의 포인터 변수임, 자체가 다른 주소값을 가짐

	cout << (int)&students_scores[0] << endl; // 그 포인터에 변수 첫번재 변수에 저장된 
											  // 인덱스 값의 주소값을 가져오게되면, 파라미터로 넘겨받은 원래의 students_scores주소값을 가짐
	cout << students_scores[1] << endl;
	cout << students_scores[2] << endl;

	cout << "Size in doSomething " << sizeof(students_scores) << endl; // 포언티 값이 출력됨 빌드 
																	   // 비트에따라 32bit -> 4byte, 64bit -> 8byte // 주소 자체가 길어짐
	
}

int main()
{

	const int num_students = 20;
	
	/*
	배열의 이름, 식별자 자체가 내부적으로 주소로 사용됨,
	cout << (int)&students_scores << endl;
	cout << (int)students_scores << endl;  이렇게 & 주소연산자를 붙이지 않아도 주소를 얻을 수있음
	*/

	int students_scores[num_students] = { 1, 2, 3, 4, 5, };  // array의 students_scores 자체가 주소가됨,

	cout << (int)&students_scores << endl;
	cout << (int)&students_scores[0] << endl;
	cout << students_scores[1] << endl;
	cout << students_scores[2] << endl;

	cout << "Size in main " << sizeof(students_scores) << endl; // 4byte * 20 = 80
	
	doSomething(students_scores);

	return 0;
}

