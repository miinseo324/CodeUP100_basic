/*
#include <stdio.h>

int main() {
	printf("┌┬┐\n├┼┤\n└┴┘");
	return 0;
}
*/

#include <stdio.h>

int main() {
	printf("\u250C\u252C\u2510\n");
	printf("\u251C\u253C\u2524\n");
	printf("\u2514\u2534\u2518\n");
	return 0;
}

// 유니코드를 사용할 때에는, 앞에 \n을 붙여야한다.