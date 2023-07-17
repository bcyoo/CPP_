// 무치형 Void type

// void type 변수 선언을 할 수가 없다.
// void는 메모리를 차지하지 않기 때문.
// return type이 없을 경우 void 필요
void my_function() {

}

int main() {

	int i = 123;
	float f = 123.456f;

	void *my_void; // *은 주소값



	/*
	각각의 데이터타입 첫 주소는 결국 숫자 301호 401호 등등 3개로 표현됨

	데이터타입이 다르고 데이터 타입 사이즈가 다르더라고 
	그 데이터 주소를 표현하는 데이터양은 동일함

	주소의 데이터 타입은 동일
	그래서 void*로 형변환할수있음

	포인터를 사용할 때 void많이 사용
	*/
	my_void = (void*)&i; // &기호 정수형 i 변수 주소
	my_void = (void*)&f; // 실수형 f 변수 주소

	return 0;
}