#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*int main() {
	int a;
	scanf("%d", &a);
	for (int i = 1; i < 10; i++)
	{
		printf("%d * %d = %d\n", a, i, a * i);
	}
}*/   //for�� ������ 
/*int main() {
	int a = 1;
	while (a < 10)
	{
		printf("7 * %d = %d\n", a, 7 * a);
		a++;
	}
}*/ //while�� 7�� ������
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
}*/ // ��ø �ݺ��� 1~9��
/*int main() {
	 �迭�̶� ���� Ÿ���� ������� �̷���� ���� ����
	int a; //�Է� �� ����
	int arr[10][10] = {0, };
	int i, j;
	int num = 1;

	scanf("%d", &a); 

	 �Է�
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
}*/ // �Է��� ���� ��ŭ �࿭�� ����ϱ�
/*int main() {
	int a; //�Է� �� ����
	int arr[10][10] = { 0, };
	int i, j;
	int num = 1;

	scanf("%d", &a);

	 �Է�
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
}*/ //�Էµ� ���ڸ�ŭ ���η� ����ϱ�(�迭)
/*int main() {
	int a; //�Է� �� ����
	int arr[10][10] = { 0, };
	int i, j;
	int num = 1;

	scanf("%d", &a);

	 �Է�
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
}*/ // �ڿ������� ��� �迭
/*int main() {
	int a; //�Է� �� ����
	int arr[10][10] = { 0, };
	int i, j;
	int num = 1;

	scanf("%d", &a);

	 �Է�
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
}*/ // j�� ������ġ �ٲٱ� �迭
/*
������
�޸𸮶� 
�޸� �ּ� : ������ ������ �޸��̸� ��� �޸𸮴� �ڽ��� ��ġ�� �ĺ��ϱ� ����
�ٰŷ� ������ȣ(�Ϸù�ȣ)�� ���µ�, �� ��ȣ�� �޸� �ּҶ� ��.

������ �̷�� �� ���� ��� 
1. �̸��� �ο��� �޸�
2. �� �ȿ� ��� ����
3. �޸��� �ּ�

- � ������ �ǿ����ڷ� ����Ѵٸ� ��κ� ������ ����� ������ ���꿡 ����
- � �����ڴ� �޸𸮿� ����� ������ �ƴ϶� ������ �̸�, �� �޸� ��ü��
������ ����.
%p : �ּҸ� ����ϴ� ���Ϲ���

�����Ͷ�
������ ���� : �޸��� �ּҸ� �����ϱ� ���� ����

�������� ������
- �������� ������ : �ּҿ���� ���ݴ�Ǵ� ������ ������ (*) <-> (&)
���� : ���Ǵ�� �޸𸮿� ���� ���̿� �ؼ����, �� �ڷ����� �����Ѵٴ� ��.
�ڷ��� : ���� ���� (Ȥ�� ũ��)�� �޸𸮿� ����� ������ �ؼ��ϴ� ���
�������� : ����� �� �ִ� ������ �����ּҷ� ������� ��ġ(�ּ�)�� �ĺ��ϴ� ���

�����Ϳ� �迭
�迭�� �̸��� �迭�� ���� �ּ� ���� �ǹ��ϸ�, �� ���´� ���� ������
�Ұ����� ����̴�.
�迭�� �̸��� �ּ��̹Ƿ� ������ ������ ������ �� �ִ�.*/
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

	//pnData ������ ������ ����Ű�� ��� �޸𸮸� int �� ������ ���������ϰ� 20�� �����Ѵ�.
	// ���� ����Ű�� ��� �޸𸮴� ���� x�� �޸��̹Ƿ� x�� ���� 20�� �ȴ�.

	*pnData = 20;
	printf("x : %d\n", x);
	return 0;
	*/
/*
int num1 = 100, num2 = 100;

	int* pnum;

	pnum = &num1; // ������ pnum�� num1 �� ����Ŵ
	printf("num1 : %d, &num1 : %p,pnum : %p, *pnum : %d\n", num1, &num1, pnum, *pnum);
	(*pnum) += 30; // num1 += 30; �� ����
	printf("num1 : %d, &num1 : %p, pnum : %p, *pnum : %d\n", num1, &num1, pnum, *pnum);

	pnum = &num2; // ������ pnum�� num2 �� ����Ŵ
	printf("num2 : %d, &num2 : %p, pnum : %p, *pnum : %d\n", num2, &num2, pnum, *pnum);
	(*pnum) -= 30; // num2 -= 30; �� ����
	printf("num2 : %d, &num2 : %p, pnum : %p, *pnum : %d\n", num2, &num2, pnum, *pnum);
*/
/*
int arr[3] = { 0, 1, 2 };
	printf("   �迭�� �̸� : %p \n", arr);
	printf("arr[0]�� �ּ�: %p \n", &arr[0]);
	printf("arr[1]�� �ּ�: %p \n", &arr[1]);
	printf("arr[2]�� �ּ�: %p \n", &arr[2]);

	// int arr[3] = {0};
	// int arr2[3] = {0,1,2};
	// arr = arr2 ���� �߻� arr�� ������ �Ұ�����
	

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
}*/ //�ű��ϳ�
int main() {
	int a[] = { 0 ,0 };

}