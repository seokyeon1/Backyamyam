//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main(void) {
//    int arr[101][101];
//    int n, m;
//    scanf("%d %d", &n, &m);
//    int x = 1;
//    int i = 1;
//    int j = m;
//
//    for (int j = 1; j <= n + m; j++)
//    {
//        int temp_j = j;
//        if (temp_j > m) {
//
//            temp_j = m;
//            i++;
//        }
//
//        int temp_i = i;
//        if (temp_i + temp_j > n + m)
//        {
//            break;
//        }
//        while (temp_j > 0)
//        {
//            if (j + 1 == temp_i + temp_j)
//            {
//                arr[temp_i][temp_j] = x++;
//            }
//
//
//            temp_i++;
//            temp_j--;
//
//            if (temp_i > n)
//            {
//                break;
//            }
//        }
//    }
//
//    for (int i = 1; i <= n; i++)
//    {
//        for (int j = 1; j <= m; j++)
//        {
//            printf("\t%d ", arr[i][j]);
//        }
//        printf("\n");
//    }
//
//    return 0;
//
//
//}//ºø±Ý 2¹ø
