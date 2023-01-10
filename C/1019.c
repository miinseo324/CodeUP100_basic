#include <stdio.h>

int main() {
	int y, m, d;
	scanf_s("%d.%d.%d", &y, &m, &d);
	printf("%d.%02d.%02d",y,m,d);
	return 0;
}

// %02d
// % : 명령의 시작
// 0 : 채워질 문자
// 2 : 총 자리 수
// d : 정수