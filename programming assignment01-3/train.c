//202110547, Ȳ����, C���α׷���(0452), train.c, 2021/04/03
#include <stdio.h>
#define	MIN_PER_HOUR 60
#define SEC_PER_MIN 60
int main(void)
{
	int a; //�� ���� ������ �Ÿ�
	int b, c; //ù ��° ������ �ӵ� : b, �� ��° ������ �ӵ� : c
	double t; //�浹�ð�(��)
	double s, x; //�޸� �Ÿ�
	int hour;
	int minute;
	int second;

	printf("�� ���� ������ �Ÿ� (km)�� �Է��Ͻÿ�:\n");
	scanf("%d", &a);

	printf("ù ��° ������ �ӵ� (km/h)�� �Է��Ͻÿ�:\n");
	scanf("%d", &b);

	printf("�� ��° ������ �ӵ� (km/h)�� �Է��Ͻÿ�:\n");
	scanf("%d", &c);

	t = ((double)a / (b + c)) * MIN_PER_HOUR; //�ð�=�Ÿ�/�ӵ�
	s = b * (t / MIN_PER_HOUR);
	x = c * (t / MIN_PER_HOUR);

	hour = t / MIN_PER_HOUR; //�ð�=��/60
	minute = (int)t % MIN_PER_HOUR;; //�ð� ���� ��
	second = (int)(t * SEC_PER_MIN) % SEC_PER_MIN; //�ð�, �� ���� ��

	printf("�浹���� �� %.3lf�� (%d�ð� %d�� %d��)�� �ҿ�˴ϴ�.\n", t, hour, minute, second);
	printf("ù ���� ������ ���� �Ÿ��� �� %.2lf(km)�Դϴ�.\n", s);
	printf("�� ���� ������ ���� �Ÿ��� �� %.2lf(km)�Դϴ�.", x);

	return 0;
}