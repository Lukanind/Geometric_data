#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <Windows.h>
#include "piramida.cpp"
#include "Cube.cpp"
#include "Parallelepiped.cpp"
#include "prizma.cpp"
using namespace std;

vector<piramida> List1;
vector<cube> List2;
vector<parallelepiped> List3;
vector<prizma> List4;

void menu();
void Piramida(vector<piramida> L);
void Cube(vector<cube> L);
void Parallelepiped(vector<parallelepiped> L);
void Prizma(vector<prizma> L);
void hline(int m);

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    int n = 0;
    while (n != 5)
    {
        menu();
        cin >> n;
        switch (n)
        {
        case 1: Piramida(List1); break;
        case 2: Cube(List2); break;
        case 3: Parallelepiped(List3); break;
        case 4: Prizma(List4); break;
        case 5: break;
        default: cout << "Неверный вариант выбора" << endl;
        }
    }

}

void menu()
{

    cout << "                   МЕНЮ   " << endl << endl;
    cout << "1. Работа с Пирамидами" << endl;
    cout << "2. Работа с Кубами" << endl;
    cout << "3. Работа с Параллелепипедом" << endl;
    cout << "4. Работа с Призмой" << endl;
    cout << "5. Выход" << endl;
    cout << "Введите номер пункта меню для дальнейшей работы:" << endl;
}

