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
        printf("\nВведите кол-во собственников (1-%d): ", sbs_max);
        scanf("%d", &n);
        while (getchar() != '\n');
    } while (n < 1 || n > sbs_max);


    do {
        printf("\nПрочитать из файла? (1 - да, 2 - нет): ");
        scanf("%d", &w);
        while (getchar() != '\n');
    } while (w != 1 && w != 2);
    if (w == 1) sbs->filein(sbs, n);
    else sbs->vvod(sbs, n);
    printf("\n\nДружественная функция получения количества складов собственника");
    for (int i = 0; i < n; i++) {
        printf("\nКоличество всех складов %d собственника: ", i + 1);
        Getstkol(sbs[i]);
    }
    printf("\n\nТовар 1:");
    cout << "\nНомер - " << sbs[0].prodsp[0].tovars[0].tovnum
        << ", название - " << sbs[0].prodsp[0].tovars[0].tovname
        << ", кол-во - " << sbs[0].prodsp[0].tovars[0].tkol;
    printf("\nТовар 2:");
    cout << "\nНомер - " << sbs[1].prodsp[1].tovars[1].tovnum
        << ", название - " << sbs[1].prodsp[1].tovars[1].tovname
        << ", кол-во - " << sbs[1].prodsp[1].tovars[1].tkol;
    t1 = sbs[0].prodsp[0].tovars[0] + sbs[1].prodsp[1].tovars[1];
    printf("\nТовар 3 - сложение товаров 1 и 2 через перегрузку оператора + :");
    cout << "\nНомер - " << t1.tovnum << ", название - " << t1.tovname << ", кол-во - " << t1.tkol;

    printf("\n\nТовар 3 - увеличение кол-ва через перегрузку префиксного оператора ++ :");
    ++t1;
    cout << "\nНомер - " << t1.tovnum << ", название - " << t1.tovname << ", кол-во - " << t1.tkol;

    printf("\n\nТовар 3 - увеличение кол-ва через перегрузку постфиксного оператора ++ :");
    t1++;
    cout << "\nНомер - " << t1.tovnum << ", название - " << t1.tovname << ", кол-во - " << t1.tkol;


    w = 0;
    do {
        printf("\n\nЗаписать в файл? (1 - да, 2 - нет): ");
        scanf("%d", &w);
        while (getchar() != '\n');
    } while (w != 1 && w != 2);
    if (w == 1) sbs->fileout(sbs, n);
    w = 0;
    do {
        system("cls");
        do {
            printf("\nПровести поиск? (1 - да, 2 - нет): ");
            scanf("%d", &w);
            while (getchar() != '\n');
        } while (w != 1 && w != 2);
        if (w == 1) sbs->poisk(sbs, n);
        system("pause");
    } while (w == 1);


}