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
//	int axispos[MAX_AXES];//�����СΪ4��λ������
//	int axisvel[MAX_AXES];//�����СΪ4�ĵ�ƽ����
//	int time[10] = { 0 };//�����СΪ10��ʱ������,ֵΪ0
//	for (int i = 0; i < MAX_AXES; i++)
//	{
//		axispos[i] = i;//��ʼ��0��1��2��3��4
//		axisvel[i] = i;//��ʼ��0��1��2��3��4
//	}
//
//	int a[10 * (MAX_AXES * 2 + 1)];//�����СΪ90��a����
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
