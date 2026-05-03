#include <iostream>
#include <cmath>
#include <complex>
#include<fstream>
#include<string>
#include "Table.h"
#include "Table.cpp"

using namespace std;

int main() {

    Department dept;
    dept.init();

    Teacher tchr;

    cout<<"ввод данных кафедры"<<endl;
    cout << "Введите имя заведующего: ";
    getline(cin, dept.boss_name);
    cout << "Введите телефон заведующего: ";
    getline(cin, dept.phone_number);
    cout << "Введите дату образования: ";
    getline(cin, dept.established_date);

    int c;
    do {
        cout<<"для управления кафедрой выберите цифру и нажмите enter"<<endl;
        cout<<"1 для добавления учителя"<<endl;
        cout<<"2 для удаления учителя по имени"<<endl;
        cout<<"3 для обновления данных учителя"<<endl;
        cout<<"4 для поиска учителя по имени"<<endl;
        cout<<"5 для сортировки учителей по имени"<<endl;
        cout<<"6 для сортировки учителей по зарплате"<<endl;
        cout<<"7 для сохранения кафедры в файл"<<endl;
        cout<<"8 для выгрузки кафедры из файла"<<endl;
        cout<<"9 для отображения кафедры"<<endl;
        cout<<"10 для отображения учителей"<<endl;
        cout<<"11 для сохранения учителей в файл"<<endl;
        cout<<"12 для выгрузки учителей из файла"<<endl;
        cout<<"13 для очищения кафедры"<<endl;
        cout<<"14 для выхода"<<endl;
        cin>>c;

        if (c==1) {
            string name, phone, email, address;
            double salary;

            cout << "Добавление преподавателя"<<endl;
            cin.ignore();
            cout << "Введите имя: ";
            getline(cin, name);
            cout << "Введите телефон: ";
            getline(cin, phone);
            cout << "Введите email: ";
            getline(cin, email);
            cout << "Введите адрес: ";
            getline(cin, address);
            cout << "Введите зарплату: ";
            cin >> salary;

            dept.addteacher(name, phone, email, address, salary);
        }

        else if (c==2) {
            string name;
            cout << "Удаление преподавателя";
            cin.ignore();
            cout << "Введите имя: ";
            getline(cin, name);

            if (dept.removeteacherbyname(name)) {
                cout << "Преподаватель удален!\n";
            } else {
                cout << "Преподаватель не найден!\n";
            }
        }

        else if (c==3) {
            string name, newName, phone, email, address;
            double salary;

            cout << "обновление данных учителя"<<endl;
            cin.ignore();
            cout << "Введите имя учителя для изменения: ";
            getline(cin, name);

            int index = dept.findteacherbyname(name);
            if (index == -1) {
                cout << "Учитель с именем \"" << name << "\" не найден!"<<endl;;
            } else {
                cout << "Текущие данные учителя:"<<endl;
                dept.Teachers[index]->display();

                cout << "Введите новые данные (Enter - оставить без изменений):"<<endl;
                cout << "Новое имя: ";
                getline(cin, newName);
                if (newName.empty()) newName = name;

                cout << "Новый телефон: ";
                getline(cin, phone);

                cout << "Новый email: ";
                getline(cin, email);

                cout << "Новый адрес: ";
                getline(cin, address);

                cout << "Новая зарплата: ";
                cin >> salary;

                dept.updateteacher(index, newName, phone, email, address, salary);
            }
        }

        else if (c==4) {
            string name;
            cout << "поиск учителя"<<endl;
            cin.ignore();
            cout << "Введите имя для поиска: "<<endl;
            getline(cin, name);

            int index = dept.findteacherbyname(name);
            if (index != -1) {
                cout << "Учитель найден:"<<endl;;
                dept.Teachers[index]->display();
            } else {
                cout << "Учитель с именем \"" << name << "\" не найден!"<<endl;
            }
        }

        else if (c==5) {
            cout << "сортировка по имени\n";
            dept.sortbyname();
            cout << "Учителя отсортированы по имени!\n";
            dept.display();
        }

        else if (c==6) {
            cout << "сортировка по зарплате\n";
            dept.sortbysalary();
            cout << "✓ Учителя отсортированы по зарплате!\n";
            dept.display();
        }

        else if (c==7) {
            string filename;
            cout << "сохранение кафедры в файл\n";
            cout << "Введите имя файла (например, kafedra.txt): ";
            cin >> filename;

            if (dept.savetofile(filename)) {
                cout << "Кафедра сохранена в файл '" << filename << "'\n";
            } else {
                cout << "Ошибка при сохранении!\n";
            }
        }

        else if (c==8) {
            string filename;
            cout << "выгрузка кафедры из файла\n";
            cout << "Введите имя файла: ";
            cin >> filename;

            if (dept.loadfromfile(filename)) {
                cout << "Кафедра загружена из файла '" << filename << "'\n";
                dept.display();
            } else {
                cout << "Ошибка при загрузке или файл не найден!\n";
            }
        }


        else if (c==9) {
            dept.display();
        }

        else if (c==13) {
            cout << "Очищение кафедры\n";
            dept.clear();
            cout << "Кафедра очищена!\n";
        }
        else if (c==14) {
            cout<<"До свидания!\n";
        }
        else {
            cout<<"Неверная цифра, пожалуйста введите цифру от 1 до 14";
        }
    }
    while (c!=14);
    return 0;
}