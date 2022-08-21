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
* Поиск совпадения слова в массиве структур
* Используются функции и указатели

[Статический массив структур](https://github.com/halltape/C/blob/master/c_files/struct_static.c)
| Входные данные | Выходные данные |
| ------ | ------ |
|2022<br>BMW<br>M5<br>2024<br>Mers<br>CLK<br>2019<br>Jaguar<br>Xj <br> <br>BMW| Year = 2022<br>Label = BMW<br>Model = M5<br><br>Year = 2024<br>Label = Mers<br>Model = CLK<br><br>Year = 2019<br>Label = Jaguar<br>Model = Xj<br><br>This data exist! |
2022<br>BMW<br>M5<br>2024<br>Mers<br>CLK<br>2019<br>Jaguar<br>Xj <br> <br>2005| Year = 2022<br>Label = BMW<br>Model = M5<br><br>Year = 2024<br>Label = Mers<br>Model = CLK<br><br>Year = 2019<br>Label = Jaguar<br>Model = Xj<br><br>NO DATA!|