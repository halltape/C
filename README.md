# Программы на СИ
Все программы проверены на синтаксис и на утечки памяти. Содержимое обновляется
***
Проверка на синтаксис 
>python3 check/cpplint.py --extensions=c c_files/name.c

Установка python3:
>sudo apt install python3
***

Проверка на утечку памяти (через valgrind):
>gcc -g -Wall -Werror -Wextra *******.c

>valgrind --leak-check=full ./a.out

Установка valgrind:
>sudo apt update

>sudo apt install valgrind
***
## 1. Статическая память
* Input-Output
* Проверка на ввод 
* Пузырьковая сортировка 
* Используются функции и указатели

[Указатели](https://github.com/halltape/C/blob/master/c_files/pointer.c)

[Одномерный статический массив](https://github.com/halltape/C/blob/master/c_files/1d_static_array.c)

[Двумерный статический массив](https://github.com/halltape/C/blob/master/c_files/2d_static_array.c)

## 2. Динамическая память
* Input-Output
* Проверка на ввод 
* Пузырьковая сортировка 
* Используются функции и указатели

[Одномерный динамический массив](https://github.com/halltape/C/blob/master/c_files/1d_dynamic_array.c)

[Одномерный безразмерный динамический массив](https://github.com/halltape/C/blob/master/c_files/1d_dynamic_nosize__array.c)

[Двумерный динамический массив](https://github.com/halltape/C/blob/master/c_files/2d_dynamic_array.c)

[Змейка](https://github.com/halltape/C/blob/master/c_files/snake(dynamic_array).c)

## 3. Структуры
* Input-Output

[В разработке](no_link)


