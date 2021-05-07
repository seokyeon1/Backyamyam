//int main() {
//	int a;
//	scanf("%d", &a);
//
//	printf("%d\n", a);
//
//	if (a > 10)
//	{
//		printf("10보다 큰수를 입력하셨습니다.");
//	}
//
//	return 0;
//
//}
/*int a;
scanf("%d", &a);
printf("%d\n", a);

if (a < 0)
{
	printf("minus");
}
*/
/*int a, b, temp;
scanf("%d %d", &a, &b);

if (a < b)
{
	temp = a;
	a = b;
	b = temp;
}

printf("입력받은 수 중 큰 수는 %d이고 작은 수는 %d입니다", a, b);
*/
/*int a, b;
scanf("%d %d", &a, &b);

int result = b + 100 - a;

if (result > 0)
{
	printf("%d\n", result);
	printf("Ovesity");
}*/
/*int score;

printf("점수를 입력해주세요. ");
scanf("%d", &score);

if (score >= 80)
{
	printf("축하합니다. 합격입니다.\n");
}
else
{
	printf("죄송합니다. 불합격입니다.\n");
}
return 0;*/
/*int age;

scanf("%d", &age);

if (age >= 20)
{
	printf("adult");
}
else
{
	printf("%d years later", 20 - age);
}*/
/*int score;

printf("점수를 입력하세요. ");
scanf("%d", &score);

if (score >= 90)
{
	printf("A\n");
}
else if (score >= 80)
{
	printf("B\n");
}
else if (score >= 70)
{
	printf("C\n");
}
else if (score >= 60)
{
	printf("D\n");
}
else
{
	printf("E\n");
}

return 0;*/
/*double weight;

scanf("%lf", &weight);

if (weight <= 50.80)
{
	printf("Flyweight");
}
else if (weight <= 61.23)
{
	printf("Lightweight");
}
else if (weight <= 72.57)
{
	printf("Middleweight");
}
else if (weight <= 88.45)
{
	printf("Cruiseweight");
}
else
{
	printf("Heavyweight");
}*/
/*int num1, num2;

printf("주사위를 두 번 던진 결과를 입력하세요.");
scanf("%d %d", &num1, &num2);

if (num1 >= 4 && num2 >= 4)
{
	printf("이겼습니다.\n");
}
else if (num1 >= 4 || num2 >= 4)
{
	printf("비겼습니다.");
}
else
{
	printf("졌습니다.");
}

return 0;*/
/*double num1, num2;

scanf("%lf %lf", &num1, &num2);

if (num1 >= 4.0 && num2 >= 4.0)
{
	printf("A");
}
else if (num1 >= 3.0 && num2 >= 3.0)
{
	printf("B");
}
else
{
	printf("C");
}*/
//int num1;
//
//scanf("%d", &num1);
//
//int result = ((num1 % 10) * 10) + (num1 / 10);
//result = result * 2;
//result = result % 100;
//
//
//if (result <= 50)
//{
//	printf("%d\n", result);
//	printf("GOOD");
//}
//else
//{
//	printf("%d\n", result);
//	printf("OH MY GOD");
//}

//int a, b, c, max;
//
//printf("세 수를 입력하세요. ");
//scanf("%d %d %d", &a, &b, &c);
//
//if (a > b)
//{
//	if (a > c)
//	{
//		max = a;
//	}
//	else
//	{
//		max = c;
//	}
//}
//else
//{
//	if (b > c)
//	{
//		max = b;
//	}
//	else
//	{
//		max = c;
//	}
//}
//printf("입력받은 수중 가장 큰 수는 %d입니다.", max);

/*char a;
int b;


scanf("%c %d", &a, &b);

if (a == 'M')
{
	if (b >= 18)
	{
		printf("MAN");
	}
	else
	{
		printf("BOY");
	}
}
else
{
	if (b >= 18)
	{
		printf("WOMAN");
	}
	else
	{
		printf("GIRL");
	}
}*/