void Piramida(vector<piramida> L)
{
    double a, b, c, h, d;
    int n;

    cout << "                   Вы работаете с библиотекой <Пирамида>. Ниже представлены доступные функции:   " << endl << endl;
    cout << "1. Ввод данных и результаты вычислений для пирамиды с треугольником в основании." << endl;
    cout << "2. Ввод данных и результаты вычислений для пирамиды с прямоугольником или квадратом в основании." << endl;
    cout << "3. Ввод данных и результаты вычислений для пирамиды с правильным пятиугольником в основании." << endl;
    cout << "4. Ввод данных и результаты вычислений для пирамиды с правильным шестиугольниуом в основании." << endl;
    cout << "Введите номер пункта меню для дальнейшей работы:" << endl;
    cin >> n;

    switch (n)
    {
    case 1: {
        int shet = 3;
        cout << "ПРИМЕЧАНИЕ: вершины данной пирамиды по умолчанию именуются буквами: S,A,B,C." << endl << endl;
        cout << "Введите длину первой стороны основания пирамиды." << endl;
        cin >> a;
        cout << "Введите длину второй стороны основания пирамиды." << endl;
        cin >> b;
        cout << "Введите длину третьей стороны пирамиды." << endl;
        cin >> c;
        cout << "Введите длину высоты пирамиды." << endl;
        cin >> h;
        cout << "Введите длину апофемы пирамиды." << endl;
        cin >> d;
        L.push_back(piramida(a, b, h, d, c, shet));
        cout << "                                              Пирамида      " << endl;
        hline(102);
        cout << "|Длина 1 ст.|Длина 2 ст.|Длина 3 ст.|Высота|Апофема|   Обьем   |  Площадь  |     Грани     | Вершины |" << endl;
        hline(102);
        for (int i = 0; i < L.size(); i++)
        {
            cout << "| " << setw(9) << L[i].get_a();
            cout << " | " << setw(9) << L[i].get_b();
            cout << " | " << setw(9) << L[i].get_c();
            cout << " | " << setw(4) << L[i].get_h();
            cout << " | " << setw(5) << L[i].get_d();
            cout << " | " << setw(9) << L[i].Volume(a, b, h, shet, c);
            cout << " | " << setw(9) << L[i].All_Area(a, b, d, shet, c);
            cout << " | " << setw(13) << L[i].ALL_grani(L[i].vershini, shet);
            cout << " | " << setw(7) << L[i].ALL_vershini(L[i].vershini, shet) << " |" << endl;

        }
        int m = 102;
        hline(m);
        cout << endl; }
        break;
    case 2: {
        int m = 98;
        int shet = 4;
        cout << "ПРИМЕЧАНИЕ: вершины данной пирамиды по умолчанию именуются буквами: S,A,B,C,D." << endl << endl;
        cout << "Введите длину основания пирамиды." << endl;
        cin >> a;
        cout << "Введите ширину основания пирамиды." << endl;
        cin >> b;
        cout << "Введите длину высоты пирамиды." << endl;
        cin >> h;
        cout << "Введите длину апофемы пирамиды." << endl;
        cin >> d;
        L.push_back(piramida(a, b, h, 0 + d, d, shet));
        cout << "                                              Пирамида      " << endl;
        hline(m);
        cout << "|Длина ст. осн-я|Ширина осн-я|Высота|Апофема|   Обьем   |  Площадь  |      Грани      |  Вершины  |" << endl;
        hline(m);
        for (int i = 0; i < L.size(); i++)
        {
            cout << "| " << setw(12) << L[i].get_a();
            cout << " | " << setw(10) << L[i].get_b();
            cout << " | " << setw(4) << L[i].get_h();
            cout << " | " << setw(5) << L[i].get_d();
            cout << " | " << setw(9) << L[i].Volume(a, b, h, shet, 0);
            cout << " | " << setw(9) << L[i].All_Area(a, b, d, shet, 0);
            cout << " | " << setw(13) << L[i].ALL_grani(L[i].vershini, shet);
            cout << " | " << setw(7) << L[i].ALL_vershini(L[i].vershini, shet) << " |" << endl;
        }
        hline(m);
        cout << endl; }
        break;
    case 3: {
        int m = 128;
        double a, c, h;
        int shet = 5;

        cout << "ПРИМЕЧАНИЕ: вершины данной пирамиды по умолчанию именуются буквами: S,A,B,C,D,E." << endl << endl;

        cout << "Введите длину стороны основания пирамиды." << endl;
        cin >> a;
        cout << "Введите длину высоты пирамиды." << endl;
        cin >> h;
        cout << "Введите длину апофемы пирамиды." << endl;
        cin >> c;
        L.push_back(piramida(a, 0, c, h, shet));
        cout << "                                              Пирамида      " << endl;
        hline(m);
        cout << "|Длина ст. осн-я|Длина апофемы основания|Апофема|Высота|     Обьем     |    Площадь    |     Вершины     |        Грани        |" << endl;
        hline(m);
        for (int i = 0; i < L.size(); i++)
        {
            L[i].Volume56(a, h, shet);
            cout << "| " << setw(13) << L[i].get_a();
            cout << " | " << setw(21) << L[i].get_b();
            cout << " | " << setw(5) << L[i].get_c();
            cout << " | " << setw(4) << L[i].get_h();
            cout << " | " << setw(13) << L[i].Volume56(a, h, shet);
            cout << " | " << setw(13) << L[i].All_Area56(a, c, h, shet);
            cout << " | " << setw(15) << L[i].ALL_vershini(L[i].vershini, shet);
            cout << " | " << setw(17) << L[i].ALL_grani(L[i].vershini, shet) << " |" << endl;
        }
        hline(m);
        cout << endl; }
        break;
    case 4: {
        int m = 134;
        double a, c, h;
        int shet = 6;

        cout << "ПРИМЕЧАНИЕ: вершины данной пирамиды по умолчанию именуются буквами: S,A,B,C,D,E,F." << endl << endl;

        cout << "Введите длину стороны основания пирамиды." << endl;
        cin >> a;
        cout << "Введите длину высоты пирамиды." << endl;
        cin >> h;
        cout << "Введите длину апофемы пирамиды." << endl;
        cin >> c;
        L.push_back(piramida(a, 0, c, h, shet));
        cout << "                                              Пирамида      " << endl;
        hline(m);
        cout << "|Длина ст. осн-я|Длина апофемы основания|Апофема|Высота|     Обьем     |    Площадь    |      Вершины      |          Грани          |" << endl;
        hline(m);
        for (int i = 0; i < L.size(); i++)
        {
            L[i].Volume56(a, h, shet);
            cout << "| " << setw(13) << L[i].get_a();
            cout << " | " << setw(21) << L[i].get_b();
            cout << " | " << setw(5) << L[i].get_c();
            cout << " | " << setw(4) << L[i].get_h();
            cout << " | " << setw(13) << L[i].Volume56(a, h, shet);
            cout << " | " << setw(13) << L[i].All_Area56(a, c, h, shet);
            cout << " | " << setw(17) << L[i].ALL_vershini(L[i].vershini, shet);
            cout << " | " << setw(21) << L[i].ALL_grani(L[i].vershini, shet) << " |" << endl;
        }
        hline(m);
        cout << endl; }
        break;
    }
}

