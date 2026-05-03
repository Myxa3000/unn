#include <iostream>
#include <cmath>
#include <complex>
#include<fstream>
#include<string>
#include "Table.h"
using namespace std;


//РЕАЛИЗАЦИЯ ФУНКЦИЙ УЧИТЕЛЕЙ

bool Teacher::savetofilet(ofstream& file) {
    file << name << endl;
    file << phone << endl;
    file << email << endl;
    file << adress << endl;
    file << salary << endl;
}

bool Teacher::loadfromfilet(ifstream &file) {
    getline(file, name);
    getline(file, phone);
    getline(file, email);
    getline(file, adress);
    file >> salary;
    file.ignore();
}

void Teacher::display() {
    cout<<"Имя: "<<name<<endl;
    cout<<"Телефон: "<<phone<<endl;
    cout<<"Почта: "<<email<<endl;
    cout<<"Адрес: "<<adress<<endl;
    cout<<"Зарплата: "<<salary<< "руб." <<endl;
}

//РЕАЛИЗАЦИЯ ФУНКЦИЙ КАФЕДРЫ

void Department::init() {
    boss_name = "";
    phone_number = "";
    established_date = "";
    teachercount = 0;

    for (int i = 0; i < max_teachers; i++) {
        Teachers[i] = nullptr;
    }
}

void Department::clear() {
    for (int i = 0; i < teachercount; i++) {
        delete Teachers[i];
        Teachers[i] = nullptr;
    }
    teachercount = 0;
}

void Department::addteacher(string name, string phone, string email, string adress, double salary) {
    if (teachercount < max_teachers) {
        Teacher* newteacher = new Teacher();
        newteacher->name=name;
        newteacher->phone=phone;
        newteacher->email=email;
        newteacher->adress=adress;
        newteacher->salary=salary;

        Teachers[teachercount] = newteacher;
        teachercount++;

        cout<<"Преподаватель добавлен!"<<endl;
    }
    else {
        cout<<"Достигнут лимит преподавателей!";
    }
}

bool Department::removeteacherbyname(string name) {
    for (int i = 0; i < teachercount; i++) {
        if (Teachers[i]->name == name) {
            delete Teachers[i];

            for (int j = 0; j < teachercount - 1; j++) {
                Teachers[j] = Teachers[j + 1];
            }
            teachercount--;
            return true;
        }
    }
    return false;
}

void Department::updateteacher(int index, string name, string phone, string email, string adress, double salary) {
    if (index >=0 && index < teachercount) {
        Teachers[index]->name=name;
        Teachers[index]->phone=phone;
        Teachers[index]->email=email;
        Teachers[index]->adress=adress;
        Teachers[index]->salary=salary;
        cout<<"Данные обновлены"<<endl;
    }
    else {
        cout<<"Преподаватель с таким номером не найден!"<<endl;
    }
}

int Department::findteacherbyname(string name) {
    for (int i = 0; i < teachercount; i++) {
        if (Teachers[i]->name == name) {
            return i;
        }
    }
    return -1;
}

void Department::sortbyname() {
    for (int i = 0; i < teachercount - 1; i++) {
        for (int j = 0; j < teachercount - 1; j++) {
            if (Teachers[j]->name > Teachers[j + 1]->name) {
                Teacher* temp = Teachers[j];
                Teachers[j] = Teachers[j + 1];
                Teachers[j + 1] = temp;
            }
        }
    }
    cout<<"Сортировка прошла успешна!"<<endl;
}

void Department::sortbysalary() {
    for (int i = 0; i < teachercount - 1; i++) {
        for (int j = 0; j < teachercount - 1; j++) {
            if (Teachers[j]->salary > Teachers[j + 1]->salary) {
                Teacher* temp = Teachers[j];
                Teachers[j] = Teachers[j + 1];
                Teachers[j + 1] = temp;
            }
        }
    }
    cout<<"Сортировка прошла успешно!"<<endl;
}

bool Department::savetofile(string filename) {
    ofstream file(filename);

    if (!file.is_open()) {
        cout<<"Ошибка сохранения!"<<endl;
        return false;
    }

    file<<boss_name<<endl;
    file<<phone_number<<endl;
    file<<established_date<<endl;
    file<<teachercount<<endl;
    for (int i = 0; i < teachercount; i++) {
        Teachers[i]->savetofilet(file);
    }

    file.close();
    return true;
}

bool Department::loadfromfile(string filename) {
    ifstream file(filename);

    if (!file.is_open()) {
        cout<<"Ошибка чтения!"<<endl;
        return false;
    }

    clear();

    getline(file, boss_name);
    getline(file, phone_number);
    getline(file, established_date);
    int count = 0;
    file>>count;
    file.ignore();

    for (int i = 0; i < count && i<max_teachers; i++) {
        Teacher* newteacher = new Teacher();
        newteacher->loadfromfilet(file);
        Teachers[teachercount] = newteacher;
        teachercount++;
    }

    file.close();
    return true;
}

void Department::display() {
    cout<<"Заведующий: "<<boss_name<<endl;
    cout<<"Телефон: "<<phone_number<<endl;
    cout<<"Дата основания:  "<<established_date<<endl;

    if (teachercount == 0) {
        cout<<"Преподавателей нет"<<endl;
    }
    else {
        for (int i = 0; i < teachercount; i++) {
            cout<<"Преподаватель #"<<i+1<<":"<<endl;
            Teachers[i]->display();
            cout<<"\n";
        }
    }
    cout<<endl;
}