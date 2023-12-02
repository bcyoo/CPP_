#include <iostream>

using namespace std;


void study_01() {
	//int student1_score; // jack jack
	//int student2_score; // dash
	//int student3_score; // violet

	// Array
	int one_student_score; // 1 variable
	int student_scores[5]; // 5 int

	// Size
	cout << sizeof(one_student_score) << endl; // int = 4byte
	cout << sizeof(student_scores) << endl;    // 5 x 4 byte = 20byte

	one_student_score = 100;

	student_scores[0] = 100; // 1st element
	student_scores[1] = 80;  // 2nd element
	student_scores[2] = 90;  // 3rd element
	student_scores[3] = 50;  // 4th element
	student_scores[4] = 0;   // 5th element

	//student_scores[5] = 30; // 6th element 사용 X

	cout << student_scores[0] << endl;
	cout << student_scores[1] << endl;
	cout << student_scores[2] << endl;
	cout << student_scores[3] << endl;
	cout << student_scores[4] << endl;
	//cout << student_scores[5] << endl;


	cout << student_scores[0] + student_scores[1] / 2.0 << endl;
}

void study_02() { 

	struct Rectangle {
		int length;
		int width;
	};

	cout << sizeof(Rectangle) << endl; // int 2 >> 8byte
	Rectangle rect_arr[10]; // 8 x 10 >> 80byte
	cout << sizeof(rect_arr) << endl;
	rect_arr[0].length = 1;
	rect_arr[0].width = 2;
}

void study_03() {

	enum StudentName {
		JACKJACK,     // 0
		DASH,		  // 1
		VIOLET,	      // 2
		NUM_STUDENTS, // 3
	};

	int my_array[] = { 1, 2, 3, 4, 5 };

	cout << my_array[JACKJACK] << endl;
	cout << my_array[DASH] << endl;
	cout << my_array[VIOLET] << endl;
	cout << my_array[3] << endl;
	cout << my_array[4] << endl;
}

void study_04() {

	enum StudentName {
		JACKJACK,     // 0
		DASH,		  // 1
		VIOLET,	      // 2
		NUM_STUDENTS, // 3
	};

	int student_scores[NUM_STUDENTS];
	student_scores[JACKJACK] = 0;
	student_scores[DASH] = 100;
}


#define NUM_STUDENTS 100000

 
// 파라미터로 students_scores 넘어오는것은 배열이아님
// students_scores 포인터임
void doSomething(int students_scores[]) {
	cout << (int)&students_scores << endl; // 포인터 변수의 주소 
										   // doSomething(students_scores);의 배열의 첫번째 주소값을 저장하는 포인터 변수
	cout << (int)&students_scores[0] << endl;
	cout << students_scores[0] << endl;
	cout << students_scores[1] << endl;
	cout << students_scores[2] << endl;

	cout << "Size in doSomething : " << sizeof(students_scores) << endl; // 포인터 사이즈
	// 64비트 컴파일 경우 8바이트
	// 32비트 컴파일 경우 4바이트
}

int main() {

	const int num_students = 20;
	//cin >> num_students;

	// students_scores 배열은 이름 자체가 주소로 사용됨
	// &붙이지 않아도 주소를 얻을 수 있음
	int students_scores[num_students] = {1, 2, 3, 4, 5, }; // 배열로 선언됨

	cout << (int)students_scores << endl;
	cout << (int)&students_scores << endl;
	cout << students_scores[0] << endl;
	cout << students_scores[1] << endl;
	cout << students_scores[2] << endl;
	cout << "Size in main : " << sizeof(students_scores) << endl;

	doSomething(students_scores);

	return 0;
}