void Cube(vector<cube> L)
{
    double a;
    int m = 115;

    cout << "                   Вы работаете с библиотекой <Куб>. Ниже представлены доступные функции:   " << endl << endl;
   
        cout << "ПРИМЕЧАНИЕ: вершины данного куба по умолчанию именуются буквами: A, B, C, D, A1, B1, C1, D1." << endl << endl;
        cout << "Введите длину стороны куба" << endl;
        cin >> a;
        L.push_back(cube(a));
        cout << "                                    Куб      " << endl;
        hline(m); 
        cout << "| Длина ст. | Объем | Площадь поверхности |        Вершины        |                     Грани                     |" << endl;
        hline(m);
        for (int i = 0; i < L.size(); i++)
        {
            cout << "|" << setw(11) << L[i].get_a();
            cout << "|" << setw(7) << L[i].Volume(a);
            cout << "|" << setw(21) << L[i].Surface_area(a);
            cout << "|" << setw(23) << L[i].Vershin(L[i].versh);
            cout << "| " << setw(28) << L[i].Grani(L[i].grani) << "|" << endl;
        }
        hline(m);
        cout << endl; 
};

void Parallelepiped(vector<parallelepiped> L)
{
    double a, b, c = 0, h, ug1 = 0, ug2 = 0, ug3 = 0;
    int n;

    cout << "                   Вы работаете с библиотекой <Параллелепипед>. Ниже представлены доступные функции:   " << endl << endl;
    cout << "1. Ввод данных и результаты вычислений для прямоугольного параллелепипеда." << endl;
    cout << "2. Ввод данных и результаты вычислений для параллелепипеда с параллелограммом в основании." << endl;
    cout << "Введите номер пункта меню для дальнейшей работы:" << endl;
    cin >> n;

    switch (n)
    {
    case 1: {
        int m = 130;
        cout << "ПРИМЕЧАНИЕ: вершины данного параллелепипеда по умолчанию именуются буквами: A, B, C, D, A1, B1, C1, D1." << endl << endl;
        cout << "Введите длину первой стороны прямоугольника." << endl;
        cin >> a;
        cout << "Введите длину второй стороны прямоугольника." << endl;
        cin >> b;
        cout << "Введите длину высоты параллепипеда." << endl;
        cin >> h;
        L.push_back(parallelepiped(a, b, c, h, ug1, ug2, ug3));
        cout << "                                              Параллелепипед      " << endl;
        hline(m);
        cout << "|Длина 1 ст.|Длина 2 ст.| Высота |   Обьем   |  Площадь  |        Вершины        |                     Грани                     |" << endl;
        hline(m);
        for (int i = 0; i < L.size(); i++)
        {
            cout << "|" << setw(11) << L[i].get_a();
            cout << "|" << setw(11) << L[i].get_b();
            cout << "|" << setw(8) << L[i].get_h();
            cout << "|" << setw(11) << L[i].Volume(a, b, h);
            cout << "|" << setw(11) << L[i].Surface_area(a, b, h);
            cout << "|" << setw(23) << L[i].Vershin(L[i].versh);
            cout << "| " << setw(28) << L[i].Grani(L[i].grani) << "|" << endl;


        }
        hline(m);
        cout << endl; 
        }
          break;
    case 2: {
        int m = 155;
        cout << "ПРИМЕЧАНИЕ: вершины данного параллелепипеда по умолчанию именуются буквами: A, B, C, D, A1, B1, C1, D1." << endl << endl;
        cout << "Введите длину первой стороны основания." << endl;
        cin >> a;
        cout << "Введите длину второй стороны основания." << endl;
        cin >> b;
        cout << "Введите длину ребра параллепипеда." << endl;
        cin >> c;
        cout << "Введите длину высоты параллепипеда." << endl;
        cin >> h;
        cout << "Введите первый угол." << endl;
        cin >> ug1;
        cout << "Введите второй угол." << endl;
        cin >> ug2;
        cout << "Введите третий угол." << endl;
        cin >> ug3;
        L.push_back(parallelepiped(a, b, c, h, ug1, ug2, ug3));
        cout << "                                              Параллелепипед      " << endl;
        hline(m);
        cout << "|Длина 1 ст.|Длина 2 ст.|Длина 3 ст.| Высота |    Углы    |   Обьем   |  Площадь  |        Вершины        |                     Грани                     |" << endl;
        hline(m);
        for (int i = 0; i < L.size(); i++)
        {
            cout << "|" << setw(11) << L[i].get_a();
            cout << "|" << setw(11) << L[i].get_b();
            cout << "|" << setw(11) << L[i].get_c();
            cout << "|" << setw(8) << L[i].get_h();
            cout << "|" << setw(6) << ug1 << " " << ug2 << " " << ug3;
            cout << "|" << setw(11) << L[i].Volume(a, b, h, ug1);
            cout << "|" << setw(11) << L[i].Surface_area(a, b, h, ug1, ug2, ug3);
            cout << "|" << setw(23) << L[i].Vershin(L[i].versh);
            cout << "| " << setw(28) << L[i].Grani(L[i].grani) << "|" << endl;


        }
        hline(m);
        cout << endl; }
        break;
        
    }
};

