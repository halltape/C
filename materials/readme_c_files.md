# Программы на СИ
Все программы проверены на синтаксис и на утечки памяти. Содержимое обновляется
***
Проверка на синтаксис 
>python3 check/cpplint.py --extensions=c c_files/name.c

Установка python3:
>sudo apt install python3
***

Установка python3 на Mac:
>[Порядок действий](https://github.com/halltape/C/blob/master/materials/mac_python3.md)
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
| Входные данные | Выходные данные |
| ------ | ------ |
|5| num  = 5<br>Address of num (input function1) = 0x7fffdb56b680<br><br>num  = 5<br>Address of num (result function) = 0x7fffdb56b680<br><br>result of num * 2 = 10<br>Address of result = 0x7fffdb56b668|

P.S. Адреса могут быть разными на разных машинах

[Одномерный статический массив](https://github.com/halltape/C/blob/master/c_files/1d_static_array.c)
| Входные данные | Выходные данные |
| ------ | ------ |
|5<br>5 4 3 2 1 | Your array<br>1 2 3 4 5|

[Двумерный статический массив](https://github.com/halltape/C/blob/master/c_files/2d_static_array.c)
| Входные данные | Выходные данные |
| ------ | ------ |
|3<br>9 8 7 6 5 4 | Your array<br>8 9<br>6 7<br>4 5|

## 2. Динамическая память
* Input-Output
* Проверка на ввод 
* Пузырьковая сортировка 
* Используются функции и указатели

[Одномерный динамический массив](https://github.com/halltape/C/blob/master/c_files/1d_dynamic_array.c)
| Входные данные | Выходные данные |
| ------ | ------ |
|5<br>5 4 3 2 1 | Your array<br>1 2 3 4 5|

[Одномерный безразмерный динамический массив](https://github.com/halltape/C/blob/master/c_files/1d_dynamic_nosize__array.c)
| Входные данные | Выходные данные |
| ------ | ------ |
|6 4 2 7 8 1 9 -1| Your array<br>1 2 4 6 7 8 9 -1|

[Двумерный динамический массив](https://github.com/halltape/C/blob/master/c_files/2d_dynamic_array.c)
| Входные данные | Выходные данные |
| ------ | ------ |
|2<br>3<br>9 4 6 7 2 5| Your array<br>4 6 9 <br>2 5 7|

[Змейка](https://github.com/halltape/C/blob/master/c_files/snake(dynamic_array).c)
| Входные данные | Выходные данные |
| ------ | ------ |
|5<br>6| 1&emsp;2&nbsp;&nbsp;&nbsp;3&nbsp;&nbsp;&nbsp;4&nbsp;&nbsp;&nbsp;5&nbsp;&nbsp;6<br>18 19 20 21 22  7<br>17 28 29 30 23  8<br>16 27 26 25 24  9<br>15 14 13 12 11 10|

## 3. Структуры
* Input-Output
* Поиск совпадения слова в массиве структур
* Используются функции и указатели

[Статический массив структур](https://github.com/halltape/C/blob/master/c_files/struct_static.c)
| Входные данные | Выходные данные |
| ------ | ------ |
|2022<br>BMW<br>M5<br>2024<br>Mers<br>CLK<br>2019<br>Jaguar<br>Xj <br> <br>BMW| Year = 2022<br>Label = BMW<br>Model = M5<br><br>Year = 2024<br>Label = Mers<br>Model = CLK<br><br>Year = 2019<br>Label = Jaguar<br>Model = Xj<br><br>This data exist! |
2022<br>BMW<br>M5<br>2024<br>Mers<br>CLK<br>2019<br>Jaguar<br>Xj <br> <br>2005| Year = 2022<br>Label = BMW<br>Model = M5<br><br>Year = 2024<br>Label = Mers<br>Model = CLK<br><br>Year = 2019<br>Label = Jaguar<br>Model = Xj<br><br>NO DATA!|

***
* Input-Output
* Сортировка структур по алфавиту (имена людей)
* Используются функции и указатели

[Динамический безразмерный массив структур](https://github.com/halltape/C/blob/master/c_files/struct_dynamic.c)
| Входные данные | Выходные данные |
| ------ | ------ |
|25<br>David<br>man<br>30<br>Olivia<br>woman<br>23<br>Jessica<br>woman<br>50<br>Williams<br>man<br>28<br>Charlie<br>man<br>19<br>Arnold<br>man | Age = 19<br>Name = Arnold<br>Sex = man<br><br>Age = 28<br>Name = Charlie<br>Sex = man<br><br>Age = 25<br>Name = David<br>Sex = man<br><br>Age = 23<br>Name = Jessica<br>Sex = woman<br><br>Age = 30<br>Name = Olivia<br>Sex = woman<br><br>Age = 50<br>Name = Williams<br>Sex = man|

***
* Input-Output
* Используются функции и указатели

[Односвязный список](https://github.com/halltape/C/blob/master/c_files/single_linked_list.c)
| Входные данные | Выходные данные |
| ------ | ------ |
25<br>David<br>man<br>30<br>Olivia<br>woman<br>23<br>Jessica<br>woman<br>50<br>Williams<br>man<br>28<br>Charlie<br>man<br>19<br>Arnold<br>man<br>-1<br>-1<br>-1 | Age = 25<br>Name = David<br>Sex = man<br><br>Age = 30<br>Name = Olivia<br>Sex = woman<br><br>Age = 23<br>Name = Jessica<br>Sex = woman<br><br>Age = 50<br>Name = Williams<br>Sex = man<br><br>Age = 28<br>Name = Charlie<br>Sex = man<br><br>Age = 19<br>Name = Arnold<br>Sex = man<br><br>The number of elements = 6|