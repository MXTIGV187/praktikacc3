#include <stdlib.h>
#include <stdio.h>
const int const_stroki = 100, const_ryad = 100, ans_stroki = 100;
void Show_Mass(int mass[const_stroki][const_ryad], int stroki, int ryad)
{
	printf("The full array: \n");
	for (int i = 0; i < stroki; i++)
	{
		for (int j = 0; j < ryad; j++)
			printf("%d ", mass[i][j]);
		printf("\n");
	}
}
void Keyboard_Filling(int mass[const_stroki][const_ryad], int stroki, int ryad)
{
	for (int i = 0; i < stroki; i++)
		for (int j = 0; j < ryad; j++)
		{
			printf("������� �������� ������ �������= \n: ");
			scanf_s("%d", &mass[i][j]);
		}
}
void answer_task1(int mass[const_stroki][const_ryad], int stroki, int ryad)
{
	int c = 0;
	int j = 0;
	for (int j = 0; j < ryad; j++) {
		for (int i = 0; i < stroki; i++) {
			if (mass[i][j] > c) {
				c = mass[i][j];
			}
		}
		printf("����_����= %d ", c);

	}

}
void task1()
{
	int stroki = 0, ryad = 0, mass[const_stroki][const_ryad];
	do
	{
		printf("������� ���-�� ����� � ��������");
		scanf_s("%d%d", &stroki, &ryad);
	} while (stroki > const_stroki or ryad > const_ryad);
	Keyboard_Filling(mass, stroki, ryad);
	Show_Mass(mass, stroki, ryad);
	answer_task1(mass, stroki, ryad);
}
void Show_Mass_8(double mass[const_stroki][const_ryad], int stroki, int ryad)
{
	printf("The full array: \n");
	for (int i = 0; i < stroki; i++)
	{
		for (int j = 0; j < ryad; j++)
			printf("%.1lf ", mass[i][j]);
		printf("\n");
	}
}
void Keyboard_Filling_8(double mass[const_stroki][const_ryad], int stroki, int ryad)
{
	for (int i = 0; i < stroki; i++)
		for (int j = 0; j < ryad; j++)
		{
			printf("\n������� ������� ������ �������: ");
			scanf_s("%lf", &mass[i][j]);
		}
}
void ans_8(double mass[const_stroki][const_ryad], int stroki, int ryad) 
{
	int j;
	double proiz = 1;
	scanf_s("%d", &j);
	for (int i = 0; i < stroki; i++) {
		proiz = mass[i][j] * proiz;
	}
	printf("%lf", proiz);
}
void task8() {
	int stroki = 7, ryad = 6;
	double mass[const_stroki][const_ryad];
	printf("������ ����� 7 ����� � 6 ������� ��������� ��� � ������� ����������");
	Keyboard_Filling_8(mass, stroki, ryad);
	Show_Mass_8(mass, stroki, ryad);
	printf("�������� ��� ��� ���������� ������������= ");
	ans_8(mass, stroki, ryad);
}
void answ24(double mass[const_stroki][const_ryad], int stroki, int ryad)
{
	for (int i=0;i<stroki;i++)
		for (int j = 0; j < ryad; j++)
		{
			if (mass[i][j] < 0) {
				mass[i][j] *= -1;
			}
			else
				mass[i][j] = int(mass[i][j]);
		}
}
void task24() {
	int stroki = 0, ryad = 0;
	double mass[const_stroki][const_ryad];
	do
	{
		printf("������� ���-�� �������� � �����= ");
		scanf_s("%d%d", &stroki, &ryad);
	} while (stroki > const_stroki or ryad > const_ryad);
	Keyboard_Filling_8(mass, stroki, ryad);
	Show_Mass_8(mass, stroki, ryad);
	answ24(mass, stroki, ryad);
	Show_Mass_8(mass, stroki, ryad);
}
int main() {
	system("chcp 1251");
	task8();
	
}
