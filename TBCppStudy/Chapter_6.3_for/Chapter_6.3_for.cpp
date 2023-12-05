#include <iostream>

using namespace std;

int main() {

	//const int num_students = 5;

	int scores[] = { 84, 92, 76, 81, 56 };

	cout << "sizeof(scores) : " << sizeof(scores) << endl;
	cout << "sizeof(int) : " << sizeof(int) << endl;
	const int num_students = sizeof(scores) / sizeof(int);
	cout << "num_students : " << num_students << endl;


	int max_score = 0;
	int min_score = 100;

	int total_score = 0;

	for (int i = 0; i < num_students; ++i) {
		total_score += scores[i];
		//cout << "total_score : " << total_score << endl;

		//max_score = (max_score < scores[i]) ? scores[i] : max_score;
		
		//cout << "scores[i] : " << scores[i] << endl;
		if (max_score < scores[i]) {
			max_score = scores[i];
		}

		if (min_score > scores[i]) {
			min_score = scores[i];
		}
	}

	cout << "max_score : " << max_score << endl;
	cout << "min_score : " << min_score << endl;

	double avg_score = static_cast<double>(total_score) / num_students;
	//cout << "avg_score : " << avg_score << endl;

	/*int score0 = 84;
	int score1 = 92;
	int score2 = 76;
	int score3 = 81;
	int score4 = 56;

	int total_score = score0 + score1 + score2 + score3 + score4;

	double avg_score = static_cast<double>(total_score) / num_students;*/

	return 0;
}