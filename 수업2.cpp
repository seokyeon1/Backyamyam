#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*int main() {
	int a;
	scanf("%d", &a);
	for (int i = 1; i < 10; i++)
	{
		printf("%d * %d = %d\n", a, i, a * i);
	}
}*/   //for문 구구단 
/*int main() {
	int a = 1;
	while (a < 10)
	{
		printf("7 * %d = %d\n", a, 7 * a);
		a++;
	}
}*/ //while문 7단 구구단
/*int main() {
	int i, j;
	for (i = 1; i < 10; i++)
	{
		for (j = 1; j < 10; j++)
		{
			printf("%d * %d = %3d\n", i, j, i * j);
		}
	}
	return 0;
}*/ // 중첩 반복문 1~9단
/*int main() {
	 배열이란 같은 타입의 변수들로 이루어진 유한 집합
	int a; //입력 할 숫자
	int arr[10][10] = {0, };
	int i, j;
	int num = 1;

	scanf("%d", &a); 

	 입력
	for (i = 0; i < a; i++)
	{
		for (j = 0; j < a; j++)
		{
			arr[i][j] += num;
			num++;
		}
	}

	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < a; j++)
		{
			printf("%3d", arr[i][j]);
		}
		printf("\n");
	}
}*/ // 입력한 숫자 만큼 행열로 출력하기
/*int main() {
	int a; //입력 할 숫자
	int arr[10][10] = { 0, };
	int i, j;
	int num = 1;

	scanf("%d", &a);

	 입력
	for (i = 0; i < a; i++)
	{
		for (j = 0; j < a; j++)
		{
			arr[i][j] += num;
			num++;
		}
	}

	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < a; j++)
		{
			printf("%3d", arr[j][i]);
		}
		printf("\n");
	}
}*/ //입력된 숫자만큼 세로로 출력하기(배열)
/*int main() {
	int a; //입력 할 숫자
	int arr[10][10] = { 0, };
	int i, j;
	int num = 1;

	scanf("%d", &a);

	 입력
	for (i = 0; i < a; i++)
	{
		for (j = a - 1; j >= 0; j--)
		{
			arr[i][j] += num;
			num++;
		}
	}

	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < a; j++)
		{
			printf("%3d", arr[i][j]);
		}
		printf("\n");
	}
}*/ // 뒤에서부터 출력 배열
/*int main() {
	int a; //입력 할 숫자
	int arr[10][10] = { 0, };
	int i, j;
	int num = 1;

	scanf("%d", &a);

	 입력
	for (i = 0; i < a; i++)
	{
		for (j = i; j < a; j++)
		{
			arr[i][j] += num;
			num++;
		}
	}

	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < a; j++)
		{
			printf("%3d", arr[i][j]);
		}
		printf("\n");
	}
}*/ // j의 시작위치 바꾸기 배열
/*
포인터
메모리란 
메모리 주소 : 변수의 본질은 메모리이며 모든 메모리는 자신의 위치를 식별하기 위한
근거로 고유번호(일련번호)를 갖는데, 이 번호를 메모리 주소라 함.

변수를 이루는 세 가지 요소 
1. 이름이 부여된 메모리
2. 그 안에 담긴 정보
3. 메모리의 주소

- 어떤 변수를 피연산자로 사용한다면 대부분 변수에 저장된 정보가 연산에 참여
- 어떤 연산자는 메모리에 정장된 정보가 아니라 변수의 이름, 즉 메모리 자체에
관심이 있음.
%p : 주소를 출력하는 포켓문자

포인터란
포인터 변수 : 메모리의 주소를 저장하기 위한 변수

간접지정 연산자
- 간접지정 연산자 : 주소연산과 정반대되는 개념의 연산자 (*) <-> (&)
지정 : 임의대산 메모리에 대한 길이와 해석방법, 즉 자료혈을 지정한다는 뜻.
자료형 : 일정 길이 (혹은 크기)의 메모리에 저장된 정보를 해석하는 방법
간접지정 : 변경될 수 있는 임의의 기준주소로 상대적인 위치(주소)를 식별하는 방식

포인터와 배열
배열의 이름은 배열의 시작 주소 값을 의미하며, 그 형태는 값이 저장이
불가능한 상수이다.
배열의 이름이 주소이므로 포인터 변수에 저장할 수 있다.*/
/*
printf("sizeof(char)   : %d, sizeof(char*)   :%d\n", sizeof(char), sizeof(char*));

printf("sizeof(short)  : %d, sizeof(short*)  : %d\n", sizeof(short), sizeof(short*));

printf("sizeof(int)    : %d, sizeof(int*)    : %d\n", sizeof(int), sizeof(int*));

printf("sizeof(double) : %d, sizeof(double)  : %d\n", sizeof(double), sizeof(double*));

printf("sizeof(long long) : %d, sizeof(long long) : %d\n", sizeof(long long), sizeof(long long*));

return 0;
*/
/*
int x = 10;

	int* pnData = &x;

	printf("x : %d\n", x);

	//pnData 포인터 변수가 가리키는 대상 메모리를 int 형 변수로 간접지정하고 20을 대입한다.
	// 현재 가리키는 대상 메모리는 변수 x의 메모리이므로 x의 값이 20이 된다.

	*pnData = 20;
	printf("x : %d\n", x);
	return 0;
	*/
