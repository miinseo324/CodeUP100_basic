#include <stdio.h>

int main() {
	int y, m, d;
	scanf_s("%d.%d.%d", &y, &m, &d);
	printf("%d.%02d.%02d",y,m,d);
	return 0;
}

// %02d
// % : ����� ����
// 0 : ä���� ����
// 2 : �� �ڸ� ��
// d : ����