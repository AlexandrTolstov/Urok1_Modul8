#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <Windows.h>
#include <ctime>


void main() {

	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	srand(time(NULL));

	int N1 = 0;
	printf("������� ����� �������\nN = ");

	scanf("%d", &N1);

	if (N1 == 1)
	{
		/*1.	��������� ���������, �������: 
				a.	����������� ��� �������� � ��������� ��� �� ������; 
				b.	����������� ��� �������� � ��������� ��� �� ������ � ������������.
		*/
		char NameMan[20];

		printf("������� ���� ���\n");
		scanf("%19s", NameMan);

		printf("������������ %s!\n", NameMan);
	}
	else if (N1 == 2)
	{
		/*2.	��������� ���������, ������� ����������� �������� ���������� ������� � 
		��������� ��� �� ������ �� ������� "� ��� �������!".*/

		char NameTeam[20];

		printf("������� �������� �������\n");
		scanf("%19s", NameTeam);

		printf("%s - ��� �������!\n", NameTeam);
	}
	else if (N1 == 3)
	{
		/*3.	��������� ���������, ������� ����������� �������� ��� � �������� �������, 
		� ����� ������� �� ��� ���� ���������� ������.*/

		char NameMan[40];
		char SurnameMan[20];

		printf("������� ���� ���\n");
		scanf("%19s", NameMan);
		printf("������� ���� �������\n");
		scanf("%19s", SurnameMan);

		char Probel[] = {' ', '\0'};

		strcat(NameMan, Probel);
		strcat(NameMan, SurnameMan);

		printf("������������ %s!\n", NameMan);
	}
	else if (N1 == 4)
	{
		/*4.	��������� ���������, ������� ����������� �������� ����������� � ��� �������, � ����� ������� ���������: 
		"������� ����������� ... � ����� ..." (�� ����� ���������� ������ ���� �������� ��������������� ��������).*/

		char NameCantry[20];
		char NameCity[20];

		printf("������� �������� �����������\n");
		scanf("%19s", NameCantry);
		printf("������� �������� �������\n");
		scanf("%19s", NameCity);

		printf("������� ����������� %s - ����� %s\n", NameCantry, NameCity);
	}
	else if (N1 == 5)
	{
		/*5.	���� �������� ����������� �����. ���������� ���������� �������� � ���.*/

		char Klub[] = "�����";

		printf("� �������� ����� %s - %d ��������\n", Klub, strlen(Klub));
	}
	else if (N1 == 6)
	{
		/*6.	���� �������� ������. ����������, ����� ��� ��� ���������� �������� � ���*/

		char Gorod[20];

		printf("������� �������� �������\n");
		scanf("%19s", Gorod);

		if (strlen(Gorod) % 2 == 0)
			printf("� �������� ������ %s - ������ ���������� ��������\n", Gorod);
		else printf("� �������� ������ %s - �������� ���������� ��������\n", Gorod);
	}
	else if (N1 == 7)
	{
		/*7.	���� ��� �������.����������, ����� �� ��� �������.*/

		char Surname1[20];
		char Surname2[20];

		printf("������� ������ �������\n");
		scanf("%19s", Surname1);
		printf("������� ������ �������\n");
		scanf("%19s", Surname2);

		if (strlen(Surname1) > strlen(Surname1))
			printf("������� %s ������� ������� %s\n", Surname1, Surname2);
		else printf("������� %s ������� ������� %s\n", Surname2, Surname1);
	}
	else if (N1 == 8)
	{
		char City[3][20];

		int dlinnoe = 0;
		int DlinN = 0;
		int korotkoe = 0;
		int KorN = 0;

		printf("������� ������ �������� ������\n");
		scanf("%19s", City[0]);
		printf("������� ������ ������ ������\n");
		scanf("%19s", City[1]);
		printf("������� ������ ������ ������\n");
		scanf("%19s", City[2]);

		for (int i = 0; i < 3; i++)
		{
			if (DlinN < strlen(City[i]))
			{
				DlinN = strlen(City[i]);
				dlinnoe = i;
			}
			else if (KorN > strlen(City[i]))
			{
				KorN = strlen(City[i]);
				korotkoe = i;
			}
		}
		printf("����� ������� �������� ������ - %s\n", City[dlinnoe]);
		printf("����� �������� �������� ������ - %s\n", City[korotkoe]);
	}
	else if (N1 == 9)
	{
		char Slovo[20];

		printf("������� ����� �����\n");
		scanf("%19s", Slovo);

		printf("������ ������ ����� %s - %c\n", Slovo, Slovo[2]);
	}
	else if (N1 == 10)
	{
		char Massiv[20];

		/*for (int i = 0; i <= 256; i++)
		{
			printf("%d - %c\n", i, i);
		}*/

		printf("������� ����� ������� � �������\n");
		scanf("%19s", Massiv);

		for (int i = 0; i < strlen(Massiv); i++)
		{
			if ((int)*(Massiv + i) >= 48 && (int)*(Massiv + i) <= 57) // 48 - 57 = 0 - 9
			{
				*(Massiv + i) = 33; //33 = !
			}
		}

		printf("��� ������ - %s\n", Massiv);
	}
	else if (N1 == 11)
	{
		char Mass[4][6];

		/*for (int i = 0; i <= 256; i++)
		{
		printf("%d - %c\n", i, i);
		}*/

		int Nam = 0;
		// 43 = "+"
		// 45 = "-"
		// 42 = "*"
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 6; j++)
			{
				*(*(Mass + i) + j) = 40 + rand() % (64 - 40);
				printf("%c ", *(*(Mass + i) + j));

				if ((int)*(*(Mass + i) + j) == 43 || (int)*(*(Mass + i) + j) == 45 || (int)*(*(Mass + i) + j) == 42)
					Nam++;
			}
			printf("\n");
		}

		printf("� ������ ������� ������� \"+\", \"-\", \"*\" ����������� %d ��� \n", Nam);
	}
	else if (N1 == 12)
	{
		char Mass[15];
		int Num = 0;
		int Vib = 0;

		/*for (int i = 0; i <= 256; i++)
		{
		printf("%d - %c\n", i, i);
		}*/

		for (int i = 0; i < 15; i++)
		{
			Vib = 192 + rand() % (256 - 192);
			*(Mass + i) = Vib;
			printf("%d   ", Vib);
			printf("%c   ", *(Mass + i));
			switch (Vib)
			{
			case 192:
			case 197:
			case 200:
			case 206:
			case 211:
			case 219:
			case 221:
			case 222:
			case 223:
			case (192 + 32):
			case (197 + 32):
			case (200 + 32):
			case (206 + 32):
			case (211 + 32):
			case (219 + 32):
			case (221 + 32):
			case (222 + 32):
			case (223 + 32):
			{
				Num++;
				break;
			}
			default:
				break;
			}
		}
		printf("\n���������� ������� ������� ���� Num = %d\n", Num);
	}
	else if (N1 == 13)
	{
		char Mass[20];
		int Chek = 0;
		int Num = 0;

		/*for (int i = 0; i <= 256; i++)
		{
		printf("%d - %c\n", i, i);
		}*/
		for (int i = 0; i < 20; i++)
		{
			*(Mass + i) = 57 + rand() % (70 - 58);
			printf("%c ", *(Mass + i));
			if ((int)*(Mass + i) == 58)
				Chek = 1;
			if (Chek == 0)
				Num++;
		}
		printf("\n���������� �������� �� ������� \":\" = %d\n", Num);
	}
	else if (N1 == 14)
	{
		char Mass[200];
		int Num = 0;
		/*for (int i = 0; i <= 256; i++)
		{
		printf("%d - %c\n", i, i);
		}*/
		for (int i = 0; i < 200; i++)
		{
			*(Mass + i) = 97 + rand() % 3;
			printf("%c ", *(Mass + i));
			if (i > 2)
			{
				if ((int)*(Mass + i) == 97 && (int)*(Mass + i - 1) == 98 && (int)*(Mass + i - 2) == 99)
					Num++;
			}
		}
		printf("\n���������� ����� ���� \"abc\" = %d\n", Num);
	}
	else if (N1 == 15)
	{
		char Mass1[20];
		char Mass2[20];
		char Mass3[20];

		/*for (int i = 0; i <= 256; i++)
		{
		printf("%d - %c\n", i, i);
		}*/

		for (int i = 0; i < 20; i++)
		{
			*(Mass1 + i) = 192 + rand() % (223 - 192);
			printf("%c ", *(Mass1 + i));
		}
		printf("\n");
		for (int i = 0; i < 20; i++)
		{
			*(Mass2 + i) = 192 + rand() % (223 - 192);
			printf("%c ", *(Mass2 + i));
		}
		printf("\n");

		int z = 0;
		for (int i = 0; i < 20; i++)
		{
			int Chek = 0;
			for (int j = 0; j < 20; j++)
			{
				if (*(Mass1 + i) == *(Mass2 + j))
				{
					Chek = 1;
				}
			}
			if (Chek != 1)
			{
				*(Mass3 + z) = *(Mass1 + i);
				z++;
			}
		}
		Mass3[z] = '\0';

		printf("����� ������ - %s\n", Mass3);

	}
	system("pause");
}