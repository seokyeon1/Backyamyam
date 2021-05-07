//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//#include<Windows.h>
//#include<conio.h>
//
//#define MAX 100
//
//int main() {
//	int TERM = 1800;
//	while (1) {
//		int n, a;
//		double prob = 0.5;
//		int q[100];
//		int answer[100];
//		srand((unsigned)time(NULL));
//		printf("n-back training.\n");
//		printf("n > ");
//		scanf("%d", &n);
//		if (n > 24) {
//			n = 24;
//		}
//		printf("start %d-back...\n", n);
//		a = n * 3;
//		for (int i = 0; i < n + a; i++) {
//			Sleep(TERM);
//			int tmp = rand() % 10;
//			if (i >= n && rand() % 2) {
//				tmp = q[i - n];
//			}
//			q[i] = tmp;
//			printf("%d", tmp);
//			Sleep(TERM);
//			printf("\r  \r");
//			if (i >= n) {
//				answer[i - n] = q[i] == q[i - n];
//			}
//		}
//		printf("\nPRESS any Key to show answer\n");
//		_getch();
//		for (int i = 0; i < n + a; i++) {
//			printf("%d, ", q[i]);
//		}printf("\n");
//		for (int i = 0; i < a; i++) {
//			if (answer[i]) {
//				printf("O");
//			}
//			else {
//				printf("X");
//			}
//		}
//		printf("\n0 : exit, 1 : restart 2 : set delay(default : %d )> ", TERM);
//		int aaa;
//		scanf("%d", &aaa);
//		if (aaa == 0) {
//			break;
//		}
//		else if (aaa == 2) {
//			printf("set term (ms) > ");
//			int tmp = 0;
//			scanf("%d", &tmp);
//			if (tmp <= 0 || tmp >= 2000) {
//				printf("invalid value.\n");
//				tmp = 1800;
//			}
//			TERM = tmp;
//			printf("delay : %d.\npress any key to restart...", TERM);
//			_getch();
//		}
//		else {
//			system("cls");
//		}
//	}
//}