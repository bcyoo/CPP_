//bit Flags
//bit Masks

#include <iostream>
#include <bitset>

int main() {
	using namespace std;;

	// bit flags
	// 아이템 여러개를 갖을 경우
	//bool item1_flag = false;
	//bool item2_flag = false;
	//bool item3_flag = false;
	//bool item4_flag = false;
	//// ....
	//
	//// event!
	//item1_flag = true;
	//
	//// die! item2 los
	//item2_flag = false;	
	//
	//if (item3_flag == true) {
	//	// event
	//}
	//
	//if (item3_flag == true) {
	//	item3_flag = false;
	//	item4_flag = true;
	//}
	//invokeEvent(item1_flag, item2_flag, .....);
	//
	//// 아이템 8개인 경우
	//// '<<' left shift를 사용해서 8비트의 각 자리수 마다 비트 자리를 밀어줌 
	//const unsigned char opt0 = 1 << 0; // 0 자리수만큼 비트자리를 민다
	//const unsigned char opt1 = 1 << 1; // 0 자리수만큼 비트자리를 민다
	//const unsigned char opt2 = 1 << 2; // 0 자리수만큼 비트자리를 민다
	//const unsigned char opt3 = 1 << 3; // 0 자리수만큼 비트자리를 민다
	//const unsigned char opt4 = 1 << 4; // 0 자리수만큼 비트자리를 민다
	//const unsigned char opt5 = 1 << 5; // 0 자리수만큼 비트자리를 민다
	//const unsigned char opt6 = 1 << 6; // 0 자리수만큼 비트자리를 민다
	//const unsigned char opt7 = 1 << 7; // 0 자리수만큼 비트자리를 민다
	//cout << "unsigned char opt0 = 1 << 0 : " << bitset<8>(opt0) << endl;
	//cout << "unsigned char opt1 = 1 << 1 : " << bitset<8>(opt1) << endl;
	//cout << "unsigned char opt2 = 1 << 2 : " << bitset<8>(opt2) << endl;
	//cout << "unsigned char opt3 = 1 << 3 : " << bitset<8>(opt3) << endl;
	//cout << "unsigned char opt4 = 1 << 4 : " << bitset<8>(opt4) << endl;
	//cout << "unsigned char opt5 = 1 << 5 : " << bitset<8>(opt5) << endl;
	//cout << "unsigned char opt6 = 1 << 6 : " << bitset<8>(opt6) << endl;
	//cout << "unsigned char opt7 = 1 << 7 : " << bitset<8>(opt7) << endl;
	//
	//unsigned char items_flag = 0;
	//cout << "No item : " << bitset<8>(items_flag) << endl;
	//
	//// event 발생, item0 on
	//items_flag |= opt0;
	//cout << "item0 obtained : " << bitset<8>(items_flag) << endl;
	//
	//// event 발생, item3 on
	//items_flag |= opt3;
	//cout << "item3 obtained : " << bitset<8>(items_flag) << endl;
	//
	//// event 발생, item3 lost
	//items_flag &= ~opt3;
	//cout << "item3 lost : " << bitset<8>(items_flag) << endl;
	//
	//// has item0 ?
	//if (items_flag & opt0) {
	//	cout << "Has item1" << endl;
	//}
	//else {
	//	cout << "Not have item1" << endl;
	//}
	//
	//// has item1 ?
	//if (items_flag & opt1) {
	//	cout << "Has item1" << endl;
	//}
	//else {
	//	cout << "Not have item1" << endl;
	//}
	//
	////obtain item 2, 3 
	//cout << "before obtain item 2, 3  : " << bitset<8>(items_flag) << endl;
	//items_flag |= (opt2 | opt3);
	//cout << "after obtain item 2, 3  : " << bitset<8>(items_flag) << endl;
	//
	//// obtain item2, Not have items1
	//if ((items_flag & opt2) && !(items_flag & opt1)) {
	//	items_flag ^= opt2, items_flag ^= opt1;
	//}
	//cout << "obtain item2, Not have items1 >  : " << bitset<8>(items_flag) << endl;

	
	
	// bit masks
	//
	//RGB Color table 검색
	//16진수로 표현
	//# R R  G G  B B + 알파 = 4byte
	//RR = 1byte
	//GG = 1byte
	//BB = 1byte
	//
	// 0x는 16진수
	//
	// red DA
	// green A5
	// blue 20
	//
	//const unsigned int red_mask = 0xFF0000;
	//cout << "Red Mask   : " << std::bitset<32>(red_mask) << endl;
	//
	//const unsigned int green_mask = 0x00FF00;
	//cout << "Green Mask : " << std::bitset<32>(green_mask) << endl;
	//	
	//const unsigned int blue_mask = 0x0000FF;
	//cout << "blue Mask  : " << std::bitset<32>(blue_mask) << endl;
	//
	//// Hex code #DAA520
	//// RGB vlaue 구하는 법
	//unsigned int pixel_color = 0xDAA520;
	//cout << std::bitset<32>(pixel_color) << endl;
	//
	//unsigned char red = (pixel_color & red_mask) >> 16;
	//cout << "red : " << std::bitset<8>(red) << " " << int(red) << endl;
	//
	//unsigned char green = (pixel_color & green_mask) >> 8;
	//cout << "green : " << std::bitset<8>(green) << " " << int(green) << endl;
	//
	//unsigned char blue = pixel_color & blue_mask;
	//cout << "blue : " << std::bitset<8>(blue) << " " << int(blue) << endl;
	////unsigned char red, green, blue;

	// 숙제
	// 다음 경우 플래그를 바꿔보세요
	// 1. 기사를 봤을 때
	// 2. 기사의 좋아요를 클릭했을 떄
	// 3. 기사의 좋아요를 다시 클릭했을 때
	// 4. 본 기사만 삭제할 때
	
	unsigned char option_viewed  = 0x01;
	cout << "option_viewed    : " << bitset<16>(option_viewed) << endl;

	unsigned char option_edited  = 0x02;
	cout << "option_edited    : " << bitset<16>(option_edited) << endl;
	
	unsigned char option_liked   = 0x04;
	cout << "option_liked     : " << bitset<16>(option_liked) << endl;
	
	unsigned char option_shared  = 0x08;
	cout << "option_shared    : " << bitset<16>(option_shared) << endl;

	unsigned char option_deleted = 0x80;
	cout << "option_deleted   : " << bitset<16>(option_deleted) << endl;

	unsigned char my_article_flags = 0;
	cout << "my_article_flags : " << bitset<16>(my_article_flags) << endl;

	// option_viewed

	// or연산자 |를 주어서 읽음을 표시
	unsigned char viewed_on = my_article_flags | option_viewed;
	cout << "viewed on : " << bitset<16>(viewed_on) << endl;
	unsigned char viewed_off = (my_article_flags & ~option_viewed);
	cout << "viewed off : " << bitset<16>(viewed_off) << endl;

	unsigned char liked_on = my_article_flags | option_liked;
	cout << "liked on : " << bitset<16>(liked_on) << endl;

	unsigned char liked_off = my_article_flags & ~option_liked;
	cout << "liked off : " << bitset<16>(liked_off) << endl;

	unsigned char deleted = my_article_flags | option_deleted;
	cout << "deleted : " << bitset<16>(deleted) << endl;
	


	return 0;
}