/*
int num1 = 100, num2 = 100;

	int* pnum;

	pnum = &num1; // 포인터 pnum이 num1 을 가리킴
	printf("num1 : %d, &num1 : %p,pnum : %p, *pnum : %d\n", num1, &num1, pnum, *pnum);
	(*pnum) += 30; // num1 += 30; 과 동일
	printf("num1 : %d, &num1 : %p, pnum : %p, *pnum : %d\n", num1, &num1, pnum, *pnum);

	pnum = &num2; // 포인터 pnum이 num2 를 가리킴
	printf("num2 : %d, &num2 : %p, pnum : %p, *pnum : %d\n", num2, &num2, pnum, *pnum);
	(*pnum) -= 30; // num2 -= 30; 과 동일
	printf("num2 : %d, &num2 : %p, pnum : %p, *pnum : %d\n", num2, &num2, pnum, *pnum);
*/
/*
int arr[3] = { 0, 1, 2 };
	printf("   배열의 이름 : %p \n", arr);
	printf("arr[0]의 주소: %p \n", &arr[0]);
	printf("arr[1]의 주소: %p \n", &arr[1]);
	printf("arr[2]의 주소: %p \n", &arr[2]);

	// int arr[3] = {0};
	// int arr2[3] = {0,1,2};
	// arr = arr2 에러 발생 arr은 변경이 불가능함
	

*/
/*
int arr1[3] = { 1,2,3 };
	double arr2[3] = { 1.1, 2.2, 3.3 };

	printf("arr[0] : %d, arr2[0] : %lf\n", arr1[0], arr2[0]);
	printf("*arr1 : %d, *arr2 : %lf\n", *arr1, *arr2);

	*arr1 += 100;
	*arr2 += 100.0;

	printf("arr[0] : %d, arr2[0] = %lf\n", arr1[0], arr2[0]);
	printf("*arr1 : %d, *arr2 : %lf\n", *arr1, *arr2);
	*/