//int num;
//
//printf("1. 삽입\n");
//printf("2. 수정\n");
//printf("3. 삭제\n");
//printf("숫자를 선택하세요. ");
//scanf("%d", &num);
//
//switch (num)
//{
//case 1:
//	printf("삽입을 선택하였습니다.\n");
//
//	break;
//
//case 2:
//	printf("수정을 선택하였습니다.\n");
//
//	break;
//case 3:
//	printf("삭제를 선택하였습니다.\n");
//
//	break;
//default:
//	printf("잘못 입력하였습니다.\n");
//}
//return 0;

//char a;
//
//scanf("%c", &a);
//
//switch (a)
//{
//case 'A':
//	printf("Excellent");
//	break;
//case 'B':
//	printf("Good");
//	break;
//case 'C':
//	printf("Usually");
//	break;
//case 'D':
//	printf("Effort");
//	break;
//case 'F':
//	printf("Failure");
//	break;
//default:
//	printf("error");
//}
//return 0;

//int score;
//printf("점수를 입력하세요. ");
//scanf("%d", &score);
//
//switch (score / 10)
//{
//case 10:
//case 9:
//	printf("A\n");
//	break;
//case 8:
//	printf("B\n");
//	break;
//case 7:
//	printf("C\n");
//	break;
//case 6:
//	printf("D\n");
//	break;
//default:
//	printf("F\n");
//}

//double num;
//
//scanf("%lf", &num);
//
//switch ((int)num)
//{
//case 4:
//	printf("scholarship");
//	break;
//case 3:
//	printf("next semester");
//	break;
//case 2:
//	printf("seasonal semester");
//	break;
//default:
//	printf("retake");
//	break;
//}

//int a, b, c;
//int max_data;
//
//scanf("%d %d %d", &a, &b, &c);
//
//max_data = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);
//
//printf("%d", max_data);

	/*int a, b, c;
	int max_data;

	scanf("%d %d %d", &a, &b, &c);

	max_data = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);

	printf("%d", max_data);*/

/*
int num1, num2;
	scanf("%d %d", &num1, &num2);

	if (num1 > num2)
	{
		printf("%d", num1 - num2);
	}
	else
	{
		printf("%d", num2 - num1);
	}

	return 0;
	*/

/*
int num1;
	scanf("%d", &num1);
	if (num1 > 0)
	{
		printf("plus");
	}
	else if (num1 < 0)
	{
		printf("minus");
	}
	else
	{
		printf("zero");
	}

	return 0;
	*/

/*
int year;
	scanf("%d", &year);

	if (((year % 4) == 0) && ((year % 100) != 0))
	{
		printf("leap year");
	}
	else
	{
		printf("common year");
	}
	*/

/*
int number;
	printf("Number? ");
	scanf("%d", &number);


	if (number == 1)
	{
		printf("dog");
	}
	else if (number == 2)
	{
		printf("cat");
	}
	else if (number == 3)
	{
		printf("chick");
	}
	else
	{
		printf("I don't know.");
	}
	*/

/*
int month;
	scanf("%d", &month);

	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
	{
		printf("31");
	}
	else if (month == 4 || month == 6 || month == 9 || month == 11)
	{
		printf("30");
	}
	else if (month == 2)
	{
		printf("28");
	}
	*/

/*int a;
	scanf("%d", &a);

	switch (a)
	{
	case 4 :
		printf("30");
		break;
	case 6:
		printf("30");
		break;
	case 9:
		printf("30");
		break;
	case 11:
		printf("30");
		break;
	case 2:
		printf("28");
		break;

	default:
		printf("31");
		break;
	}

*/

/*
int a, b = 1, num3 = 0;
	scanf("%d", &a);

	while (b <= a)
	{
		num3 += b;
		b++;
	}
	printf("%d", num3);
*/

/*
while (1)
	{
		printf("Number? ");
		scanf("%d", &score);

		if (score == 0) break;
		if (score > 0)
		{
			printf("positive integer \n\n");
		}
		else
		{
			printf("negative number \n\n");
		}
	}
	*/

