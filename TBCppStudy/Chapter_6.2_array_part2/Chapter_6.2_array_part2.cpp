#include <iostream>

using namespace std;

#define NUM_STUDENTS 100000

// students_scores 파라미터는 컴파일러는 포인터로 처리함
// doSomething(students_scores)에서 students_scores의 주소값이 파라미터 int students_scores[20]로 복사됨
// 배열을 복사하는 것이 아니라 배열의 첫번째 주소값만 복사

void doSomething(int students_scores[20]) {

	/*
	cout << (int)&students_scores << endl; 에서 students_scores는 배열이 아니고 포인터 변수이다.
	doSomething(students_scores);에서 넘겨받은 배열의 첫번째 주소값을 저장하는 포인터 변수임
	doSomething(students_scores)의 students_scores 주소값을 저장하는 다른 변수이기 때문에 주소가 다르게 나타남
	*/
	cout << "Pointer Variable Address : " << (int)&students_scores << endl;
	cout << "Array address : " << (int)&students_scores[0] << endl; // 가리키고 있는 배열의 첫번째 주소값
	
	cout << students_scores[0] << endl;
	cout << students_scores[1] << endl;
	cout << students_scores[2] << endl;

	cout << "Size in doSomething : " << sizeof(students_scores) << endl; // 포인터로 넘어왔기떄문에 포인터 주소를 저장하는 변수이기에 4byte
}


int main() {

	const int num_students = 20;

	int students_scores[num_students] = { 1, 2, 3, 4, 5, };

	//cout << (int)&students_scores << endl; // array 변수 자체는 1st 주소를 갖고있음
	//cout << (int)&(students_scores[0]) << endl;
	//cout << (int)&(students_scores[1]) << endl; // 한집씩 옆으로 갈수록 주소가 4씩 증가
	//cout << (int)&(students_scores[2]) << endl;

	cout << "Array address : " << (int)students_scores << endl; // 배열로 선언함, 배열 식별자 자체가 주소료 사용됨 
	cout << "Array address : " << (int)&students_scores << endl; // 주소를 복사하는 것이 원소들을 전부 복사하는 것보다 효율적임

	cout << students_scores[0] << endl;
	cout << students_scores[1] << endl;
	cout << students_scores[2] << endl;

	cout << "Size in main : " << sizeof(students_scores) << endl; // Array이기때문에 80byte

	doSomething(students_scores);

	return 0;
}