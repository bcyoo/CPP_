#include <iostream>


using namespace std;


void study_01()
{
	int one_students_score; // 4 btye
	int student_scroes[5]; // 5개 int 메모리 4*5 byte

	//cout << sizeof(one_students_score) << endl;
	//cout << sizeof(student_scroes) << endl;

	one_students_score = 100;

	student_scroes[0] = 100; // 1st element
	student_scroes[1] = 80;  // 2nd element
	student_scroes[2] = 90;  // 3rd element
	student_scroes[3] = 50;  // 4th element
	student_scroes[4] = 0;    // 5th element


	for (int i = 0; i < 5; ++i)
	{
		cout << student_scroes[i] << endl;
	}
}

void study_02()
{
	struct Rectangle
	{
		int length;
		int width;
	};

	cout << sizeof(Rectangle) << endl;

	Rectangle rect_arr[10];

	cout << sizeof(rect_arr) << endl;


	rect_arr[0].length = 1;
	rect_arr[0].width = 2;
}

void study_03()
{
	int my_array[] = { 1, 2, 3, 4, 5 };

	for (int i = 0; i < 5; ++i)
	{
		cout << my_array[i] << endl;
	}
}
void study_04()
{
	enum StudentName
	{
		jack,
		dash,
		violet,
		Num_students
	};
	int student_scores[Num_students];

	student_scores[jack] = 0;
	student_scores[dash] = 100;
}

void study_05()
{
	#define NUM_STUDENTS 10000
	const int num_students = 1000;

	int students_scores[NUM_STUDENTS];
	int students_scores[num_students];
}


int main()
{


	return 0;
}