/*
int a = 0;
	int sum = 0, cnt = 0;
	double avg;


	while (1)
	{
		scanf("%d", &a);
		sum = a + sum;
		cnt++;
		if (a >= 100) break;
	}
	avg = (double)sum / cnt;
	printf("%d\n", sum);
	printf("%.1lf", avg);
	*/

/*int num;
int sum = 0, cnt = 0;
int avg;

while (1)
{
	scanf("%d", &num);
	if (num == 0) break;
	if ((num % 2) == 0) continue;
	{
		sum += num;
		cnt++;
	}
}
avg = sum / cnt;
printf("홀수의 합 = %d\n", sum);
printf("홀수의 평균 = %d\n", avg);
*/

/*
int num1;

	printf("1. 입력하기\n");
	printf("2. 출력하기\n");
	printf("3. 삭제하기\n");
	printf("4. 끝내기\n");
	printf("작업할 번호를 선택하세요. ");
	while (1)
	{
		scanf("%d", &num1);
		if (num1 < 0 || num1 >= 5) break;
		if (num1 == 1)
		{
			printf("입력하기를 선택하였습니다.\n\n");

		}
		if (num1 == 2)
		{
			printf("출력하기를 선택하였습니다. \n\n");

		}
		if (num1 == 3)
		{
			printf("삭제하기를 선택하였습니다. \n\n");

		}
		if (num1 == 4)
		{
			printf("끝내기를 선택하였습니다. \n");
			break;
		}
		printf("1. 입력하기\n");
		printf("2. 출력하기\n");
		printf("3. 삭제하기\n");
		printf("4. 끝내기\n");
		printf("작업할 번호를 선택하세요.");
	}
	*/

/*
int a;

	printf("1. Korea\n2. USA\n3. Japan\n4. China\nNumber? \n");
	while (1)
	{
		scanf("%d", &a);
		if (a >= 5) break;
		if (a == 1)
		{
			printf("\nSeoul\n");
		}
		if (a == 2)
		{
			printf("\nWashington\n");
		}
		if (a == 3)
		{
			printf("\nTokyo\n");
		}
		if (a == 4)
		{
			printf("\nBeijing\n");
		}
		printf("1. Korea\n2. USA\n3. Japan\n4. China\n");
	}
	*/

/*int a, b = 1;
	scanf("%d", &a);
	while (b <= a)
	{
		printf("%d", b);
		b++;
	}
	*/

/*
int a, e = 0, o = 0;
	while (1)
	{
		scanf("%d", &a);
		if (a == 0) break;
		if ((a % 2) == 0)
			e++;
		else
			o++;
	}
	printf("odd : %d\n", o);
	printf("even : %d", e);
	*/

/*
int a, sum = 0, avg = 0;
	while (1)
	{
		scanf("%d", &a);
		if (a < 0 || a > 100) break;
		sum = sum + a;
		avg++;
	}
	printf("sum = %d\n", sum);
	printf("avg = %.1lf\n", (double)sum / avg);
	*/

/*int Base, Height;
	char c = 'y';
	
	while (1)
	{
		printf("Base= ");
		scanf("%d", &Base);
		printf("Height= ");
		scanf("%d", &Height);
		printf("Triangle width = %.1f\n", (float)(Base * Height) / 2);
		printf("Contonue? ");
		scanf(" %c", &c);

		if(c == 'y' || c == 'Y') { continue; }
		else break;
	}
	*/

/*
char c;
	int i;
	scanf("%c", &c);
	for (i = 0; i < 21; i++)
	{

		printf("%c", c);
	}
	*/

/*
int i;

	for (i = 10; i < 21; i++)
	{
		printf("%d ", i);
	}
	*/

/*
int i, n;
	scanf("%d", &n);
	for (i = 2; i <= n; i += 2)
	{
		printf("%d ", i);
	}
	*/