void Prizma(vector<prizma> L)
{
    int n;
    
    cout << "                   Вы работаете с библиотекой <Призма>. Ниже представлены доступные функции:   " << endl << endl;
    cout << "1. Ввод данных и результаты вычислений для треугольной призмы." << endl;
    cout << "2. Ввод данных и результаты вычислений для призмы с трапецией в основании." << endl;
    cout << "3. Ввод данных и результаты вычислений для призмы с правильным пятиугольником в основании." << endl;
    cout << "4. Ввод данных и результаты вычислений для призмы с правильным шестиугольником в основании." << endl;
    cout << "Введите номер пункта меню для дальнейшей работы:" << endl;
    cin >> n;

    switch (n)
    {
    case 1: {
        double a, b, c, h;
        int m = 117;
        cout << "ПРИМЕЧАНИЕ: вершины данноой призмы по умолчанию именуются буквами: A, B, C, A1, B1, C1." << endl << endl;
        cout << "Введите длину первой стороны основания." << endl;
        cin >> a;
        cout << "Введите длину второй стороны основания." << endl;
        cin >> b;
        cout << "Введите длину третьей стороны основания." << endl;
        cin >> c;
        cout << "Введите длину высоты призмы." << endl;
        cin >> h;
        L.push_back(prizma(a, b, c, 0, h, 0, 0, 0, 0));
        cout << "                                         Призма      " << endl;
        hline(m);
        cout << "|Длина 1 ст.|Длина 2 ст.|Длина 3 ст.| Высота |  Обьем  | Площадь |    Вершины   |               Грани               |" << endl;
        hline(m);
        for (int i = 0; i < L.size(); i++)
        {
            cout << "|" << setw(11) << L[i].get_a();
            cout << "|" << setw(11) << L[i].get_b();
            cout << "|" << setw(11) << L[i].get_c();
            cout << "|" << setw(8) << L[i].get_h();
            cout << "|" << setw(9) << L[i].Volume_triangle(a, b, c, h);
            cout << "|" << setw(9) << L[i].Surface_area(a, b, c, h);
            cout << "|" << setw(12) << L[i].versh_3;
            cout << "|" << setw(16) << L[i].grani_3 << "|" << endl;
        }
        hline(m); }
        break;
    case 2: {
        double a, b, c, d, h, h2;
        int m = 146;
        cout << "ПРИМЕЧАНИЕ: вершины данноой призмы по умолчанию именуются буквами: A, B, C, D, A1, B1, C1, D1." << endl << endl;
        cout << "Введите длину первой стороны основания." << endl;
        cin >> a;
        cout << "Введите длину второй стороны основания." << endl;
        cin >> b;
        cout << "Введите длину третьей стороны основания." << endl;
        cin >> c;
        cout << "Введите длину четвертой стороны основания." << endl;
        cin >> d;
        cout << "Введите длину высоты трапеции." << endl;
        cin >> h;
        cout << "Введите длину высоты призмы." << endl;
        cin >> h2;
        L.push_back(prizma(a, b, c, d, h, h2, 0, 0, 0));
        cout << "                                         Призма      " << endl;
        hline(m);
        cout << "|Длина 1 ст.|Длина 2 ст.|Длина 3 ст.|Длина 4 ст.| Высоты |  Обьем  | Площадь |      Вершины      |                     Грани                     |" << endl;
        hline(m);
        for (int i = 0; i < L.size(); i++)
        {
            cout << "|" << setw(11) << L[i].get_a();
            cout << "|" << setw(11) << L[i].get_b();
            cout << "|" << setw(11) << L[i].get_c();
            cout << "|" << setw(11) << L[i].get_d();
            cout << "|" << setw(6) << L[i].get_h() << " " << L[i].get_h2();
            cout << "|" << setw(9) << L[i].Volume_trapezoid(a, b, h, h2);
            cout << "|" << setw(9) << L[i].Surface_area(a, b, c, d, h, h2);
            cout << "|" << setw(16) << L[i].versh_4;
            cout << "|" << setw(47) << L[i].grani_4 << "|" << endl;
        }
        hline(m); }
        break;
    case 3: {
        double a, h;
        int m = 133;
        cout << "ПРИМЕЧАНИЕ: вершины данноой призмы по умолчанию именуются буквами: A, B, C, D, E, A1, B1, C1, D1, E1." << endl << endl;
        cout << "Введите длину стороны основания." << endl;
        cin >> a;
        cout << "Введите высотe призмы." << endl;
        cin >> h;
        L.push_back(prizma(a, 0, 0, 0, h, 0, 0, 0, 0));
        cout << "                                         Призма      " << endl;
        hline(m);
        cout << "| Длина стороны осн. | Высота |  Обьем  | Площадь |         Вершины        |                          Грани                         |" << endl;
        hline(m);
        for (int i = 0; i < L.size(); i++)
        {
            cout << "|" << setw(20) << L[i].get_a();
            cout << "|" << setw(8) << L[i].get_h();
            cout << "|" << setw(9) << L[i].Volume_pentagon(a, h);
            cout << "|" << setw(9) << L[i].Surface_area(a, h);
            cout << "|" << setw(16) << L[i].versh_5;
            cout << "|" << setw(47) << L[i].grani_5 << endl;
        }
        hline(m); }
          break;
    case 4: {
        double a, h;
        int m = 146;
        cout << "ПРИМЕЧАНИЕ: вершины данноой призмы по умолчанию именуются буквами: A, B, C, D, E, A1, B1, C1, D1, E1." << endl << endl;
        cout << "Введите длину стороны основания." << endl;
        cin >> a;
        cout << "Введите высотe призмы." << endl;
        cin >> h;
        L.push_back(prizma(a, 0, 0, 0, h, 0, 0, 0, 0));
        cout << "                                         Призма      " << endl;
        hline(m);
        cout << "| Длина стороны осн. | Высота |  Обьем  | Площадь |           Вершины           |                              Грани                             |" << endl;
        hline(m);
        for (int i = 0; i < L.size(); i++)
        {
            cout << "|" << setw(20) << L[i].get_a();
            cout << "|" << setw(8) << L[i].get_h();
            cout << "|" << setw(9) << L[i].Volume_hexagon(a, h);
            cout << "|" << setw(9) << L[i].Surface_area_Hexagon(a, h);
            cout << "|" << setw(16) << L[i].versh_6;
            cout << "|" << setw(47) << L[i].grani_6 << endl;
        }
        hline(m); }
          break;
    }
};

void hline(int m)
{
    for (int i = 0; i < m; i++)
        cout << "-";
    cout << endl;
};

