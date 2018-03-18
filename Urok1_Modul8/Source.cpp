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
	printf("Введите номер задания\nN = ");

	scanf("%d", &N1);

	if (N1 == 1)
	{
		/*1.	Составить программу, которая: 
				a.	запрашивает имя человека и повторяет его на экране; 
				b.	запрашивает имя человека и повторяет его на экране с приветствием.
		*/
		char NameMan[20];

		printf("Введите ваше имя\n");
		scanf("%19s", NameMan);

		printf("Здравствуйте %s!\n", NameMan);
	}
	else if (N1 == 2)
	{
		/*2.	Составить программу, которая запрашивает название футбольной команды и 
		повторяет его на экране со словами "— это чемпион!".*/

		char NameTeam[20];

		printf("Введите название команды\n");
		scanf("%19s", NameTeam);

		printf("%s - это чемпион!\n", NameTeam);
	}
	else if (N1 == 3)
	{
		/*3.	Составить программу, которая запрашивает отдельно имя и отдельно фамилию, 
		а затем выводит их как одну символьную строку.*/

		char NameMan[40];
		char SurnameMan[20];

		printf("Введите ваше имя\n");
		scanf("%19s", NameMan);
		printf("Введите вашу фамилию\n");
		scanf("%19s", SurnameMan);

		char Probel[] = {' ', '\0'};

		strcat(NameMan, Probel);
		strcat(NameMan, SurnameMan);

		printf("Здравствуйте %s!\n", NameMan);
	}
	else if (N1 == 4)
	{
		/*4.	Составить программу, которая запрашивает название государства и его столицы, а затем выводит сообщение: 
		"Столица государства ... — город ..." (на месте многоточий должны быть выведены соответствующие значения).*/

		char NameCantry[20];
		char NameCity[20];

		printf("Введите название государства\n");
		scanf("%19s", NameCantry);
		printf("Введите название сталицы\n");
		scanf("%19s", NameCity);

		printf("Столица государства %s - город %s\n", NameCantry, NameCity);
	}
	else if (N1 == 5)
	{
		/*5.	Дано название футбольного клуба. Определить количество символов в нем.*/

		char Klub[] = "Челси";

		printf("В названии клуба %s - %d символов\n", Klub, strlen(Klub));
	}
	else if (N1 == 6)
	{
		/*6.	Дано название города. Определить, четно или нет количество символов в нем*/

		char Gorod[20];

		printf("Введите название сталицы\n");
		scanf("%19s", Gorod);

		if (strlen(Gorod) % 2 == 0)
			printf("В названии города %s - четное количество символов\n", Gorod);
		else printf("В названии города %s - нечетное количество символов\n", Gorod);
	}
	else if (N1 == 7)
	{
		/*7.	Даны две фамилии.Определить, какая из них длиннее.*/

		char Surname1[20];
		char Surname2[20];

		printf("Введите первую фамилию\n");
		scanf("%19s", Surname1);
		printf("Введите вторую фамилию\n");
		scanf("%19s", Surname2);

		if (strlen(Surname1) > strlen(Surname1))
			printf("Фамилия %s длиннее фамилии %s\n", Surname1, Surname2);
		else printf("Фамилия %s длиннее фамилии %s\n", Surname2, Surname1);
	}
	else if (N1 == 8)
	{
		char City[3][20];

		int dlinnoe = 0;
		int DlinN = 0;
		int korotkoe = 0;
		int KorN = 0;

		printf("Введите первое название города\n");
		scanf("%19s", City[0]);
		printf("Введите первое второе города\n");
		scanf("%19s", City[1]);
		printf("Введите первое третье города\n");
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
		printf("Самое длинное название города - %s\n", City[dlinnoe]);
		printf("Самое короткое название города - %s\n", City[korotkoe]);
	}
	else if (N1 == 9)
	{
		char Slovo[20];

		printf("Введите любое слово\n");
		scanf("%19s", Slovo);

		printf("Третий символ слова %s - %c\n", Slovo, Slovo[2]);
	}
	else if (N1 == 10)
	{
		char Massiv[20];

		/*for (int i = 0; i <= 256; i++)
		{
			printf("%d - %c\n", i, i);
		}*/

		printf("Введите любые символы с цифрами\n");
		scanf("%19s", Massiv);

		for (int i = 0; i < strlen(Massiv); i++)
		{
			if ((int)*(Massiv + i) >= 48 && (int)*(Massiv + i) <= 57) // 48 - 57 = 0 - 9
			{
				*(Massiv + i) = 33; //33 = !
			}
		}

		printf("Ваш массив - %s\n", Massiv);
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

		printf("В данном массиве символы \"+\", \"-\", \"*\" встречаются %d раз \n", Nam);
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
		printf("\nКоличество глассых русских букв Num = %d\n", Num);
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
		printf("\nКоличество символов до символа \":\" = %d\n", Num);
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
		printf("\nКоличество групп букв \"abc\" = %d\n", Num);
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

		printf("Новый массив - %s\n", Mass3);

	}
	system("pause");
}