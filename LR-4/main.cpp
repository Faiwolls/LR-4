#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <locale.h>
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include "lib4.h"




int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Rus");

    int w = 0, n = 0;
    sobst sbs[sbs_max];
    tovar t1;

    do {
        printf("\n������� ���-�� ������������� (1-%d): ", sbs_max);
        scanf("%d", &n);
        while (getchar() != '\n');
    } while (n < 1 || n > sbs_max);


    do {
        printf("\n��������� �� �����? (1 - ��, 2 - ���): ");
        scanf("%d", &w);
        while (getchar() != '\n');
    } while (w != 1 && w != 2);
    if (w == 1) sbs->filein(sbs, n);
    else sbs->vvod(sbs, n);
    printf("\n\n������������� ������� ��������� ���������� ������� ������������");
    for (int i = 0; i < n; i++) {
        printf("\n���������� ���� ������� %d ������������: ", i + 1);
        Getstkol(sbs[i]);
    }
    printf("\n\n����� 1:");
    cout << "\n����� - " << sbs[0].prodsp[0].tovars[0].tovnum
        << ", �������� - " << sbs[0].prodsp[0].tovars[0].tovname
        << ", ���-�� - " << sbs[0].prodsp[0].tovars[0].tkol;
    printf("\n����� 2:");
    cout << "\n����� - " << sbs[1].prodsp[1].tovars[1].tovnum
        << ", �������� - " << sbs[1].prodsp[1].tovars[1].tovname
        << ", ���-�� - " << sbs[1].prodsp[1].tovars[1].tkol;
    t1 = sbs[0].prodsp[0].tovars[0] + sbs[1].prodsp[1].tovars[1];
    printf("\n����� 3 - �������� ������� 1 � 2 ����� ���������� ��������� + :");
    cout << "\n����� - " << t1.tovnum << ", �������� - " << t1.tovname << ", ���-�� - " << t1.tkol;

    printf("\n\n����� 3 - ���������� ���-�� ����� ���������� ����������� ��������� ++ :");
    ++t1;
    cout << "\n����� - " << t1.tovnum << ", �������� - " << t1.tovname << ", ���-�� - " << t1.tkol;

    printf("\n\n����� 3 - ���������� ���-�� ����� ���������� ������������ ��������� ++ :");
    t1++;
    cout << "\n����� - " << t1.tovnum << ", �������� - " << t1.tovname << ", ���-�� - " << t1.tkol;


    w = 0;
    do {
        printf("\n\n�������� � ����? (1 - ��, 2 - ���): ");
        scanf("%d", &w);
        while (getchar() != '\n');
    } while (w != 1 && w != 2);
    if (w == 1) sbs->fileout(sbs, n);
    w = 0;
    do {
        system("cls");
        do {
            printf("\n�������� �����? (1 - ��, 2 - ���): ");
            scanf("%d", &w);
            while (getchar() != '\n');
        } while (w != 1 && w != 2);
        if (w == 1) sbs->poisk(sbs, n);
        system("pause");
    } while (w == 1);


}