//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <iostream>
//
//using namespace std;
//#define MAX_AXES  4
//
//int main()
//{
//
//	int axispos[MAX_AXES];//定义大小为4的位置数组
//	int axisvel[MAX_AXES];//定义大小为4的电平数组
//	int time[10] = { 0 };//定义大小为10的时间数组,值为0
//	for (int i = 0; i < MAX_AXES; i++)
//	{
//		axispos[i] = i;//初始化0，1，2，3，4
//		axisvel[i] = i;//初始化0，1，2，3，4
//	}
//
//	int a[10 * (MAX_AXES * 2 + 1)];//定义大小为90的a数组
//	for (int i = 0; i < 10; i++)
//	{
//		a[i * (2 * MAX_AXES + 1)] = time[i];
//		cout << a[i * (2 * MAX_AXES + 1)] << "|";
//		for (int j = 0; j < MAX_AXES; j++)
//		{
//			a[i * (2 * MAX_AXES + 1) + 2 * j - 1] = axispos[j];
//			a[i * (2 * MAX_AXES + 1) + 2 * j] = axisvel[j];
//			cout << a[i * (2 * MAX_AXES + 1) + 2 * j - 1] << "|" << a[i * (2 * MAX_AXES + 1) + 2 * j] << "|";
//		}
//		cout << endl;
//	}
//
//	return 0;
//}
