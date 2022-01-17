//202110547, 황윤선, C프로그래밍(0452), train.c, 2021/04/03
#include <stdio.h>
#define	MIN_PER_HOUR 60
#define SEC_PER_MIN 60
int main(void)
{
	int a; //두 기차 사이의 거리
	int b, c; //첫 번째 기차의 속도 : b, 두 번째 기차의 속도 : c
	double t; //충돌시간(분)
	double s, x; //달린 거리
	int hour;
	int minute;
	int second;

	printf("두 기차 사이의 거리 (km)를 입력하시오:\n");
	scanf("%d", &a);

	printf("첫 번째 기차의 속도 (km/h)를 입력하시오:\n");
	scanf("%d", &b);

	printf("두 번째 기차의 속도 (km/h)를 입력하시오:\n");
	scanf("%d", &c);

	t = ((double)a / (b + c)) * MIN_PER_HOUR; //시간=거리/속도
	s = b * (t / MIN_PER_HOUR);
	x = c * (t / MIN_PER_HOUR);

	hour = t / MIN_PER_HOUR; //시간=분/60
	minute = (int)t % MIN_PER_HOUR;; //시간 제외 분
	second = (int)(t * SEC_PER_MIN) % SEC_PER_MIN; //시간, 분 제외 초

	printf("충돌까지 총 %.3lf분 (%d시간 %d분 %d초)가 소요됩니다.\n", t, hour, minute, second);
	printf("첫 번재 기차의 운행 거리는 총 %.2lf(km)입니다.\n", s);
	printf("두 번재 기차의 운행 거리는 총 %.2lf(km)입니다.", x);

	return 0;
}