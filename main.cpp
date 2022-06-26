#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <Windows.h>
#include "piramida.h"
using namespace std;

vector<piramida> List;

void menu();
void vvodvivod(vector<piramida>& L);
void hline();

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n = 0;
    while (n != 2)
    {
        menu();
        cin >> n;
        switch (n)
        {
        case 1: vvodvivod(List); break;
        case 2: break;
        default: cout << "Неверный вариант выбора" << endl;
        }
    }

}

void menu()
{
    cout << endl << "               МЕНЮ     " << endl;
    cout << "1. Ввод данных и результаты вычислений" << endl;
    cout << "2. Выход" << endl;
    cout << "Введите номер пункта меню для дальнейшей работы" << endl;
}




void vvodvivod(vector<piramida>& L)
{

    
    string z, x, v, m, q;
    double a, b,c,d;
   
    cout << "Введите длину основания пирамиды" << endl;
    cin >> a;
    cout << "Введите ширину основания пирамиды" << endl;
    cin >> b;
    cout << "Введите высоту пирамиды" << endl;
    cin >> c;
    cout << "Введите длину апофемы пирамиды" << endl;
    cin >> d;
    L.push_back(piramida(a,b,c,d));
    
    double S_osn = a * b;
    double Obiom = (S_osn * c)/3;
    double S_Bok_a = d * a;
    double S_Bok_b = d * b;
    double S_Bok = S_Bok_a + S_Bok_b;

    cout << "Введите назвавание вершины (общую точку боковых граней)" << endl;
    while (cin.get() != '\n');
    getline(cin, z);
    cout << "Введите название 1-й вершины, лежащей в основании пирамиды " << endl;
    getline(cin, x);
    cout << "Введите название 2-й вершины, лежащей в основании пирамиды" << endl;
    getline(cin, v);
    cout << "Введите название 3-й вершины, лежащей в основании пирамиды" << endl;
    getline(cin, m);
    cout << "Введите название 4-й вершины, лежащей в основании пирамиды" << endl;
    getline(cin, q);

    string gr1 = z + x + v;
    string gr2 = z + v + m; 
    string gr3 = z + m + q; 
    string gr4 = z + q + x;

    cout << "                                              Пирамида      " << endl;
    hline();
    cout << "| Длина осн-я | Ширина ос-я |  Высота  | Апофема |   Обьем   | Боковая площадь | Названия вершин | Названия сторон |" << endl;
    hline();
    for (int i = 0; i < L.size(); i++)
    {
        cout << "| " << setw(11) << L[i].get_a();
        cout << " | " << setw(11) << L[i].get_b();
        cout << " | " << setw(8) << L[i].get_c();
        cout << " | " << setw(7) << L[i].get_d();
        cout << " | " << setw(9) << Obiom;
        cout << " | " << setw(15) << S_Bok;
        cout << " | " << setw(15) << z + "," + x + "," + v + "," + m + "," + q;
        cout << " | " << setw(15) << gr1+","+gr2+","+gr3+","+gr4 << " |" << endl;
        
      
    }
    hline();
}

void hline() {
    const int m = 116;
    for (int i = 0; i < m; i++)
        cout << "-";
    cout << endl;
}

