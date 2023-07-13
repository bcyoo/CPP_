//Header Guards
#pragma once //ifdef, define, endif 와 같은 역할  

//Header Guards
//#ifndef MY_ADD // MY_ADD가 정의되어있으면 add를 정의하지 X, include가 되어있다면 add를 다시 include X
//#define MY_ADD

int add(int x, int y) {
	return x + y;
}

//#endif