/*int main() {
	int arr[3] = { 15,25,35 };
	int* ptr = arr;

	printf("ptr	: %p, arr :	%p,	&arr[0]	: %p\n", ptr, arr, &arr[0]);
	printf("ptr+1 :	%p,	arr+1 :	%p,	&arr[1]	: %p\n", ptr + 1, arr + 1, &arr[1]);
	printf("ptr+2 :	%p,	arr+2 :	%p,	&arr[2]	: %p\n", ptr + 2, arr + 2, &arr[2]);
	printf("\n");

	*ptr = 20;

	printf("arr[0] : %d, ptr[0]	: %d, *(ptr+0) : %d\n", arr[0], ptr[0], *(ptr + 0));
	printf("arr[1] : %d, ptr[1]	: %d, *(ptr+1) : %d\n", arr[1], ptr[1], *(ptr + 1));
	printf("arr[2] : %d, ptr[2]	: %d, *(ptr+2) : %d\n", arr[2], ptr[2], *(ptr + 2));
}*/
/*int i;
int arr[5] = { 1,2,3,4,5 };
int* ptr = arr;
printf("ptr : %p, arr : %p\n", ptr, arr);
for (i = 0; i < 5; i++)
	printf("%d ", arr[i]);

printf("\n");
for (i = 0; i < 5; i++)
	printf("%d ", *(ptr + i));

printf("\n");
for (i = 0; i < 5; i++)
	printf("%d ", *(ptr++));

printf("\n");

printf("*ptr : %d\n", *ptr);
printf("ptr : %p, arr : %p\n", ptr, arr);
return 0;
*/
/*
int i, arr[] = { 10,9,8,7,6,5,4,3,2,1 };
	int* ptr = arr;
	int len = sizeof(arr) / sizeof(int);

	for (i = 0; i < len; i++)
	{
		printf("ptr+i : %p, *(ptr+i) : %d, arr : %p\n", ptr + i, *(ptr + i), arr);
		*(ptr + i) *= 2;
	}
	printf("ptr+i : %p, *(ptr+i) : %d, arr : %p\n", ptr + i, *(ptr + i), arr);

	for (i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	*/
/*
int i, arr[] = { 10,9,8,7,6,5,4,3,2,1 };
	int* ptr = arr;

	int total = *ptr, len = sizeof(arr) / sizeof(int);
	printf("ptr : %p, *ptr : %d, total : %d\n", ptr, *ptr, total);
	for (i = 0; i < len - 1; i++)
	{
		total += *(++ptr);
		printf("ptr : %p, *ptr : %d, total : %d\n", ptr, *ptr, total);
	}
	printf("total : %d\n", total);
	return 0;
}
*/
/*
int i, j, arr[] = { 10,9,8,7,6,5,4,3,2,1 };
	int len = sizeof(arr) / sizeof(int), tmp;
	int* fptr = arr, * bptr = arr + len - 1;

	for (i = 0; i < len/2; i++)
	{
		printf("*ftpr :%2d, *bptr :%2d [", *fptr, *bptr);
		tmp = *fptr;
		*fptr = *bptr;
		*bptr = tmp;
		fptr++; bptr--;
		for  (j = 0; j < len; j++)
		{
			printf("%d ", *(arr + j));
		}
		printf("]\n");
	}
	printf("\n");
	for (i = 0; i < len; i++) {
		printf("%d ", *(arr + i));
	}
	*/
/*
	* char str1[] = "I am student!";
	const char* str2 = "I dreamed a dream";

	printf("str1: %s, str2: %s\n", str1, str2);

	str2 = "Chamge String!!!";
	printf("str1: %s, str2: %s\n", str1, str2);

	str1[0] = '*';
	printf("str1: %s, str2: %s\n", str1, str2);

	*/
/*
char str1[] = "I am student!\n";
	const char* str2 = "I dreamed a dream\n";

	printf("I am student!\n");
	printf(str1);

	printf("I dreamed a dream\n");
	printf(str2);
	*/
/*
char buf[] = "abcdefghi";

	*(buf) = '*';
	printf("%s", buf);
	*/
/*int main() {
	int salary = 0, material = 0, price = 0;
	scanf("%d %d %d", &salary, &material, &price);
	if (material >= price)
	{
		printf("%d", -1);
	}
	else
	{
		printf("%d", salary / (price - material) + 1);
	}
	return 0;
}*/
/*int main() {
	int* arr;
	int n[] = { 1226860872, 544039200, 1868701793, 2171257 };

	arr = n;

	printf("%s", arr);

	return 0;
}*/ //신기하네
int main() {
	int a[] = { 0 ,0 };

}